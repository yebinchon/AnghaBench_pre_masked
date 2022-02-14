
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* crontab; struct TYPE_4__* next; } ;
typedef TYPE_1__ user ;
typedef scalar_t__ pid_t ;
struct TYPE_5__ {int flags; scalar_t__ child; int lastexit; struct TYPE_5__* next; } ;
typedef TYPE_2__ entry ;
struct TYPE_6__ {TYPE_1__* head; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(pid_t VAR_2)
{
 user *VAR_3;
 entry *VAR_4;

 for (VAR_3 = VAR_1.head; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  for (VAR_4 = VAR_3->crontab; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   if ((VAR_4->flags & VAR_0) && VAR_4->child == VAR_2) {
    VAR_4->lastexit = FUNC_0(((void*)0));
    VAR_4->child = 0;
    break;
   }
  }
 }
}
