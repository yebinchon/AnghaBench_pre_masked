
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* isc_target; int isc_target_addr; } ;
struct iscsi_daemon_request {TYPE_2__ idr_conf; } ;
struct TYPE_3__ {scalar_t__ isc_discovery; } ;
struct connection {TYPE_1__ conn_conf; } ;


 int FUNC_0 (struct connection*) ;
 struct connection* FUNC_1 (int,struct iscsi_daemon_request const*) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct connection*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_11(int VAR_0, const struct iscsi_daemon_request *VAR_1, int VAR_2)
{
 struct connection *VAR_3;

 FUNC_6(VAR_1->idr_conf.isc_target_addr);
 if (VAR_1->idr_conf.isc_target[0] != '\0') {
  FUNC_7(VAR_1->idr_conf.isc_target);
  FUNC_10("%s (%s)", VAR_1->idr_conf.isc_target_addr, VAR_1->idr_conf.isc_target);
 } else {
  FUNC_10("%s", VAR_1->idr_conf.isc_target_addr);
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_9(VAR_2);
 FUNC_0(VAR_3);
 FUNC_8(VAR_3);
 if (VAR_3->conn_conf.isc_discovery != 0)
  FUNC_2(VAR_3);
 else
  FUNC_4(VAR_3);

 FUNC_5("nothing more to do; exiting");
 FUNC_3 (0);
}
