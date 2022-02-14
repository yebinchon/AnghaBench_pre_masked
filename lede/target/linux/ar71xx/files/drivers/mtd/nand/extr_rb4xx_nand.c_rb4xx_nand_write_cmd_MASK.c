
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(unsigned char VAR_0)
{
 unsigned char VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1, 1);
 if (VAR_2)
  FUNC_0("rb4xx_nand: write cmd failed, err=%d\n", VAR_2);
}
