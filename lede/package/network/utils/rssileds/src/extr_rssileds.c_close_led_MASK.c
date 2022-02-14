
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led {struct led* sysfspath; int controlfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct led*) ;

void FUNC_2(struct led **VAR_0)
{
 FUNC_0((*VAR_0)->controlfd);
 FUNC_1((*VAR_0)->sysfspath);
 FUNC_1((*VAR_0));
 (*VAR_0)=((void*)0);
}
