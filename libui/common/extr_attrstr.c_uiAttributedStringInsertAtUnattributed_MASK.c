
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_6__ {size_t* u8tou16; size_t len; size_t u16len; char* s; char* u16; char* u16tou8; int attrs; } ;
typedef TYPE_1__ uiAttributedString ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t) ;
 int FUNC_4 (char const*,size_t*,size_t*) ;
 int FUNC_5 (int ,size_t,size_t) ;
 size_t FUNC_6 (int ,void**) ;
 char* FUNC_7 (char const*,int ,int *) ;
 size_t FUNC_8 (int ,char*) ;

void FUNC_9(uiAttributedString *VAR_0, const char *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3;
 char VAR_4[4];
 uint16_t VAR_5[2];
 size_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9;
 size_t VAR_10, VAR_11;
 size_t VAR_12, VAR_13;
 size_t VAR_14;
 size_t VAR_15;

 if (!FUNC_2(VAR_0, VAR_2)) {

 }

 VAR_14 = 0;
 if (VAR_0->u8tou16 != ((void*)0))
  VAR_14 = VAR_0->u8tou16[VAR_2];


 FUNC_0(VAR_0);



 FUNC_4(VAR_1, &VAR_6, &VAR_7);


 VAR_8 = VAR_2;
 VAR_9 = VAR_14;
 VAR_12 = VAR_0->len;
 VAR_13 = VAR_0->u16len;
 FUNC_3(VAR_0, VAR_0->len + VAR_6, VAR_0->u16len + VAR_7);



 FUNC_1(
  VAR_0->s + VAR_2 + VAR_6,
  VAR_0->s + VAR_2,
  (VAR_12 - VAR_2) * sizeof (char));
 FUNC_1(
  VAR_0->u16 + VAR_14 + VAR_7,
  VAR_0->u16 + VAR_14,
  (VAR_13 - VAR_14) * sizeof (uint16_t));

 FUNC_1(
  VAR_0->u8tou16 + VAR_2 + VAR_6,
  VAR_0->u8tou16 + VAR_2,
  (VAR_12 - VAR_2 + 1) * sizeof (size_t));
 FUNC_1(
  VAR_0->u16tou8 + VAR_14 + VAR_7,
  VAR_0->u16tou8 + VAR_14,
  (VAR_13 - VAR_14 + 1) * sizeof (size_t));
 VAR_10 = VAR_6;
 VAR_11 = VAR_7;


 while (*VAR_1) {
  size_t VAR_16;

  VAR_1 = FUNC_7(VAR_1, 0, &VAR_3);
  VAR_16 = FUNC_8(VAR_3, VAR_4);
  VAR_7 = FUNC_6(VAR_3, VAR_5);
  VAR_0->s[VAR_8] = VAR_4[0];
  VAR_0->u8tou16[VAR_8] = VAR_9;
  if (VAR_16 > 1) {
   VAR_0->s[VAR_8 + 1] = VAR_4[1];
   VAR_0->u8tou16[VAR_8 + 1] = VAR_9;
  }
  if (VAR_16 > 2) {
   VAR_0->s[VAR_8 + 2] = VAR_4[2];
   VAR_0->u8tou16[VAR_8 + 2] = VAR_9;
  }
  if (VAR_16 > 3) {
   VAR_0->s[VAR_8 + 3] = VAR_4[3];
   VAR_0->u8tou16[VAR_8 + 3] = VAR_9;
  }
  VAR_0->u16[VAR_9] = VAR_5[0];
  VAR_0->u16tou8[VAR_9] = VAR_8;
  if (VAR_7 > 1) {
   VAR_0->u16[VAR_9 + 1] = VAR_5[1];
   VAR_0->u16tou8[VAR_9 + 1] = VAR_8;
  }
  VAR_8 += VAR_16;
  VAR_9 += VAR_7;
 }







 for (VAR_15 = 0; VAR_15 <= VAR_12 - VAR_2; VAR_15++)
  VAR_0->u8tou16[VAR_2 + VAR_10 + VAR_15] += VAR_0->u16len - VAR_13;
 for (VAR_15 = 0; VAR_15 <= VAR_13 - VAR_14; VAR_15++)
  VAR_0->u16tou8[VAR_14 + VAR_11 + VAR_15] += VAR_0->len - VAR_12;


 FUNC_5(VAR_0->attrs, VAR_2, VAR_6);
}
