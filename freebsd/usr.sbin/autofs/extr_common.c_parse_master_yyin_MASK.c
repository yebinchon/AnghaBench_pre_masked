
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,char const*,scalar_t__) ;
 int FUNC_2 (struct node*,char*,char*,char*,char const*,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct node *VAR_3, const char *VAR_4)
{
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8;




 VAR_1 = 0;

 for (;;) {
  VAR_8 = FUNC_3();
  if (VAR_8 == 0 || VAR_8 == VAR_0) {
   if (VAR_5 != ((void*)0)) {

    FUNC_2(VAR_3, VAR_5, VAR_7, VAR_6,
        VAR_4, VAR_1);
   }
   if (VAR_8 == 0) {
    break;
   } else {
    VAR_5 = VAR_6 = VAR_7 = ((void*)0);
    continue;
   }
  }
  if (VAR_5 == ((void*)0)) {
   VAR_5 = FUNC_0(VAR_2);
  } else if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_0(VAR_2);
  } else if (VAR_7 == ((void*)0)) {



   VAR_7 = FUNC_0(VAR_2 + 1);
  } else {
   FUNC_1(1, "too many arguments at %s, line %d",
       VAR_4, VAR_1);
  }
 }
}
