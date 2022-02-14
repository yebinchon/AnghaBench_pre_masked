
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mac_biba*,struct mac_biba*) ;
 int FUNC_1 (struct mac_biba*,struct mac_biba*) ;

__attribute__((used)) static void
FUNC_2(struct mac_biba *VAR_2, struct mac_biba *VAR_3)
{

 if (VAR_2->mb_flags & VAR_0)
  FUNC_0(VAR_2, VAR_3);
 if (VAR_2->mb_flags & VAR_1)
  FUNC_1(VAR_2, VAR_3);
}
