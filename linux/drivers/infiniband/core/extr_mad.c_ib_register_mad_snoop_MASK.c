
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_mad_agent {int port_num; int qp; void* context; scalar_t__ snoop_handler; scalar_t__ recv_handler; struct ib_device* device; } ;
struct ib_mad_snoop_private {int mad_snoop_flags; int snoop_index; struct ib_mad_agent agent; int refcount; int comp; TYPE_1__* qp_info; } ;
struct ib_mad_port_private {TYPE_1__* qp_info; } ;
struct ib_device {int dummy; } ;
typedef scalar_t__ ib_mad_snoop_handler ;
typedef scalar_t__ ib_mad_recv_handler ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_2__ {int qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mad_agent* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 struct ib_mad_port_private* FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (struct ib_mad_agent*) ;
 int FUNC_5 (struct ib_mad_agent*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct ib_mad_snoop_private*) ;
 struct ib_mad_snoop_private* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_1__*,struct ib_mad_snoop_private*) ;

struct ib_mad_agent *FUNC_12(struct ib_device *VAR_4,
        u8 VAR_5,
        enum ib_qp_type VAR_6,
        int VAR_7,
        ib_mad_snoop_handler VAR_8,
        ib_mad_recv_handler VAR_9,
        void *VAR_10)
{
 struct ib_mad_port_private *VAR_11;
 struct ib_mad_agent *VAR_12;
 struct ib_mad_snoop_private *VAR_13;
 int VAR_14;
 int VAR_15;


 if ((FUNC_8(VAR_7) && !VAR_8) ||
     (FUNC_7(VAR_7) && !VAR_9)) {
  VAR_12 = FUNC_0(-VAR_0);
  goto error1;
 }
 VAR_14 = FUNC_2(VAR_6);
 if (VAR_14 == -1) {
  VAR_12 = FUNC_0(-VAR_0);
  goto error1;
 }
 VAR_11 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_11) {
  VAR_12 = FUNC_0(-VAR_1);
  goto error1;
 }

 VAR_13 = FUNC_10(sizeof *VAR_13, VAR_3);
 if (!VAR_13) {
  VAR_12 = FUNC_0(-VAR_2);
  goto error1;
 }


 VAR_13->qp_info = &VAR_11->qp_info[VAR_14];
 VAR_13->agent.device = VAR_4;
 VAR_13->agent.recv_handler = VAR_9;
 VAR_13->agent.snoop_handler = VAR_8;
 VAR_13->agent.context = VAR_10;
 VAR_13->agent.qp = VAR_11->qp_info[VAR_14].qp;
 VAR_13->agent.port_num = VAR_5;
 VAR_13->mad_snoop_flags = VAR_7;
 FUNC_6(&VAR_13->comp);

 VAR_15 = FUNC_5(&VAR_13->agent, VAR_6);
 if (VAR_15) {
  VAR_12 = FUNC_0(VAR_15);
  goto error2;
 }

 VAR_13->snoop_index = FUNC_11(
      &VAR_11->qp_info[VAR_14],
      VAR_13);
 if (VAR_13->snoop_index < 0) {
  VAR_12 = FUNC_0(VAR_13->snoop_index);
  goto error3;
 }

 FUNC_1(&VAR_13->refcount, 1);
 return &VAR_13->agent;
error3:
 FUNC_4(&VAR_13->agent);
error2:
 FUNC_9(VAR_13);
error1:
 return VAR_12;
}
