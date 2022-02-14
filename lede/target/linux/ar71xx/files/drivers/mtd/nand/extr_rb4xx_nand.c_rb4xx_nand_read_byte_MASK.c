
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static unsigned char FUNC_2(struct mtd_info *VAR_0)
{
 unsigned char VAR_1 = 0;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1, 1);
 if (VAR_2) {
  FUNC_0("rb4xx_nand: read data failed, err=%d\n", VAR_2);
  VAR_1 = 0xff;
 }

 return VAR_1;
}
