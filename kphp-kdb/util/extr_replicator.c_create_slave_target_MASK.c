
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct related_binlog {int flags; int targets; int * target; TYPE_1__* master; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct hostent {char* h_addr; int h_addrtype; int h_length; int h_addr_list; } ;
struct TYPE_5__ {char* target_ipv6; int port; int min_connections; int max_connections; struct in_addr target; } ;
struct TYPE_4__ {char* location; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* FUNC_4 (struct in_addr) ;
 struct hostent* FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 char* FUNC_8 (char*) ;
 int VAR_3 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ VAR_4 ;

int FUNC_10 (struct related_binlog *VAR_5) {
  char *VAR_6 = VAR_5->master->location, *VAR_7 = FUNC_9 (VAR_6, ':');
  struct hostent *VAR_8;
  FUNC_0 (VAR_7 && VAR_7 >= VAR_6 && VAR_7 <= VAR_6 + 63);
  char VAR_9[64];
  FUNC_6 (VAR_9, VAR_6, VAR_7 - VAR_6);
  VAR_9[VAR_7 - VAR_6] = 0;
  if (!(VAR_8 = FUNC_5 (VAR_9)) || !VAR_8->h_addr_list || !VAR_8->h_addr) {
    FUNC_3 (VAR_3, "cannot resolve %s\n", VAR_9);
    FUNC_2 (2);
  }
  switch (VAR_8->h_addrtype) {
  case 129:
    FUNC_0 (VAR_8->h_length == 4);
    VAR_1.target = *((struct in_addr *) VAR_8->h_addr);
    FUNC_7 (VAR_1.target_ipv6, 0, 16);
    break;
  case 128:
    FUNC_0 (VAR_8->h_length == 16);
    VAR_1.target.s_addr = 0;
    FUNC_6 (VAR_1.target_ipv6, VAR_8->h_addr, 16);
    break;
  default:
    FUNC_3 (VAR_3, "cannot resolve %s: bad address type %d\n", VAR_9, VAR_8->h_addrtype);
    FUNC_2 (2);
  }

  if (VAR_4 > 0) {
    FUNC_3 (VAR_3, "creating target %s:%d (ip %s)\n", VAR_9, VAR_1.port, VAR_1.target.s_addr ? FUNC_4 (VAR_1.target) : FUNC_8 (VAR_1.target_ipv6));
  }

  FUNC_0 (!(VAR_5->flags & VAR_0));
  VAR_5->targets = VAR_2 ? 2 : 1;
  int VAR_10;
  VAR_1.min_connections = VAR_1.max_connections = VAR_5->targets;
  for (VAR_10 = 0; VAR_10 < VAR_5->targets; VAR_10++) {
    VAR_5->target[VAR_10] = FUNC_1 (&VAR_1, 0);
    if (!VAR_5->target[VAR_10]) {
      VAR_5->targets = 0;
      return -1;
    }
  }
  return 0;
}
