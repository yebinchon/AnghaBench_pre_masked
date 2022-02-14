
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawPath ;
struct piece {double* d; int type; } ;


 int FUNC_0 (int *,struct piece*) ;
 int VAR_0 ;

void FUNC_1(uiDrawPath *VAR_1, double VAR_2, double VAR_3)
{
 struct piece VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.d[0] = VAR_2;
 VAR_4.d[1] = VAR_3;
 FUNC_0(VAR_1, &VAR_4);
}
