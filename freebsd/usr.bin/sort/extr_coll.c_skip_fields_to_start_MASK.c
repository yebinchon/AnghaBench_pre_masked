
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {scalar_t__ field_sep; int tflag; } ;


 size_t FUNC_0 (struct bwstring const*) ;
 scalar_t__ FUNC_1 (struct bwstring const*,size_t) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static size_t
FUNC_3(const struct bwstring *VAR_1, size_t VAR_2, bool *VAR_3)
{

 if (VAR_2 < 2) {
  if (FUNC_0(VAR_1) == 0)
   *VAR_3 = 1;
  return (0);
 } else if (!(VAR_0.tflag)) {
  size_t VAR_4 = 0;
  bool VAR_5 = 1;

  while (VAR_4 < FUNC_0(VAR_1)) {
   bool VAR_6;

   VAR_6 = FUNC_2(FUNC_1(VAR_1, VAR_4));

   if (VAR_6 && !VAR_5) {
    --VAR_2;
    if (VAR_2 <= 1)
     return (VAR_4);
   }
   VAR_5 = VAR_6;
   ++VAR_4;
  }
  if (VAR_2 > 1)
   *VAR_3 = 1;
  return (VAR_4);
 } else {
  size_t VAR_7 = 0;

  while (VAR_7 < FUNC_0(VAR_1)) {
   if (FUNC_1(VAR_1,VAR_7) == (wchar_t)VAR_0.field_sep) {
    --VAR_2;
    if (VAR_2 <= 1)
     return (VAR_7 + 1);
   }
   ++VAR_7;
  }
  if (VAR_2 > 1)
   *VAR_3 = 1;
  return (VAR_7);
 }
}
