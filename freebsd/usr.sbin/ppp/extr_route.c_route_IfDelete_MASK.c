
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct rt_msghdr {scalar_t__ rtm_index; int rtm_flags; int rtm_msglen; } ;
struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct bundle {TYPE_1__* iface; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (struct ncpaddr*) ;
 int FUNC_5 (struct ncpaddr*,struct sockaddr*) ;
 int FUNC_6 (struct ncprange*) ;
 int FUNC_7 (struct ncprange*,struct sockaddr*,struct sockaddr*) ;
 int FUNC_8 (struct rt_msghdr*,struct sockaddr**) ;
 int FUNC_9 (struct bundle*,int ,struct ncprange*,int *,int ,int ) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int*,int,char*,size_t*,int *,int ) ;

void
FUNC_13(struct bundle *VAR_16, int VAR_17)
{
  struct rt_msghdr *VAR_18;
  struct sockaddr *VAR_19[VAR_11];
  struct ncprange VAR_20;
  int VAR_21;
  size_t VAR_22;
  char *VAR_23, *VAR_24, *VAR_25;
  int VAR_26[6];

  FUNC_2(VAR_4, "route_IfDelete (%d)\n", VAR_16->iface->index);

  VAR_26[0] = VAR_3;
  VAR_26[1] = VAR_8;
  VAR_26[2] = 0;
  VAR_26[3] = 0;
  VAR_26[4] = VAR_7;
  VAR_26[5] = 0;
  if (FUNC_12(VAR_26, 6, ((void*)0), &VAR_22, ((void*)0), 0) < 0) {
    FUNC_2(VAR_5, "route_IfDelete: sysctl: estimate: %s\n",
              FUNC_11(VAR_15));
    return;
  }

  VAR_23 = FUNC_3(VAR_22);
  if (VAR_23 == ((void*)0))
    return;

  if (FUNC_12(VAR_26, 6, VAR_23, &VAR_22, ((void*)0), 0) < 0) {
    FUNC_2(VAR_5, "route_IfDelete: sysctl: getroute: %s\n",
              FUNC_11(VAR_15));
    FUNC_0(VAR_23);
    return;
  }
  VAR_25 = VAR_23 + VAR_22;

  for (VAR_21 = 0; VAR_21 < 2; VAR_21++) {







    if (VAR_21 == 0)

      continue;
    for (VAR_24 = VAR_23; VAR_24 < VAR_25; VAR_24 += VAR_18->rtm_msglen) {
      VAR_18 = (struct rt_msghdr *)VAR_24;
      FUNC_8(VAR_18, VAR_19);
      if (VAR_18->rtm_index == VAR_16->iface->index &&
          VAR_19[VAR_9] && VAR_19[VAR_10] &&
          (VAR_19[VAR_9]->sa_family == VAR_0

           || VAR_19[VAR_9]->sa_family == VAR_1

           ) &&
          (VAR_17 || (VAR_18->rtm_flags & VAR_13))) {
        if (FUNC_1(VAR_4)) {
          char VAR_27[VAR_6];
          struct ncpaddr VAR_28;
          FUNC_7(&VAR_20, VAR_19[VAR_9], VAR_19[VAR_12]);
          FUNC_5(&VAR_28, VAR_19[VAR_10]);
          FUNC_10(VAR_27, sizeof VAR_27, "%s", FUNC_4(&VAR_28));
          FUNC_2(VAR_4, "Found %s %s\n", FUNC_6(&VAR_20), VAR_27);
        }
        if (VAR_19[VAR_10]->sa_family == VAR_0 ||

            VAR_19[VAR_10]->sa_family == VAR_1 ||

            VAR_19[VAR_10]->sa_family == VAR_2) {
          if (VAR_21 == 1) {
            FUNC_7(&VAR_20, VAR_19[VAR_9], VAR_19[VAR_12]);
            FUNC_9(VAR_16, VAR_14, &VAR_20, ((void*)0), 0, 0);
          } else
            FUNC_2(VAR_4, "route_IfDelete: Skip it (pass %d)\n", VAR_21);
        } else
          FUNC_2(VAR_4,
                    "route_IfDelete: Can't remove routes for family %d\n",
                    VAR_19[VAR_10]->sa_family);
      }
    }
  }
  FUNC_0(VAR_23);
}
