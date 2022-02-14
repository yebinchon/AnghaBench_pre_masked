
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int streams; } ;
struct TYPE_4__ {int mutex; TYPE_1__ port_data; int shim; } ;
struct intel_connector {TYPE_2__ hdcp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_connector *VAR_0)
{
 if (!VAR_0->hdcp.shim)
  return;

 FUNC_1(&VAR_0->hdcp.mutex);
 FUNC_0(VAR_0->hdcp.port_data.streams);
 FUNC_2(&VAR_0->hdcp.mutex);
}
