
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct datalink {scalar_t__ state; int name; TYPE_1__* physical; struct datalink* next; } ;
struct TYPE_4__ {int mp; } ;
struct bundle {TYPE_2__ ncp; struct datalink* links; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct datalink*,int ) ;
 int FUNC_1 (struct datalink*,int,int) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct bundle *VAR_7, int VAR_8, int VAR_9)
{
  struct datalink *VAR_10, *VAR_11, *VAR_12;

  VAR_11 = VAR_12 = ((void*)0);
  for (VAR_10 = VAR_7->links; VAR_10; VAR_10 = VAR_10->next)
    if (VAR_10->physical->type == VAR_6) {
      if (VAR_10->state == VAR_4) {
        if (VAR_9 == VAR_0) {
          if (VAR_11)
            VAR_12 = VAR_11;
          VAR_11 = VAR_10;
        }
      } else if (VAR_10->state == VAR_3) {
        if (VAR_9 == VAR_1) {
          VAR_11 = VAR_10;
          break;
        }
      } else {

        VAR_11 = ((void*)0);
        break;
      }
    } else if (VAR_10->state == VAR_4 && VAR_9 == VAR_0)
      VAR_12 = VAR_10;

  if (VAR_11) {
    if (VAR_9 == VAR_1) {
      FUNC_2(VAR_5, "%d%% saturation -> Opening link ``%s''\n",
                 VAR_8, VAR_11->name);
      FUNC_1(VAR_11, 1, 1);
      FUNC_3(&VAR_7->ncp.mp);
    } else if (VAR_12) {
      FUNC_2(VAR_5, "%d%% saturation -> Closing link ``%s''\n",
                 VAR_8, VAR_11->name);
      FUNC_0(VAR_11, VAR_2);
      FUNC_3(&VAR_7->ncp.mp);
    }
  }
}
