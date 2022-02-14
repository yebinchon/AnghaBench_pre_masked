
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_hdcp_shim {int (* write_2_2_msg ) (struct intel_digital_port*,struct hdcp2_rep_stream_manage*,int) ;int (* read_2_2_msg ) (struct intel_digital_port*,int ,struct hdcp2_rep_stream_ready*,int) ;} ;
struct TYPE_6__ {scalar_t__ seq_num_m; TYPE_2__* streams; } ;
struct intel_hdcp {scalar_t__ seq_num_m; int content_type; TYPE_3__ port_data; struct intel_hdcp_shim* shim; } ;
struct intel_digital_port {int dummy; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;
struct hdcp2_rep_stream_ready {int dummy; } ;
struct hdcp2_rep_stream_manage {TYPE_1__* streams; int k; int seq_num_m; int msg_id; } ;
struct TYPE_5__ {int stream_type; } ;
struct TYPE_4__ {int stream_type; scalar_t__ stream_id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct intel_digital_port* FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct intel_connector*,struct hdcp2_rep_stream_ready*) ;
 int FUNC_5 (struct intel_digital_port*,struct hdcp2_rep_stream_manage*,int) ;
 int FUNC_6 (struct intel_digital_port*,int ,struct hdcp2_rep_stream_ready*,int) ;

__attribute__((used)) static
int FUNC_7(struct intel_connector *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_1(VAR_3);
 struct intel_hdcp *VAR_5 = &VAR_3->hdcp;
 union {
  struct hdcp2_rep_stream_manage stream_manage;
  struct hdcp2_rep_stream_ready stream_ready;
 } VAR_6;
 const struct intel_hdcp_shim *VAR_7 = VAR_5->shim;
 int VAR_8;


 VAR_6.stream_manage.msg_id = VAR_0;
 FUNC_3(VAR_6.stream_manage.seq_num_m, VAR_5->seq_num_m);


 VAR_6.stream_manage.k = FUNC_2(1);


 VAR_6.stream_manage.streams[0].stream_id = 0;
 VAR_6.stream_manage.streams[0].stream_type = VAR_5->content_type;


 VAR_8 = VAR_7->write_2_2_msg(VAR_4, &VAR_6.stream_manage,
      sizeof(VAR_6.stream_manage));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = VAR_7->read_2_2_msg(VAR_4, VAR_1,
     &VAR_6.stream_ready, sizeof(VAR_6.stream_ready));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->port_data.seq_num_m = VAR_5->seq_num_m;
 VAR_5->port_data.streams[0].stream_type = VAR_5->content_type;

 VAR_8 = FUNC_4(VAR_3, &VAR_6.stream_ready);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->seq_num_m++;

 if (VAR_5->seq_num_m > VAR_2) {
  FUNC_0("seq_num_m roll over.\n");
  return -1;
 }

 return 0;
}
