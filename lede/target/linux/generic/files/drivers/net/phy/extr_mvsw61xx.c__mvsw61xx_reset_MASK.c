
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switch_dev {int ports; int vlans; } ;
struct mvsw61xx_state {scalar_t__ model; int mirror_rx; int mirror_tx; scalar_t__ monitor_port; scalar_t__ source_port; scalar_t__ vlan_enabled; TYPE_2__* vlans; TYPE_1__* ports; } ;
struct TYPE_4__ {int port_based; scalar_t__ port_sstate; scalar_t__ port_mode; scalar_t__ vid; scalar_t__ mask; } ;
struct TYPE_3__ {scalar_t__ pvid; scalar_t__ mask; scalar_t__ qmode; scalar_t__ fdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct mvsw61xx_state* FUNC_2 (struct switch_dev*) ;
 int FUNC_3 (struct switch_dev*) ;
 int FUNC_4 (struct switch_dev*,int,int ,int) ;
 int FUNC_5 (struct switch_dev*) ;
 scalar_t__ FUNC_6 (struct switch_dev*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct switch_dev*,int ) ;
 int FUNC_8 (struct switch_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct switch_dev *VAR_23, bool VAR_24)
{
 struct mvsw61xx_state *VAR_25 = FUNC_2(VAR_23);
 int VAR_26;
 u16 VAR_27;


 for (VAR_26 = 0; VAR_26 < VAR_23->ports; VAR_26++) {
  VAR_27 = FUNC_7(VAR_23, FUNC_1(VAR_5, VAR_26)) &
   ~VAR_13;
  FUNC_8(VAR_23, FUNC_1(VAR_5, VAR_26), VAR_27);
 }

 VAR_27 = FUNC_7(VAR_23, FUNC_0(VAR_5)) | VAR_9;

 FUNC_8(VAR_23, FUNC_0(VAR_5), VAR_27);
 if (FUNC_6(VAR_23, FUNC_0(VAR_5),
    VAR_9, 0) < 0)
  return -VAR_6;

 for (VAR_26 = 0; VAR_26 < VAR_23->ports; VAR_26++) {
  VAR_25->ports[VAR_26].fdb = 0;
  VAR_25->ports[VAR_26].qmode = 0;
  VAR_25->ports[VAR_26].mask = 0;
  VAR_25->ports[VAR_26].pvid = 0;


  VAR_27 = FUNC_7(VAR_23, FUNC_1(VAR_21, VAR_26)) & ~VAR_12;
  VAR_27 |= VAR_11;
  FUNC_8(VAR_23, FUNC_1(VAR_21, VAR_26), VAR_27);


  FUNC_8(VAR_23, FUNC_1(VAR_0, VAR_26), (1 << VAR_26));


  if (VAR_24 && VAR_26 < 5) {
   FUNC_4(VAR_23, VAR_26, VAR_8,
         VAR_20 |
         VAR_19 |
         VAR_18);
   FUNC_4(VAR_23, VAR_26, VAR_7, VAR_3 |
         VAR_1 | VAR_2 |
         VAR_4);
  }


  if (VAR_24 && VAR_26 >= 5 && VAR_25->model == VAR_10) {
   u16 VAR_28 = FUNC_7(VAR_23, FUNC_1(VAR_22, VAR_26));
   u16 VAR_29 = VAR_28 & VAR_16;

   if (VAR_29 == VAR_15 ||
       VAR_29 == VAR_14 ||
       VAR_29 == VAR_17) {
    FUNC_3(VAR_23);
   }
  }
 }

 for (VAR_26 = 0; VAR_26 < VAR_23->vlans; VAR_26++) {
  VAR_25->vlans[VAR_26].port_based = 0;
  VAR_25->vlans[VAR_26].mask = 0;
  VAR_25->vlans[VAR_26].vid = 0;
  VAR_25->vlans[VAR_26].port_mode = 0;
  VAR_25->vlans[VAR_26].port_sstate = 0;
 }

 VAR_25->vlan_enabled = 0;

 VAR_25->mirror_rx = 0;
 VAR_25->mirror_tx = 0;
 VAR_25->source_port = 0;
 VAR_25->monitor_port = 0;

 FUNC_5(VAR_23);


 for (VAR_26 = 0; VAR_26 < VAR_23->ports; VAR_26++) {
  VAR_27 = FUNC_7(VAR_23, FUNC_1(VAR_5, VAR_26)) |
   VAR_13;
  FUNC_8(VAR_23, FUNC_1(VAR_5, VAR_26), VAR_27);
 }

 return 0;
}
