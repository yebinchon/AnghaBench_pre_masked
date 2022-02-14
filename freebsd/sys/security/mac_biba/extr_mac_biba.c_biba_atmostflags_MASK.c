
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mac_biba *VAR_1, int VAR_2)
{

 if ((VAR_1->mb_flags & VAR_2) != VAR_1->mb_flags)
  return (VAR_0);
 return (0);
}
