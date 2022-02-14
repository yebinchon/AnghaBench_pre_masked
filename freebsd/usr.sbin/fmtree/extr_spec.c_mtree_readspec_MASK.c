
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ginfo ;
typedef int buf ;
struct TYPE_7__ {scalar_t__ type; int flags; struct TYPE_7__* next; struct TYPE_7__* prev; struct TYPE_7__* parent; struct TYPE_7__* child; int name; } ;
typedef TYPE_1__ NODE ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int ,char*,int,char*) ;
 scalar_t__ FUNC_5 (char) ;
 int VAR_4 ;
 int FUNC_6 (char*,TYPE_1__*) ;
 int VAR_5 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int *,TYPE_1__*) ;

NODE *
FUNC_14(FILE *VAR_6)
{
 NODE *VAR_7, *VAR_8;
 char *VAR_9;
 NODE VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 char VAR_14[2048];

 VAR_7 = VAR_8 = VAR_11 = ((void*)0);
 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_12 = VAR_13 = 0;
 for (VAR_4 = 1; FUNC_3(VAR_14, sizeof(VAR_14), VAR_6);
     ++VAR_4, VAR_12 = VAR_13, VAR_13 = 0) {

  if (VAR_14[0] == '\n')
   continue;


  if ((VAR_9 = FUNC_7(VAR_14, '\n')) == ((void*)0))
   FUNC_2(1, "line %d too long", VAR_4);


  if (VAR_9[-1] == '\\') {
   --VAR_9;
   VAR_13 = 1;
  }


  *VAR_9 = '\0';


  for (VAR_9 = VAR_14; *VAR_9 && FUNC_5(*VAR_9); ++VAR_9);


  if (!*VAR_9 || *VAR_9 == '#')
   continue;




  if (VAR_12) {
   FUNC_6(VAR_9, VAR_7);
   continue;
  }


  if ((VAR_9 = FUNC_11(VAR_9, "\n\t ")) == ((void*)0))
   FUNC_2(1, "line %d: missing field", VAR_4);

  if (VAR_9[0] == '/')
   switch(VAR_9[1]) {
   case 's':
    if (FUNC_8(VAR_9 + 1, "set"))
     break;
    FUNC_6(((void*)0), &VAR_10);
    continue;
   case 'u':
    if (FUNC_8(VAR_9 + 1, "unset"))
     break;
    FUNC_13(((void*)0), &VAR_10);
    continue;
   }

  if (FUNC_7(VAR_9, '/'))
   FUNC_2(1, "line %d: slash character in file name",
   VAR_4);

  if (!FUNC_8(VAR_9, "..")) {

   if (!VAR_11)
    goto noparent;
   if (VAR_8->type != VAR_0 || VAR_8->flags & VAR_1) {
    if (VAR_8 == VAR_11)
     goto noparent;
    VAR_8 = VAR_8->parent;
   }
   VAR_8->flags |= VAR_1;
   continue;

noparent: FUNC_2(1, "line %d: no parent node", VAR_4);
  }

  if ((VAR_7 = FUNC_1(1, sizeof(NODE) + FUNC_9(VAR_9))) == ((void*)0))
   FUNC_2(1, "calloc");
  *VAR_7 = VAR_10;

  if (FUNC_10(VAR_9, "?*["))
   VAR_7->flags |= VAR_2;
  if (FUNC_12(VAR_7->name, VAR_9) == -1)
   FUNC_2(1, "filename %s is ill-encoded", VAR_9);
  FUNC_6(((void*)0), VAR_7);

  if (!VAR_11) {
   VAR_8 = VAR_11 = VAR_7;
   VAR_11->parent = VAR_11;
  } else if (VAR_8->type == VAR_0 && !(VAR_8->flags & VAR_1)) {
   VAR_7->parent = VAR_8;
   VAR_8 = VAR_8->child = VAR_7;
  } else {
   VAR_7->parent = VAR_8->parent;
   VAR_7->prev = VAR_8;
   VAR_8 = VAR_8->next = VAR_7;
  }
 }
 return (VAR_11);
}
