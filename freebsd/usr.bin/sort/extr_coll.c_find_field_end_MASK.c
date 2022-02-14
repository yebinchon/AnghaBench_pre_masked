
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct key_specs {size_t f2; scalar_t__ c2; int pos2b; } ;
struct bwstring {int dummy; } ;
struct TYPE_2__ {scalar_t__ field_sep; scalar_t__ tflag; } ;


 size_t FUNC_0 (struct bwstring const*) ;
 scalar_t__ FUNC_1 (struct bwstring const*,size_t) ;
 size_t FUNC_2 (struct bwstring const*,scalar_t__,size_t,int ,int*) ;
 size_t FUNC_3 (struct bwstring const*,size_t,int*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static size_t
FUNC_4(const struct bwstring *VAR_1, struct key_specs *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 bool VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_3 = VAR_2->f2;

 if (VAR_3 == 0)
  return (FUNC_0(VAR_1) + 1);
 else {
  if (VAR_2->c2 == 0) {
   VAR_4 = FUNC_3(VAR_1, VAR_3 + 1,
       &VAR_6);
   if ((VAR_4 > 0) && VAR_0.tflag &&
       ((wchar_t)VAR_0.field_sep == FUNC_1(VAR_1,
       VAR_4 - 1)))
    --VAR_4;
  } else
   VAR_4 = FUNC_3(VAR_1, VAR_3,
       &VAR_6);
 }

 if (VAR_6 || (VAR_4 >= FUNC_0(VAR_1)))
  return (FUNC_0(VAR_1) + 1);

 if (VAR_2->c2) {
  VAR_5 = FUNC_2(VAR_1, VAR_2->c2, VAR_4,
      VAR_2->pos2b, &VAR_7);
  if (VAR_5 < FUNC_0(VAR_1))
   ++VAR_5;
 } else
  VAR_5 = VAR_4;

 return (VAR_5);
}
