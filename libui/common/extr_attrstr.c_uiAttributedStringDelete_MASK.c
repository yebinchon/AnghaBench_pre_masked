
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {size_t* u8tou16; size_t* s; size_t len; size_t* u16; size_t u16len; size_t* u16tou8; int attrs; } ;
typedef TYPE_1__ uiAttributedString ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t) ;
 int FUNC_4 (int ,size_t,size_t) ;

void FUNC_5(uiAttributedString *VAR_0, size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;
 size_t VAR_5, VAR_6;
 size_t VAR_7;

 if (!FUNC_2(VAR_0, VAR_1)) {

 }
 if (!FUNC_2(VAR_0, VAR_2)) {

 }

 VAR_5 = VAR_2 - VAR_1;
 VAR_3 = VAR_0->u8tou16[VAR_1];
 VAR_4 = VAR_0->u8tou16[VAR_2];
 VAR_6 = VAR_4 - VAR_3;

 FUNC_0(VAR_0);


 FUNC_1(
  VAR_0->s + VAR_1,
  VAR_0->s + VAR_2,
  (VAR_0->len - VAR_2) * sizeof (char));
 FUNC_1(
  VAR_0->u16 + VAR_3,
  VAR_0->u16 + VAR_4,
  (VAR_0->u16len - VAR_4) * sizeof (uint16_t));

 FUNC_1(
  VAR_0->u8tou16 + VAR_1,
  VAR_0->u8tou16 + VAR_2,
  (VAR_0->len - VAR_2 + 1) * sizeof (size_t));
 FUNC_1(
  VAR_0->u16tou8 + VAR_3,
  VAR_0->u16tou8 + VAR_4,
  (VAR_0->u16len - VAR_4 + 1) * sizeof (size_t));



 for (VAR_7 = 0; VAR_7 <= (VAR_0->len - VAR_2); VAR_7++)
  VAR_0->u8tou16[VAR_1 + VAR_7] -= VAR_6;
 for (VAR_7 = 0; VAR_7 <= (VAR_0->u16len - VAR_4); VAR_7++)
  VAR_0->u16tou8[VAR_3 + VAR_7] -= VAR_5;


 VAR_0->s[VAR_1 + (VAR_0->len - VAR_2)] = 0;
 VAR_0->u16[VAR_3 + (VAR_0->u16len - VAR_4)] = 0;


 FUNC_4(VAR_0->attrs, VAR_1, VAR_2);


 FUNC_3(VAR_0, VAR_0->len - VAR_5, VAR_0->u16len - VAR_6);
}
