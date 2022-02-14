
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef TYPE_1__* bthid_session_p ;
typedef int bitstr_t ;
struct TYPE_3__ {int * keys1; int ukbd; int vkbd; int * keys2; int * srv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int,int,int ) ;
 int VAR_0 ;

int32_t
FUNC_10(bthid_session_p VAR_1)
{
 bitstr_t VAR_2[FUNC_5(VAR_0)];
 int32_t VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->srv != ((void*)0));


 FUNC_2(VAR_1->keys1, VAR_0, &VAR_3);


 FUNC_2(VAR_1->keys2, VAR_0, &VAR_4);

 if (VAR_3 == -1) {

  if (VAR_4 != -1) {

   FUNC_6(VAR_1->keys2, VAR_4, 0, VAR_1->vkbd);
   FUNC_9(VAR_1->keys2, VAR_4, 0, VAR_1->ukbd);
   FUNC_8(VAR_1->keys2, 0, FUNC_5(VAR_0));
  }

  return (0);
 }

 if (VAR_4 == -1) {

  FUNC_0(VAR_3 != -1);

  FUNC_7(VAR_1->keys2, VAR_1->keys1, FUNC_5(VAR_0));
  FUNC_6(VAR_1->keys1, VAR_3, 1, VAR_1->vkbd);
  FUNC_9(VAR_1->keys1, VAR_3, 1, VAR_1->ukbd);
  FUNC_8(VAR_1->keys1, 0, FUNC_5(VAR_0));

  return (0);
 }


 FUNC_8(VAR_2, 0, FUNC_5(VAR_0));

 for (VAR_5 = VAR_4; VAR_5 < VAR_0; VAR_5 ++) {
  if (FUNC_4(VAR_1->keys2, VAR_5)) {
   if (!FUNC_4(VAR_1->keys1, VAR_5)) {
    FUNC_1(VAR_1->keys2, VAR_5);
    FUNC_3(VAR_2, VAR_5);
   }
  }
 }

 for (VAR_5 = VAR_3; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_4(VAR_1->keys1, VAR_5)) {
   if (!FUNC_4(VAR_1->keys2, VAR_5))
    FUNC_3(VAR_1->keys2, VAR_5);
   else
    FUNC_1(VAR_1->keys1, VAR_5);
  }
 }

 FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_4 > 0) {
  FUNC_6(VAR_2, VAR_4, 0, VAR_1->vkbd);
  FUNC_9(VAR_2, VAR_4, 0, VAR_1->ukbd);
 }

 FUNC_2(VAR_1->keys1, VAR_0, &VAR_3);
 if (VAR_3 > 0) {
  FUNC_6(VAR_1->keys1, VAR_3, 1, VAR_1->vkbd);
  FUNC_9(VAR_1->keys1, VAR_3, 1, VAR_1->ukbd);
  FUNC_8(VAR_1->keys1, 0, FUNC_5(VAR_0));
 }

 return (0);
}
