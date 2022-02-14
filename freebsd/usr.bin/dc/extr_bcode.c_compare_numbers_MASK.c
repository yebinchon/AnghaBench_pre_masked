
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct number {scalar_t__ scale; int number; } ;
typedef enum bcode_compare { ____Placeholder_bcode_compare } bcode_compare ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct number*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct number*,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(enum bcode_compare VAR_0, struct number *VAR_1, struct number *VAR_2)
{
 u_int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_1->scale, VAR_2->scale);

 if (VAR_3 > VAR_1->scale)
  FUNC_3(VAR_1, VAR_3);
 else if (VAR_3 > VAR_2->scale)
  FUNC_3(VAR_2, VAR_3);

 VAR_4 = FUNC_0(VAR_1->number, VAR_2->number);

 FUNC_1(VAR_1);
 FUNC_1(VAR_2);

 switch (VAR_0) {
 case 133:
  return (VAR_4 == 0);
 case 130:
  return (VAR_4 != 0);
 case 131:
  return (VAR_4 < 0);
 case 128:
  return (VAR_4 >= 0);
 case 132:
  return (VAR_4 > 0);
 case 129:
  return (VAR_4 <= 0);
 }
 return (0);
}
