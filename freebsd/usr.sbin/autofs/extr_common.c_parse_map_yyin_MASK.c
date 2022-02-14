
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,char*) ;
 int FUNC_2 (int,char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 struct node* FUNC_4 (struct node*,char*,char*,char*,char const*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct node *VAR_3, const char *VAR_4, const char *VAR_5)
{
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0),
     *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11;
 struct node *VAR_12;

 VAR_1 = 1;

 if (VAR_5 != ((void*)0))
  VAR_6 = FUNC_0(VAR_5);

 for (;;) {
  VAR_11 = FUNC_6();
  if (VAR_11 == 0 || VAR_11 == VAR_0) {





   if ((VAR_6 != ((void*)0) && VAR_5 == ((void*)0)) ||
       VAR_7 != ((void*)0)) {
    FUNC_2(1, "truncated entry at %s, line %d",
        VAR_4, VAR_1);
   }
   if (VAR_11 == 0 || VAR_5 != ((void*)0)) {



    break;
   } else {
    VAR_6 = VAR_7 = ((void*)0);
    continue;
   }
  }
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_0(VAR_2);
   if (VAR_6[0] == '+') {
    FUNC_4(VAR_3, VAR_6, ((void*)0), ((void*)0), VAR_4, VAR_1);
    VAR_6 = VAR_7 = ((void*)0);
    continue;
   }
   continue;
  } else if (VAR_2[0] == '-') {
   if (VAR_7 != ((void*)0)) {
    FUNC_2(1, "duplicated options at %s, line %d",
        VAR_4, VAR_1);
   }



   VAR_7 = FUNC_0(VAR_2 + 1);
   continue;
  }
  if (FUNC_5(VAR_6, "/") == 0) {
   FUNC_3("nonsensical map key \"/\" at %s, line %d; "
       "ignoring map entry ", VAR_4, VAR_1);




   do {
    VAR_11 = FUNC_6();
   } while (VAR_11 != 0 && VAR_11 != VAR_0);

   VAR_6 = VAR_7 = ((void*)0);
   continue;
  }


  VAR_12 = FUNC_4(VAR_3, VAR_6, VAR_7, ((void*)0), VAR_4, VAR_1);
  VAR_6 = VAR_7 = ((void*)0);

  for (;;) {
   if (VAR_2[0] == '/') {
    if (VAR_8 != ((void*)0)) {
     FUNC_2(1, "duplicated mountpoint "
         "in %s, line %d", VAR_4, VAR_1);
    }
    if (VAR_9 != ((void*)0) || VAR_10 != ((void*)0)) {
     FUNC_2(1, "mountpoint out of order "
         "in %s, line %d", VAR_4, VAR_1);
    }
    VAR_8 = FUNC_0(VAR_2);
    goto again;
   }

   if (VAR_2[0] == '-') {
    if (VAR_9 != ((void*)0)) {
     FUNC_2(1, "duplicated options "
         "in %s, line %d", VAR_4, VAR_1);
    }
    if (VAR_10 != ((void*)0)) {
     FUNC_2(1, "options out of order "
         "in %s, line %d", VAR_4, VAR_1);
    }
    VAR_9 = FUNC_0(VAR_2 + 1);
    goto again;
   }

   if (VAR_10 != ((void*)0)) {
    FUNC_2(1, "too many arguments "
        "in %s, line %d", VAR_4, VAR_1);
   }





   if (VAR_2[0] == ':') {
    VAR_10 = FUNC_0(VAR_2 + 1);
    if (VAR_10[0] == '\0') {
     FUNC_2(1, "empty location in %s, "
         "line %d", VAR_4, VAR_1);
    }
   } else {
    VAR_10 = FUNC_0(VAR_2);
   }

   if (VAR_8 == ((void*)0))
    VAR_8 = FUNC_0("/");
   if (VAR_9 == ((void*)0))
    VAR_9 = FUNC_0("");





   FUNC_4(VAR_12, VAR_8, VAR_9, VAR_10,
       VAR_4, VAR_1);
   VAR_8 = VAR_9 = VAR_10 = ((void*)0);
again:
   VAR_11 = FUNC_6();
   if (VAR_11 == 0 || VAR_11 == VAR_0) {
    if (VAR_8 != ((void*)0) || VAR_9 != ((void*)0) ||
        VAR_10 != ((void*)0)) {
     FUNC_2(1, "truncated entry "
         "in %s, line %d", VAR_4, VAR_1);
    }
    break;
   }
  }
 }
}
