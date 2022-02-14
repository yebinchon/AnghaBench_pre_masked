
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; int ml_rangelow; int ml_auxsingle; int ml_rangehigh; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mac_lomac *VAR_2, struct mac_lomac *VAR_3)
{

 FUNC_0((VAR_2->ml_flags & VAR_0) != 0,
     ("lomac_single_in_range: a not auxsingle"));
 FUNC_0((VAR_3->ml_flags & VAR_1) != 0,
     ("lomac_single_in_range: b not range"));

 return (FUNC_1(&VAR_3->ml_rangehigh,
     &VAR_2->ml_auxsingle) &&
     FUNC_1(&VAR_2->ml_auxsingle,
     &VAR_3->ml_rangelow));
}
