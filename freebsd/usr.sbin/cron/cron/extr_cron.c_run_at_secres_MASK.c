
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* crontab; struct TYPE_5__* next; } ;
typedef TYPE_1__ user ;
struct TYPE_6__ {int flags; struct TYPE_6__* next; } ;
typedef TYPE_2__ entry ;
struct TYPE_7__ {TYPE_1__* head; } ;
typedef TYPE_3__ cron_db ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(cron_db *VAR_2)
{
 user *VAR_3;
 entry *VAR_4;

 for (VAR_3 = VAR_2->head; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  for (VAR_4 = VAR_3->crontab; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   if ((VAR_4->flags & (VAR_1 | VAR_0)) != 0)
    return 1;
  }
 }
 return 0;
}
