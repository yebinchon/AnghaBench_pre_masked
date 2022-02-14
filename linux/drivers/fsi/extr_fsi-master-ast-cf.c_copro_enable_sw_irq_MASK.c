
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_master_acf {int dev; scalar_t__ cvic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fsi_master_acf *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;





 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  FUNC_2(0x2, VAR_2->cvic + VAR_0);
  VAR_4 = FUNC_1(VAR_2->cvic + VAR_0);
  if (VAR_4 & 2)
   break;
  FUNC_3(1);
 }
 if (!(VAR_4 & 2)) {
  FUNC_0(VAR_2->dev, "Failed to enable coprocessor interrupt !\n");
  return -VAR_1;
 }
 return 0;
}
