
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls {int mm_flags; int mm_effective; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mac_mls *VAR_1, struct mac_mls *VAR_2)
{

 FUNC_0((VAR_1->mm_flags & VAR_0) != 0,
     ("mls_copy_effective: labelfrom not effective"));

 VAR_2->mm_effective = VAR_1->mm_effective;
 VAR_2->mm_flags |= VAR_0;
}
