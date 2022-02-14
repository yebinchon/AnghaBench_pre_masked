
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_core {int chan; } ;


 int FUNC_0 (struct nv50_core*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nv50_core **VAR_0)
{
 struct nv50_core *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_1(&VAR_1->chan);
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
