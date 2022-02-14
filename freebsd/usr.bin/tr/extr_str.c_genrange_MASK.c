
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {char* str; int lastch; int cnt; int* set; int state; } ;
typedef TYPE_1__ STR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (void const*,void const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int ,int *) ;
 int* FUNC_4 (int) ;
 size_t FUNC_5 (int*,char*,int ,int *) ;
 int FUNC_6 (int*,int,int,scalar_t__ (*) (void const*,void const*)) ;

__attribute__((used)) static int
FUNC_7(STR *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 char *VAR_11;
 int VAR_12, VAR_13, *VAR_14;
 size_t VAR_15;
 wchar_t VAR_16;

 VAR_10 = 0;
 VAR_11 = VAR_7->str;
 if (*++VAR_7->str == '\\')
  VAR_9 = FUNC_0(VAR_7, &VAR_10);
 else {
  VAR_15 = FUNC_5(&VAR_16, VAR_7->str, VAR_2, ((void*)0));
  if (VAR_15 == (size_t)-1 || VAR_15 == (size_t)-2)
   FUNC_3(1, VAR_0, ((void*)0));
  VAR_9 = VAR_16;
  VAR_7->str += VAR_15;
 }




 if (VAR_10 || VAR_8 || VAR_1 > 1) {
  if (VAR_9 < VAR_7->lastch) {
   VAR_7->str = VAR_11;
   return (0);
  }
  VAR_7->cnt = VAR_9 - VAR_7->lastch + 1;
  VAR_7->state = VAR_5;
  --VAR_7->lastch;
  return (1);
 }
 if (FUNC_1((const void *)&VAR_9, (const void *)&(VAR_7->lastch)) < 0) {
  VAR_7->str = VAR_11;
  return (0);
 }
 if ((VAR_7->set = VAR_14 = FUNC_4((VAR_3 + 1) * sizeof(int))) == ((void*)0))
  FUNC_2(1, "genrange() malloc");
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  if (FUNC_1((const void *)&VAR_13, (const void *)&(VAR_7->lastch)) >= 0 &&
      FUNC_1((const void *)&VAR_13, (const void *)&VAR_9) <= 0)
   *VAR_14++ = VAR_13;
 *VAR_14 = VAR_4;
 VAR_12 = VAR_14 - VAR_7->set;

 VAR_7->cnt = 0;
 VAR_7->state = VAR_6;
 if (VAR_12 > 1)
  FUNC_6(VAR_7->set, VAR_12, sizeof(*(VAR_7->set)), FUNC_1);
 return (1);
}
