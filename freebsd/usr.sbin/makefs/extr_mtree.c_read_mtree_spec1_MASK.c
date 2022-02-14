
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_10__ {char const* name; struct TYPE_10__* first; struct TYPE_10__* child; struct TYPE_10__* next; int type; struct TYPE_10__* parent; } ;
typedef TYPE_1__ fsnode ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (char const*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (char*,char const*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_6, bool VAR_7, const char *VAR_8)
{
 fsnode *VAR_9, *VAR_10, *VAR_11;
 u_int VAR_12;
 int VAR_13;

 FUNC_2(VAR_8[0] != '\0');
 if (FUNC_1(VAR_8)) {

  if (VAR_3 == VAR_5) {
   FUNC_6("ignoring .. in root directory");
   return (0);
  }

  VAR_10 = VAR_3;

  FUNC_2(VAR_10 != ((void*)0));
  FUNC_2(FUNC_0(VAR_10->name));
  FUNC_2(VAR_10->first == VAR_10);


  VAR_10 = VAR_3->parent;

  FUNC_2(VAR_10 != ((void*)0));
  FUNC_2(!FUNC_0(VAR_10->name));

  VAR_10 = VAR_10->first;

  FUNC_2(VAR_10 != ((void*)0));
  FUNC_2(FUNC_0(VAR_10->name));
  FUNC_2(VAR_10->first == VAR_10);

  VAR_3 = VAR_10;
  return (0);
 }






 if (!FUNC_0(VAR_8) && VAR_3 == ((void*)0)) {
  VAR_13 = FUNC_9(VAR_6, 0, ".");
  if (VAR_13)
   return (VAR_13);
 }
 VAR_9 = ((void*)0);
 VAR_10 = VAR_3;
 while (VAR_10 != ((void*)0)) {
  FUNC_2(VAR_10->first == VAR_3);

  if (FUNC_8(VAR_8, VAR_10->name) == 0) {
   if (VAR_7 == 1) {
    if (!VAR_2)
     FUNC_5(
         "duplicate definition of %s",
         VAR_8);
    else
     FUNC_6(
         "duplicate definition of %s",
         VAR_8);
    return (0);
   }

   if (VAR_10->type != VAR_1) {
    FUNC_5("%s is not a directory", VAR_8);
    return (0);
   }

   FUNC_2(!FUNC_0(VAR_8));

   VAR_10 = VAR_10->child;

   FUNC_2(VAR_10 != ((void*)0));
   FUNC_2(FUNC_0(VAR_10->name));

   VAR_3 = VAR_10;
   return (0);
  }

  VAR_9 = VAR_10;
  VAR_10 = VAR_9->next;
 }

 VAR_11 = (VAR_3 != ((void*)0)) ? VAR_3->parent : ((void*)0);
 VAR_12 = (VAR_7 == 0 || FUNC_0(VAR_8)) ? VAR_1 : 0;
 VAR_10 = FUNC_3(VAR_8, VAR_12, VAR_11, &VAR_4);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 if (VAR_7 == 1) {
  VAR_13 = FUNC_7(VAR_6, VAR_10);
  if (VAR_13) {
   FUNC_4(VAR_10);
   return (VAR_13);
  }
 }

 VAR_10->first = (VAR_3 != ((void*)0)) ? VAR_3 : VAR_10;

 if (VAR_9 != ((void*)0))
  VAR_9->next = VAR_10;

 if (VAR_10->type != VAR_1)
  return (0);

 if (!FUNC_0(VAR_10->name)) {
  VAR_11 = VAR_10;
  VAR_10 = FUNC_3(".", VAR_1, VAR_11, VAR_11);
  if (VAR_10 == ((void*)0)) {
   VAR_9->next = ((void*)0);
   FUNC_4(VAR_11);
   return (VAR_0);
  }
  VAR_11->child = VAR_10;
  VAR_10->first = VAR_10;
 }

 FUNC_2(VAR_10 != ((void*)0));
 FUNC_2(FUNC_0(VAR_10->name));
 FUNC_2(VAR_10->first == VAR_10);

 VAR_3 = VAR_10;
 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_10;

 return (0);
}
