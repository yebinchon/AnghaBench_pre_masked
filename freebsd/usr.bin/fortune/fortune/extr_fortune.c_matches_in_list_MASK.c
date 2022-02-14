
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int str_flags; char str_delim; } ;
struct TYPE_5__ {char* name; TYPE_4__ tbl; int inf; int path; struct TYPE_5__* child; struct TYPE_5__* next; } ;
typedef TYPE_1__ FILEDESC ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,TYPE_4__) ;
 int VAR_7 ;
 void* VAR_8 ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int,int,int ) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char) ;
 scalar_t__ FUNC_10 (int *,char*,int ,int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(FILEDESC *VAR_11)
{
 char *VAR_12, *VAR_13;
 FILEDESC *VAR_14;
 int VAR_15;
 unsigned char VAR_16;

 for (VAR_14 = VAR_11; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
  if (VAR_14->child != ((void*)0)) {
   FUNC_12(VAR_14->child);
   continue;
  }
  FUNC_0(1, (VAR_9, "searching in %s\n", VAR_14->path));
  FUNC_7(VAR_14);
  VAR_12 = VAR_2;
  VAR_15 = VAR_0;
  while (FUNC_2(VAR_12, VAR_1, VAR_14->inf) != ((void*)0))
   if (VAR_14->tbl.str_flags & VAR_6
       && VAR_12[0] == VAR_14->tbl.str_delim
       && VAR_12[1] == VAR_14->tbl.str_delim)
    continue;
   else if (!FUNC_1(VAR_12, VAR_14->tbl))
    VAR_12 += FUNC_11(VAR_12);
   else {
    *VAR_12 = '\0';
    if (VAR_14->tbl.str_flags & VAR_7)
     for (VAR_13 = VAR_2; (VAR_16 = *VAR_13) != '\0'; ++VAR_13) {
      if (FUNC_4(VAR_16)) {
       if (FUNC_6(VAR_16))
        *VAR_13 = 'A' + (VAR_16 - 'A' + 13) % 26;
       else if (FUNC_5(VAR_16))
        *VAR_13 = 'a' + (VAR_16 - 'a' + 13) % 26;
      }
     }
    if (FUNC_10(&VAR_5, VAR_2, 0, ((void*)0), 0) != VAR_4) {
     FUNC_8("%c%c", VAR_14->tbl.str_delim,
         VAR_14->tbl.str_delim);
     if (!VAR_15) {
      FUNC_8(" (%s)", VAR_14->name);
      VAR_3 = VAR_8;
      VAR_15 = VAR_8;
     }
     FUNC_9('\n');
     (void) FUNC_3(VAR_2, 1, (VAR_12 - VAR_2), VAR_10);
    }
    VAR_12 = VAR_2;
   }
 }
}
