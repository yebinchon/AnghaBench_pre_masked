
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fsi_master_acf {int dev; scalar_t__ sram; scalar_t__ cvic; int scu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void *VAR_7)
{
 struct fsi_master_acf *VAR_8 = VAR_7;
 int VAR_9;
 u8 VAR_10;




 FUNC_4(VAR_1, VAR_8->sram + VAR_2);
 if (FUNC_1(VAR_8->sram + VAR_3) == 0) {
  unsigned int VAR_11 = 0;

  FUNC_5(VAR_8->scu, VAR_6, &VAR_11);
  if (!(VAR_11 & VAR_5))
   return 0;
 }


 if (VAR_8->cvic)
  FUNC_3(0x2, VAR_8->cvic + VAR_4);

 for (VAR_9 = 0; VAR_9 < 10000; VAR_9++) {
  VAR_10 = FUNC_2(VAR_8->sram + VAR_2);
  if (VAR_10 != VAR_1)
   break;
  FUNC_6(1);
 }


 if (VAR_10 != VAR_0)
  FUNC_0(VAR_8->dev, "GPIO request arbitration timeout\n");

 return 0;
}
