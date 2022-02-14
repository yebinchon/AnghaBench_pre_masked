
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cap_rights_t ;
struct TYPE_4__ {int fd; char const* name; struct TYPE_4__* next; } ;
typedef TYPE_1__ LIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,char*) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(int VAR_5, const char *VAR_6)
{
 LIST *VAR_7;
 cap_rights_t VAR_8;

 if (VAR_5 == VAR_3) {
  if (FUNC_1() == -1)
   FUNC_3(VAR_2, "unable to limit stdout");
 } else {
  FUNC_0(&VAR_8, VAR_1, VAR_0);
  if (FUNC_2(VAR_5, &VAR_8) < 0)
   FUNC_3(VAR_2, "unable to limit rights");
 }

 if ((VAR_7 = FUNC_4(sizeof(LIST))) == ((void*)0))
  FUNC_3(1, "malloc");
 VAR_7->fd = VAR_5;
 VAR_7->name = VAR_6;
 VAR_7->next = VAR_4;
 VAR_4 = VAR_7;
}
