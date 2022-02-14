
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct utmpx {scalar_t__ ut_type; TYPE_1__ ut_tv; int ut_host; int ut_line; } ;
struct TYPE_8__ {scalar_t__ info; scalar_t__ loginat; int host; int tty; struct TYPE_8__* next; } ;
typedef TYPE_2__ WHERE ;
struct TYPE_9__ {TYPE_2__* whead; int name; } ;
typedef TYPE_3__ PERSON ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct utmpx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;

void
FUNC_6(PERSON *VAR_4)
{
 WHERE *VAR_5;
 struct utmpx *VAR_6 = ((void*)0);
 char VAR_7 = 0;

 if (FUNC_2(VAR_3, ((void*)0)) == 0)
  VAR_6 = FUNC_1(VAR_4->name);
 if ((VAR_5 = VAR_4->whead) == ((void*)0))
  VAR_7 = 1;
 else if (VAR_6 != ((void*)0) && VAR_6->ut_type == VAR_2) {

  for (; !VAR_7 && VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   if (VAR_5->info == VAR_1 &&
       VAR_5->loginat < VAR_6->ut_tv.tv_sec)
    VAR_7 = 1;





  for (VAR_5 = VAR_4->whead; VAR_7 && VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   if (VAR_5->info == VAR_1 &&
       FUNC_3(VAR_5->tty, VAR_6->ut_line) == 0)
    VAR_7 = 0;
 }
 if (VAR_6 != ((void*)0) && VAR_7) {
  VAR_5 = FUNC_5(VAR_4);
  VAR_5->info = VAR_0;
  FUNC_4(VAR_5->tty, VAR_6->ut_line);
  FUNC_4(VAR_5->host, VAR_6->ut_host);
  VAR_5->loginat = VAR_6->ut_tv.tv_sec;
 }
 FUNC_0();
}
