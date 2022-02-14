
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
struct bundle {int dummy; } ;
typedef int fd_set ;
struct TYPE_6__ {int desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct datalink*,int ) ;
 struct datalink* FUNC_1 (struct fdescriptor*) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,struct bundle*,int const*) ;

__attribute__((used)) static int
FUNC_4(struct fdescriptor *VAR_1, struct bundle *VAR_2,
               const fd_set *VAR_3)
{
  struct datalink *VAR_4 = FUNC_1(VAR_1);
  int VAR_5 = 0;

  switch (VAR_4->state) {
    case 136:
    case 129:
      break;

    case 134:
    case 135:
    case 131:
    case 132:
      if ((VAR_5 = FUNC_3(&VAR_4->chat.desc, VAR_2, VAR_3)) == -1) {
        FUNC_0(VAR_4, VAR_0);
        VAR_5 = 0;
      }
      break;

    case 128:
    case 133:
    case 138:
    case 137:
    case 130:
      if (FUNC_2(&VAR_4->chap.desc, VAR_3))
        switch (FUNC_3(&VAR_4->chap.desc, VAR_2, VAR_3)) {
        case -1:
          FUNC_0(VAR_4, VAR_0);
          break;
        case 1:
          VAR_5++;
        }
      if (FUNC_2(&VAR_4->physical->desc, VAR_3))
        switch (FUNC_3(&VAR_4->physical->desc, VAR_2, VAR_3)) {
        case -1:
          FUNC_0(VAR_4, VAR_0);
          break;
        case 1:
          VAR_5++;
        }
      break;
  }

  return VAR_5;
}
