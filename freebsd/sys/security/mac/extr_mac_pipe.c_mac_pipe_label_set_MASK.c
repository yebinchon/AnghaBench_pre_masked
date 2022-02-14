
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct pipepair {int pp_mtx; } ;
struct label {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucred*,struct pipepair*,struct label*) ;
 int FUNC_1 (struct ucred*,struct pipepair*,struct label*) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(struct ucred *VAR_1, struct pipepair *VAR_2,
    struct label *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2->pp_mtx, VAR_0);

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return (VAR_4);

 FUNC_1(VAR_1, VAR_2, VAR_3);

 return (0);
}
