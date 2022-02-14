
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dumperinfo {scalar_t__ dumpoff; } ;
struct debugnet_pcb {int dummy; } ;
struct debugnet_conn_params {scalar_t__ dc_server; scalar_t__* dc_herald_data; scalar_t__ dc_herald_datalen; int dc_client_port; int dc_herald_port; int dc_gateway; int dc_client; int dc_ifp; } ;
typedef int dcp ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {struct debugnet_pcb* nd_pcb; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct debugnet_conn_params*,struct debugnet_pcb**) ;
 int FUNC_1 (struct debugnet_pcb*) ;
 char* FUNC_2 (TYPE_1__,char*) ;
 int FUNC_3 (struct debugnet_conn_params*,int ,int) ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_4 () ;
 int * VAR_11 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(struct dumperinfo *VAR_12)
{
 struct debugnet_conn_params VAR_13;
 struct debugnet_pcb *VAR_14;
 char VAR_15[VAR_2];
 int VAR_16;

 VAR_16 = 0;


 if (!FUNC_4())
  return (VAR_0);

 if (VAR_11 == ((void*)0)) {
  FUNC_5(
      "netdump_start: netdump may only be used after a panic\n");
  return (VAR_0);
 }

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));

 if (VAR_10.s_addr == VAR_1) {
  FUNC_5("netdump_start: can't netdump; no server IP given\n");
  return (VAR_0);
 }


 VAR_12->dumpoff = 0;

 VAR_13.dc_ifp = VAR_8;

 VAR_13.dc_client = VAR_5.s_addr;
 VAR_13.dc_server = VAR_10.s_addr;
 VAR_13.dc_gateway = VAR_7.s_addr;

 VAR_13.dc_herald_port = VAR_4;
 VAR_13.dc_client_port = VAR_3;

 VAR_13.dc_herald_data = VAR_9;
 VAR_13.dc_herald_datalen = (VAR_9[0] == 0) ? 0 : FUNC_6(VAR_9) + 1;

 VAR_16 = FUNC_0(&VAR_13, &VAR_14);
 if (VAR_16 != 0) {
  FUNC_5("failed to contact netdump server\n");

  return (VAR_0);
 }

 FUNC_5("netdumping to %s (%6D)\n", FUNC_2(VAR_10, VAR_15),
     FUNC_1(VAR_14), ":");
 VAR_6.nd_pcb = VAR_14;
 return (0);
}
