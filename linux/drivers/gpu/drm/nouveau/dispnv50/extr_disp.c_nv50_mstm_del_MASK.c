
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_mstm {int mgr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_mstm*) ;

__attribute__((used)) static void
FUNC_2(struct nv50_mstm **VAR_0)
{
 struct nv50_mstm *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_0(&VAR_1->mgr);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
