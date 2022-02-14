
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_lomac {int ml_flags; int ml_rangehigh; int ml_rangelow; int ml_auxsingle; int ml_single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sbuf*,int *) ;
 int FUNC_1 (struct sbuf*,char) ;

__attribute__((used)) static int
FUNC_2(struct sbuf *VAR_4, struct mac_lomac *VAR_5)
{

 if (VAR_5->ml_flags & VAR_3) {
  if (FUNC_0(VAR_4, &VAR_5->ml_single) == -1)
   return (VAR_0);
 }

 if (VAR_5->ml_flags & VAR_1) {
  if (FUNC_1(VAR_4, '[') == -1)
   return (VAR_0);

  if (FUNC_0(VAR_4, &VAR_5->ml_auxsingle) == -1)
   return (VAR_0);

  if (FUNC_1(VAR_4, ']') == -1)
   return (VAR_0);
 }

 if (VAR_5->ml_flags & VAR_2) {
  if (FUNC_1(VAR_4, '(') == -1)
   return (VAR_0);

  if (FUNC_0(VAR_4, &VAR_5->ml_rangelow) == -1)
   return (VAR_0);

  if (FUNC_1(VAR_4, '-') == -1)
   return (VAR_0);

  if (FUNC_0(VAR_4, &VAR_5->ml_rangehigh) == -1)
   return (VAR_0);

  if (FUNC_1(VAR_4, ')') == -1)
   return (VAR_0);
 }

 return (0);
}
