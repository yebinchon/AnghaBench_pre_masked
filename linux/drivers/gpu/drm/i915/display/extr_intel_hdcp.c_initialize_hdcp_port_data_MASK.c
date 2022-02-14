
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct intel_hdcp_shim {scalar_t__ protocol; } ;
struct hdcp_port_data {int k; TYPE_2__* streams; void* protocol; void* port_type; int port; } ;
struct intel_hdcp {int content_type; struct hdcp_port_data port_data; } ;
struct intel_connector {TYPE_1__* encoder; struct intel_hdcp hdcp; } ;
struct hdcp2_streamid_type {int dummy; } ;
struct TYPE_4__ {int stream_type; scalar_t__ stream_id; } ;
struct TYPE_3__ {int port; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct intel_connector *VAR_3,
         const struct intel_hdcp_shim *VAR_4)
{
 struct intel_hdcp *VAR_5 = &VAR_3->hdcp;
 struct hdcp_port_data *VAR_6 = &VAR_5->port_data;

 VAR_6->port = VAR_3->encoder->port;
 VAR_6->port_type = (u8)VAR_2;
 VAR_6->protocol = (u8)VAR_4->protocol;

 VAR_6->k = 1;
 if (!VAR_6->streams)
  VAR_6->streams = FUNC_1(VAR_6->k,
     sizeof(struct hdcp2_streamid_type),
     VAR_1);
 if (!VAR_6->streams) {
  FUNC_0("Out of Memory\n");
  return -VAR_0;
 }

 VAR_6->streams[0].stream_id = 0;
 VAR_6->streams[0].stream_type = VAR_5->content_type;

 return 0;
}
