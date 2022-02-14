
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* str_flags; void* str_shortlen; void* str_longlen; void* str_numstr; } ;
struct TYPE_6__ {char* path; scalar_t__ read_tbl; TYPE_2__ tbl; struct TYPE_6__* next; struct TYPE_6__* child; int datfile; } ;
typedef TYPE_1__ FILEDESC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(FILEDESC *VAR_3)
{
 int VAR_4;
 FILEDESC *VAR_5;

 if (VAR_3->read_tbl)
  return;
 if (VAR_3->child == ((void*)0)) {
  if ((VAR_4 = FUNC_4(VAR_3->datfile, VAR_0)) < 0) {
   FUNC_5(VAR_3->datfile);
   FUNC_2(1);
  }
  if (FUNC_6(VAR_4, (char *) &VAR_3->tbl, sizeof VAR_3->tbl) != sizeof VAR_3->tbl) {
   (void)FUNC_3(VAR_2,
       "fortune: %s corrupted\n", VAR_3->path);
   FUNC_2(1);
  }

  VAR_3->tbl.str_numstr = FUNC_0(VAR_3->tbl.str_numstr);
  VAR_3->tbl.str_longlen = FUNC_0(VAR_3->tbl.str_longlen);
  VAR_3->tbl.str_shortlen = FUNC_0(VAR_3->tbl.str_shortlen);
  VAR_3->tbl.str_flags = FUNC_0(VAR_3->tbl.str_flags);
  (void) FUNC_1(VAR_4);
 }
 else {
  FUNC_8(&VAR_3->tbl);
  for (VAR_5 = VAR_3->child; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
   FUNC_9(VAR_5);
   FUNC_7(&VAR_3->tbl, &VAR_5->tbl);
  }
 }
 VAR_3->read_tbl = VAR_1;
}
