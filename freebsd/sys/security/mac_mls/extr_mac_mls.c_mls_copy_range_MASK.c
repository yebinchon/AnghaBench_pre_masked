
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int mm_flags; int mm_rangehigh; int mm_rangelow; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mac_mls *VAR_1, struct mac_mls *VAR_2)
{

 FUNC_0((VAR_1->mm_flags & VAR_0) != 0,
     ("mls_copy_range: labelfrom not range"));

 VAR_2->mm_rangelow = VAR_1->mm_rangelow;
 VAR_2->mm_rangehigh = VAR_1->mm_rangehigh;
 VAR_2->mm_flags |= VAR_0;
}
