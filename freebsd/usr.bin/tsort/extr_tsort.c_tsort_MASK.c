
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int n_name; } ;
struct TYPE_7__ {scalar_t__ n_refcnt; int n_flags; struct TYPE_7__* n_next; } ;
typedef TYPE_1__ NODE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ,int ) ;
 TYPE_1__* VAR_2 ;
 TYPE_3__** VAR_3 ;
 void* FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(void)
{
 NODE *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 while (VAR_2 != ((void*)0)) {





  do {
   for (VAR_7 = 0, VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
    VAR_6 = VAR_5->n_next;
    if (VAR_5->n_refcnt == 0) {
     FUNC_5(VAR_5);
     ++VAR_7;
    }
   }
  } while (VAR_2 != ((void*)0) && VAR_7);

  if (VAR_2 == ((void*)0))
   break;

  if (!VAR_1) {





   for (VAR_7 = 0, VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->n_next)
    ++VAR_7;
   VAR_1 = FUNC_4(sizeof(NODE *) * VAR_7);
   VAR_3 = FUNC_4(sizeof(NODE *) * VAR_7);
   if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
    FUNC_1(1, ((void*)0));
  }
  for (VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->n_next)
   if (!(VAR_5->n_flags & VAR_0)) {
    if ((VAR_7 = FUNC_3(VAR_5, VAR_5, 0, 0))) {
     if (!VAR_4) {
      FUNC_6("cycle in data");
      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
       FUNC_6("%s",
           VAR_3[VAR_8]->n_name);
     }
     FUNC_5(VAR_5);
     FUNC_0();
     break;
    } else {

     VAR_5->n_flags |= VAR_0;
     FUNC_0();
    }
   }

  if (VAR_5 == ((void*)0))
   FUNC_2(1, "internal error -- could not find cycle");
 }
}
