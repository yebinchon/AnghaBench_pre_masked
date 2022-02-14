
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct pipepair {int pp_label; int pp_mtx; } ;
struct label {int dummy; } ;


 int FUNC_0 (int ,int,struct ucred*,struct pipepair*,struct label*) ;
 int FUNC_1 (int ,struct ucred*,struct pipepair*,int ,struct label*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_2, struct pipepair *VAR_3,
    struct label *VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_3->pp_mtx, VAR_0);

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_3->pp_label,
     VAR_4);
 FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
