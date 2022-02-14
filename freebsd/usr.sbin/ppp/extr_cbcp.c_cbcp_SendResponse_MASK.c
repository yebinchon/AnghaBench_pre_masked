
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cbcp_data {scalar_t__ type; char* addr_start; int length; int delay; } ;
struct cbcp_addr {char* addr; int type; } ;
struct TYPE_6__ {scalar_t__ type; int delay; int restart; scalar_t__* phone; int state; int id; } ;
struct cbcp {TYPE_3__ fsm; TYPE_2__* p; } ;
struct TYPE_5__ {TYPE_1__* dl; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cbcp*,int ) ;
 int FUNC_1 (struct cbcp*,int ,struct cbcp_data*) ;
 int FUNC_2 (struct cbcp*,int ) ;
 int FUNC_3 (struct cbcp_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_8(struct cbcp *VAR_5)
{
  struct cbcp_data VAR_6;
  struct cbcp_addr *VAR_7;



  FUNC_5(VAR_4, "%s: SendResponse(%d) state = %s\n", VAR_5->p->dl->name,
             VAR_5->fsm.id, FUNC_4(VAR_5->fsm.state));

  VAR_6.type = VAR_5->fsm.type;
  VAR_6.delay = VAR_5->fsm.delay;
  VAR_7 = (struct cbcp_addr *)VAR_6.addr_start;
  if (VAR_6.type == VAR_1)
    VAR_6.length = (char *)&VAR_6.delay - (char *)&VAR_6;
  else if (*VAR_5->fsm.phone) {
    VAR_7->type = VAR_0;
    FUNC_7(VAR_7->addr, VAR_5->fsm.phone, sizeof VAR_7->addr - 1);
    VAR_7->addr[sizeof VAR_7->addr - 1] = '\0';
    VAR_6.length = (VAR_7->addr + FUNC_6(VAR_7->addr) + 1) - (char *)&VAR_6;
  } else
    VAR_6.length = VAR_6.addr_start - (char *)&VAR_6;

  FUNC_3(&VAR_6);
  FUNC_1(VAR_5, VAR_2, &VAR_6);
  VAR_5->fsm.restart--;
  FUNC_2(VAR_5, VAR_5->fsm.delay);
  FUNC_0(VAR_5, VAR_3);
}
