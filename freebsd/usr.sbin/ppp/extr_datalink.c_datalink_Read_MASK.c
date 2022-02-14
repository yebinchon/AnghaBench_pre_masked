
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fdescriptor {int dummy; } ;
struct TYPE_6__ {int desc; } ;
struct TYPE_5__ {int desc; } ;
struct datalink {int state; TYPE_1__* physical; TYPE_3__ chap; TYPE_2__ chat; } ;
struct bundle {int dummy; } ;
typedef int fd_set ;
struct TYPE_4__ {int desc; } ;
 struct datalink* FUNC_0 (struct fdescriptor*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,struct bundle*,int const*) ;

__attribute__((used)) static void
FUNC_3(struct fdescriptor *VAR_0, struct bundle *VAR_1, const fd_set *VAR_2)
{
  struct datalink *VAR_3 = FUNC_0(VAR_0);

  switch (VAR_3->state) {
    case 136:
    case 129:
      break;

    case 134:
    case 135:
    case 131:
    case 132:
      FUNC_2(&VAR_3->chat.desc, VAR_1, VAR_2);
      break;

    case 128:
    case 133:
    case 138:
    case 137:
    case 130:
      if (FUNC_1(&VAR_3->chap.desc, VAR_2))
        FUNC_2(&VAR_3->chap.desc, VAR_1, VAR_2);
      if (FUNC_1(&VAR_3->physical->desc, VAR_2))
        FUNC_2(&VAR_3->physical->desc, VAR_1, VAR_2);
      break;
  }
}
