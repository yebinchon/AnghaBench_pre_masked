
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_rgid; scalar_t__ cr_ruid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,struct ucred*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ucred*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct ucred *VAR_7, struct ucred *VAR_8)
{

 if (!VAR_3)
  return (0);

 if (VAR_2) {
  if (VAR_7->cr_rgid == VAR_8->cr_rgid)
   return (0);
 }

 if (VAR_5) {
  if (VAR_7->cr_rgid == VAR_4 ||
      FUNC_0(VAR_4, VAR_7))
   return (0);
 }

 if (VAR_7->cr_ruid == VAR_8->cr_ruid)
  return (0);

 if (VAR_6) {
  if (FUNC_1(VAR_7, VAR_1) == 0)
   return (0);
 }

 return (VAR_0);
}
