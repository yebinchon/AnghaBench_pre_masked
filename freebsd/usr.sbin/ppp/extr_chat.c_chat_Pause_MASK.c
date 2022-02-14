
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {char* name; struct chat* arg; int func; int load; } ;
struct chat {TYPE_1__ pause; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct chat *VAR_1, u_long VAR_2)
{
  FUNC_1(&VAR_1->pause);
  VAR_1->pause.load += VAR_2;
  VAR_1->pause.func = VAR_0;
  VAR_1->pause.name = "chat pause";
  VAR_1->pause.arg = VAR_1;
  FUNC_0(&VAR_1->pause);
}
