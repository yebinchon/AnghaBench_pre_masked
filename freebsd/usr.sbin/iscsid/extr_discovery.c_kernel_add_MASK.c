
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ isc_discovery; int isc_target; } ;
struct iscsi_session_add {TYPE_1__ isa_conf; } ;
struct connection {int conn_iscsi_fd; int conn_conf; } ;
typedef int isa ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iscsi_session_add*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (struct iscsi_session_add*,int ,int) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_5(const struct connection *VAR_1, const char *VAR_2)
{
 struct iscsi_session_add VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(&VAR_3.isa_conf, &VAR_1->conn_conf, sizeof(VAR_3.isa_conf));
 FUNC_4(VAR_3.isa_conf.isc_target, VAR_2,
     sizeof(VAR_3.isa_conf.isc_target));
 VAR_3.isa_conf.isc_discovery = 0;
 VAR_4 = FUNC_0(VAR_1->conn_iscsi_fd, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  FUNC_1("failed to add %s: ISCSISADD", VAR_2);
}
