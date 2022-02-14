
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* alt; char* next; char* list; char* chosen; } ;
struct TYPE_4__ {int list; } ;
struct TYPE_5__ {TYPE_1__ phone; } ;
struct datalink {TYPE_3__ phone; TYPE_2__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ,int) ;
 void* FUNC_2 (char**,char*) ;

const char *
FUNC_3(struct datalink *VAR_1)
{
  char *VAR_2;

  if (VAR_1->phone.alt == ((void*)0)) {
    if (VAR_1->phone.next == ((void*)0)) {
      FUNC_1(VAR_1->phone.list, VAR_1->cfg.phone.list, sizeof VAR_1->phone.list - 1);
      VAR_1->phone.list[sizeof VAR_1->phone.list - 1] = '\0';
      if (*VAR_1->phone.list == '\0')
        return "";
      VAR_1->phone.next = VAR_1->phone.list;
    }
    VAR_1->phone.alt = FUNC_2(&VAR_1->phone.next, ":");
  }
  VAR_2 = FUNC_2(&VAR_1->phone.alt, "|");
  VAR_1->phone.chosen = *VAR_2 ? VAR_2 : "[NONE]";
  if (*VAR_2)
    FUNC_0(VAR_0, "Phone: %s\n", VAR_2);
  return VAR_2;
}
