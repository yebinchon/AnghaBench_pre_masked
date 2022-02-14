
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dest_port; } ;
typedef TYPE_1__ tftp_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1 (tftp_packet_t *VAR_5) {
  VAR_2++;
  if (VAR_5->dest_port != VAR_1) {
    return FUNC_0 (VAR_3, "Write request packet wasn't sent to the TFTP port");
  }
  if (VAR_4 == VAR_0) {
    return FUNC_0 (VAR_3, "Write request packet was sent to client");
  }
  return FUNC_0 (VAR_3, "Not implemented");
}
