
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_biba {int mb_flags; int mb_rangehigh; int mb_rangelow; int mb_effective; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sbuf*,int *) ;
 int FUNC_1 (struct sbuf*,char) ;

__attribute__((used)) static int
FUNC_2(struct sbuf *VAR_3, struct mac_biba *VAR_4)
{

 if (VAR_4->mb_flags & VAR_1) {
  if (FUNC_0(VAR_3, &VAR_4->mb_effective) == -1)
   return (VAR_0);
 }

 if (VAR_4->mb_flags & VAR_2) {
  if (FUNC_1(VAR_3, '(') == -1)
   return (VAR_0);

  if (FUNC_0(VAR_3, &VAR_4->mb_rangelow) == -1)
   return (VAR_0);

  if (FUNC_1(VAR_3, '-') == -1)
   return (VAR_0);

  if (FUNC_0(VAR_3, &VAR_4->mb_rangehigh) == -1)
   return (VAR_0);

  if (FUNC_1(VAR_3, ')') == -1)
   return (VAR_0);
 }

 return (0);
}
