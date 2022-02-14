
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_1 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_2 (struct mac_lomac*,struct mac_lomac*) ;

__attribute__((used)) static void
FUNC_3(struct mac_lomac *VAR_3, struct mac_lomac *VAR_4)
{

 if (VAR_3->ml_flags & VAR_2)
  FUNC_2(VAR_3, VAR_4);
 if (VAR_3->ml_flags & VAR_0)
  FUNC_0(VAR_3, VAR_4);
 if (VAR_3->ml_flags & VAR_1)
  FUNC_1(VAR_3, VAR_4);
}
