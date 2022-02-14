
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int operation; } ;
struct hv_vss_msg {TYPE_1__ vss_hdr; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_3__* msg; } ;
struct TYPE_6__ {int operation; } ;
struct TYPE_7__ {TYPE_2__ vss_hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_9 ;
 int FUNC_1 (int ,struct hv_vss_msg*,int,int *) ;
 int FUNC_2 (struct hv_vss_msg*) ;
 struct hv_vss_msg* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_12 = VAR_11.msg->vss_hdr.operation;
 int VAR_13;
 struct hv_vss_msg *VAR_14;


 if (VAR_11.state != VAR_1) {
  FUNC_4("VSS: Unexpected attempt to send to daemon\n");
  return;
 }

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_0);
 if (!VAR_14)
  return;

 VAR_14->vss_hdr.operation = VAR_12;

 VAR_11.state = VAR_3;

 FUNC_6(&VAR_10, VAR_12 == VAR_8 ?
   VAR_7 * VAR_6 : VAR_5 * VAR_6);

 VAR_13 = FUNC_1(VAR_9, VAR_14, sizeof(*VAR_14), ((void*)0));
 if (VAR_13) {
  FUNC_5("VSS: failed to communicate to the daemon: %d\n", VAR_13);
  if (FUNC_0(&VAR_10)) {
   FUNC_7(VAR_4);
   VAR_11.state = VAR_2;
  }
 }

 FUNC_2(VAR_14);
}
