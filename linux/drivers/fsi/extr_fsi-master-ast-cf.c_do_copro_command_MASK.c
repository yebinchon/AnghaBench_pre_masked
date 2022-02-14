
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_master_acf {scalar_t__ sram; int dev; scalar_t__ cvic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct fsi_master_acf*,int) ;

__attribute__((used)) static int FUNC_5(struct fsi_master_acf *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = 10000000;
 uint8_t VAR_11;

 FUNC_4(VAR_8, VAR_9);


 FUNC_3(VAR_9, VAR_8->sram + VAR_0);


 if (VAR_8->cvic)
  FUNC_2(0x2, VAR_8->cvic + VAR_1);


 do {
  if (VAR_10-- == 0) {
   FUNC_0(VAR_8->dev,
     "Timeout waiting for coprocessor completion\n");
   return -VAR_6;
  }
  VAR_11 = FUNC_1(VAR_8->sram + VAR_0);
 } while(VAR_11 < VAR_7 || VAR_11 == 0xff);

 if (VAR_11 == VAR_7)
  return 0;
 switch(VAR_11) {
 case 130:
  return -VAR_2;
 case 129:
  return -VAR_3;
 case 128:
  return -VAR_5;
 }
 return -VAR_4;
}
