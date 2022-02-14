
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_btsocket_l2cap_raw_chan_list {int num_channels; TYPE_1__* channels; } ;
typedef int r ;
typedef int ng_l2cap_node_chan_ep ;
struct TYPE_3__ {int scid; int dcid; int psm; int imtu; int omtu; int state; int remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 char* FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int,int ,struct ng_btsocket_l2cap_raw_chan_list*,int) ;
 int FUNC_6 (struct ng_btsocket_l2cap_raw_chan_list*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(int VAR_7, int VAR_8, char **VAR_9)
{
 static char const * const VAR_10[] = {
                          "CLOSED",
                                   "W4_L2CAP_CON_RSP",
                                  "W4_L2CA_CON_RSP",
                          "CONFIG",
                        "OPEN",
                                     "W4_L2CAP_DISCON_RSP",
                                    "W4_L2CA_DISCON_RSP"
 };


 struct ng_btsocket_l2cap_raw_chan_list VAR_11;
 int VAR_12, VAR_13 = VAR_3;

 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.num_channels = VAR_2;
 VAR_11.channels = FUNC_1(VAR_2,
    sizeof(ng_l2cap_node_chan_ep));
 if (VAR_11.channels == ((void*)0)) {
  VAR_5 = VAR_0;
  return (VAR_1);
 }

 if (FUNC_5(VAR_7, VAR_4, &VAR_11, sizeof(VAR_11)) < 0) {
  VAR_13 = VAR_1;
  goto out;
 }

 FUNC_3(VAR_6, "L2CAP channels:\n");
 FUNC_3(VAR_6,
"Remote BD_ADDR     SCID/ DCID   PSM  IMTU/ OMTU State\n");
 for (VAR_12 = 0; VAR_12 < VAR_11.num_channels; VAR_12++) {
  FUNC_3(VAR_6,
   "%-17.17s " "%5d/%5d %5d " "%5d/%5d " "%s\n",



   FUNC_0(&VAR_11.channels[VAR_12].remote),
   VAR_11.channels[VAR_12].scid, VAR_11.channels[VAR_12].dcid,
   VAR_11.channels[VAR_12].psm, VAR_11.channels[VAR_12].imtu,
   VAR_11.channels[VAR_12].omtu,
   ((VAR_11.channels[VAR_12].state) >= FUNC_0(VAR_10)? "UNKNOWN" : VAR_10[(VAR_11.channels[VAR_12].state)]));
 }
out:
 FUNC_4(VAR_11.channels);

 return (VAR_13);
}
