
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct pipepair {int pp_label; int pp_mtx; } ;


 int FUNC_0 (int ,int,struct ucred*,struct pipepair*) ;
 int FUNC_1 (int ,struct ucred*,struct pipepair*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

int
FUNC_3(struct ucred *VAR_2, struct pipepair *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->pp_mtx, VAR_0);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_3->pp_label);
 FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);

 return (VAR_4);
}
