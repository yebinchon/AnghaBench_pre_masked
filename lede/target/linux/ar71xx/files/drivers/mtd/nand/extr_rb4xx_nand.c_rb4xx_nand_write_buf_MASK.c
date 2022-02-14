
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char const*,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0, const unsigned char *VAR_1,
     int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0("rb4xx_nand: write buf failed, err=%d\n", VAR_3);
}
