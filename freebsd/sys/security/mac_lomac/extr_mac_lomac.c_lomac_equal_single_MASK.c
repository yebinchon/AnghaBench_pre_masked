
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; int ml_single; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mac_lomac *VAR_1, struct mac_lomac *VAR_2)
{

 FUNC_0((VAR_1->ml_flags & VAR_0) != 0,
     ("lomac_equal_single: a not single"));
 FUNC_0((VAR_2->ml_flags & VAR_0) != 0,
     ("lomac_equal_single: b not single"));

 return (FUNC_1(&VAR_1->ml_single, &VAR_2->ml_single));
}
