
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int msg; int code; } ;
struct TYPE_9__ {TYPE_1__ error; } ;
struct TYPE_10__ {scalar_t__ source_port; int ipv6; int dest_port; TYPE_2__ u; } ;
typedef TYPE_3__ tftp_packet_t ;
struct TYPE_11__ {scalar_t__* tid; } ;
typedef TYPE_4__ tftp_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int,char*,int ,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6 (tftp_packet_t *VAR_5) {
  VAR_2++;
  FUNC_5 (1, "Receive error packet from [%s]:%d. %s (%s).\n", FUNC_3 (VAR_5->ipv6), VAR_5->source_port, FUNC_2 (VAR_5->u.error.code), VAR_5->u.error.msg);
  if (VAR_4 == VAR_1) {
    tftp_connection_t *VAR_6 = FUNC_1 (VAR_5->dest_port, 0);
    if (VAR_6 && VAR_6->tid[1-VAR_4] == VAR_5->source_port) {
      FUNC_5 (1, "Clean listening connection for [%s]:%d.\n", FUNC_3 (VAR_5->ipv6), VAR_5->source_port);
      FUNC_4 (VAR_6);
    }
  } else {
    FUNC_0 (VAR_4 == VAR_0);
    VAR_3 = 2;
  }
  return 0;
}
