
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; int ml_auxsingle; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct mac_lomac *VAR_1, struct mac_lomac *VAR_2)
{

 FUNC_0((VAR_1->ml_flags & VAR_0) != 0,
     ("lomac_copy_auxsingle: labelfrom not auxsingle"));

 VAR_2->ml_auxsingle = VAR_1->ml_auxsingle;
 VAR_2->ml_flags |= VAR_0;
}
