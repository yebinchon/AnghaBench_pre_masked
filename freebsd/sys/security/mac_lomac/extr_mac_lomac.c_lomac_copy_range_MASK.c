
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; int ml_rangehigh; int ml_rangelow; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mac_lomac *VAR_1, struct mac_lomac *VAR_2)
{

 FUNC_0((VAR_1->ml_flags & VAR_0) != 0,
     ("lomac_copy_range: labelfrom not range"));

 VAR_2->ml_rangelow = VAR_1->ml_rangelow;
 VAR_2->ml_rangehigh = VAR_1->ml_rangehigh;
 VAR_2->ml_flags |= VAR_0;
}
