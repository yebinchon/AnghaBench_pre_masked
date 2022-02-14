
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int flags; scalar_t__ type; } ;
struct menu {struct menu* next; struct menu* parent; struct menu* list; struct symbol* sym; } ;
struct TYPE_2__ {struct menu* list; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct symbol*,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_3 (struct menu*) ;
 struct symbol* FUNC_4 (int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct symbol*) ;
 struct symbol* FUNC_7 (struct symbol*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct symbol*) ;
 int FUNC_10 (struct symbol*) ;
 int FUNC_11 (struct symbol*) ;
 scalar_t__ FUNC_12 (struct symbol*) ;
 int FUNC_13 (struct symbol*) ;
 int FUNC_14 (struct symbol*) ;
 scalar_t__ FUNC_15 (struct symbol*) ;
 int FUNC_16 (struct symbol*) ;
 scalar_t__ VAR_4 ;

int FUNC_17(const char *VAR_5)
{
 struct symbol *VAR_6;
 struct menu *VAR_7;
 FILE *VAR_8;

 VAR_8 = FUNC_2(VAR_5, "w");
 if (!VAR_8)
  return 1;

 FUNC_8();


 VAR_7 = VAR_3.list;

 while (VAR_7 != ((void*)0))
 {
  VAR_6 = VAR_7->sym;
  if (VAR_6 == ((void*)0)) {
   if (!FUNC_3(VAR_7))
    goto next_menu;
  } else if (!FUNC_14(VAR_6)) {
   FUNC_6(VAR_6);
   if (!(VAR_6->flags & VAR_0))
    goto next_menu;
   VAR_6->flags &= ~VAR_0;

   if (!FUNC_13(VAR_6))
    goto next_menu;

   if (FUNC_5(FUNC_11(VAR_6), FUNC_10(VAR_6)) == 0)
    goto next_menu;
   if (FUNC_15(VAR_6)) {
    struct symbol *VAR_9;
    struct symbol *VAR_10;

    VAR_9 = FUNC_4(FUNC_9(VAR_6));
    VAR_10 = FUNC_7(VAR_9);
    if (!FUNC_16(VAR_9) && VAR_6 == VAR_10) {
     if ((VAR_6->type == VAR_1) &&
         FUNC_12(VAR_6) == VAR_4)
      goto next_menu;
    }
   }
   FUNC_0(VAR_8, VAR_6, &VAR_2, ((void*)0));
  }
next_menu:
  if (VAR_7->list != ((void*)0)) {
   VAR_7 = VAR_7->list;
  }
  else if (VAR_7->next != ((void*)0)) {
   VAR_7 = VAR_7->next;
  } else {
   while ((VAR_7 = VAR_7->parent)) {
    if (VAR_7->next != ((void*)0)) {
     VAR_7 = VAR_7->next;
     break;
    }
   }
  }
 }
 FUNC_1(VAR_8);
 return 0;
}
