
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {int dummy; } ;
struct TYPE_2__ {char* isc_mutual_user; } ;
struct connection {TYPE_1__ conn_conf; } ;


 int FUNC_0 (char*) ;
 struct pdu* FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct pdu*) ;
 int FUNC_4 (struct pdu*) ;
 int FUNC_5 (struct pdu*) ;

__attribute__((used)) static void
FUNC_6(struct connection *VAR_0)
{
 struct pdu *VAR_1;

 FUNC_0("beginning CHAP authentication; sending CHAP_A");
 FUNC_2(VAR_0);

 FUNC_0("waiting for CHAP_A/CHAP_C/CHAP_I");
 VAR_1 = FUNC_1(VAR_0);

 FUNC_0("sending CHAP_N/CHAP_R");
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);





 FUNC_0("waiting for CHAP result");
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_0->conn_conf.isc_mutual_user[0] != '\0')
  FUNC_4(VAR_1);
 FUNC_5(VAR_1);

 FUNC_0("CHAP authentication done");
}
