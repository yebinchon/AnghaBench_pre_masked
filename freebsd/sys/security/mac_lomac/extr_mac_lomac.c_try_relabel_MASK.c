
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mac_lomac*,int) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static void
FUNC_2(struct mac_lomac *VAR_1, struct mac_lomac *VAR_2)
{

 if (VAR_1->ml_flags & VAR_0) {
  FUNC_0(VAR_2, sizeof(*VAR_2));
  FUNC_1(VAR_1, VAR_2);
 }
}
