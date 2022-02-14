
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fdescriptor {int dummy; } ;
struct TYPE_5__ {int desc; } ;
struct TYPE_4__ {int desc; } ;
struct datalink {int state; TYPE_3__* physical; TYPE_2__ chap; TYPE_1__ chat; } ;
typedef int fd_set ;
struct TYPE_6__ {int desc; } ;
 struct datalink* FUNC_0 (struct fdescriptor*) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static int
FUNC_2(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct datalink *VAR_2 = FUNC_0(VAR_0);

  switch (VAR_2->state) {
    case 136:
    case 129:
      break;

    case 134:
    case 135:
    case 131:
    case 132:
      return FUNC_1(&VAR_2->chat.desc, VAR_1);

    case 128:
    case 133:
    case 138:
    case 137:
    case 130:
      return FUNC_1(&VAR_2->chap.desc, VAR_1) ? 1 :
             FUNC_1(&VAR_2->physical->desc, VAR_1);
  }
  return 0;
}
