
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_packet {int payload_length; int payload; } ;
struct intel_dsi_host {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_dsi_host*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct intel_dsi_host *VAR_1,
         struct mipi_dsi_packet VAR_2)
{

 if (VAR_2.payload_length > VAR_0 * 4) {
  FUNC_0("payload size exceeds max queue limit\n");
  return -1;
 }


 if (!FUNC_1(VAR_1, VAR_2.payload,
    VAR_2.payload_length)) {
  FUNC_0("adding payload to queue failed\n");
  return -1;
 }

 return 0;
}
