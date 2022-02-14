
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_14__ {int str_numstr; } ;
struct TYPE_12__ {unsigned int str_numstr; } ;
struct TYPE_13__ {scalar_t__ percent; int pos; int datfd; int * child; TYPE_1__ tbl; int name; struct TYPE_13__* next; } ;
typedef TYPE_2__ FILEDESC ;


 int FUNC_0 (int,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,int *,int) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 FILEDESC *VAR_7;
 int VAR_8;

 if (VAR_0->next == ((void*)0) || VAR_0->percent == VAR_2)
  VAR_7 = VAR_0;
 else {
  VAR_8 = FUNC_1(100);
  FUNC_0(1, (VAR_6, "choice = %d\n", VAR_8));
  for (VAR_7 = VAR_0; VAR_7->percent != VAR_2; VAR_7 = VAR_7->next)
   if (VAR_8 < VAR_7->percent)
    break;
   else {
    VAR_8 -= VAR_7->percent;
    FUNC_0(1, (VAR_6,
         "    skip \"%s\", %d%% (choice = %d)\n",
         VAR_7->name, VAR_7->percent, VAR_8));
   }
   FUNC_0(1, (VAR_6,
        "using \"%s\", %d%% (choice = %d)\n",
        VAR_7->name, VAR_7->percent, VAR_8));
 }
 if (VAR_7->percent != VAR_2)
  FUNC_4(VAR_7);
 else {
  if (VAR_7->next != ((void*)0)) {
   FUNC_9(VAR_7);
   VAR_8 = FUNC_1(VAR_3.str_numstr);
   FUNC_0(1, (VAR_6, "choice = %d (of %u) \n", VAR_8,
        VAR_3.str_numstr));
   while ((unsigned int)VAR_8 >= VAR_7->tbl.str_numstr) {
    VAR_8 -= VAR_7->tbl.str_numstr;
    VAR_7 = VAR_7->next;
    FUNC_0(1, (VAR_6,
         "    skip \"%s\", %u (choice = %d)\n",
         VAR_7->name, VAR_7->tbl.str_numstr,
         VAR_8));
   }
   FUNC_0(1, (VAR_6, "using \"%s\", %u\n", VAR_7->name,
        VAR_7->tbl.str_numstr));
  }
  FUNC_4(VAR_7);
 }
 if (VAR_7->child != ((void*)0)) {
  FUNC_0(1, (VAR_6, "picking child\n"));
  VAR_7 = FUNC_7(VAR_7);
 }
 VAR_1 = VAR_7;
 FUNC_3(VAR_7);
 FUNC_6(VAR_7);
 FUNC_5(VAR_7->datfd,
     (off_t) (sizeof VAR_7->tbl + VAR_7->pos * sizeof VAR_5[0]), VAR_4);
 FUNC_8(VAR_7->datfd, VAR_5, sizeof VAR_5);
 VAR_5[0] = FUNC_2(VAR_5[0]);
 VAR_5[1] = FUNC_2(VAR_5[1]);
}
