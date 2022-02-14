
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {int dummy; } ;
struct keys {int * keys_values; int ** keys_names; } ;
struct TYPE_2__ {int isc_iser; } ;
struct connection {TYPE_1__ conn_conf; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*,int ) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct keys*,char*,char*) ;
 int FUNC_3 (struct keys*) ;
 int FUNC_4 (struct keys*,struct pdu*) ;
 struct keys* FUNC_5 () ;
 int FUNC_6 (struct keys*,struct pdu*) ;
 int FUNC_7 (char*,...) ;
 struct pdu* FUNC_8 (struct connection*) ;
 struct pdu* FUNC_9 (struct connection*) ;
 int FUNC_10 (struct pdu*) ;
 int FUNC_11 (struct pdu*) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 struct pdu* FUNC_13 (struct connection*) ;
 struct pdu* FUNC_14 (struct connection*) ;

void
FUNC_15(struct connection *VAR_1)
{
 struct pdu *VAR_2, *VAR_3;
 struct keys *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_7("beginning discovery session");
 VAR_2 = FUNC_13(VAR_1);
 VAR_4 = FUNC_5();
 FUNC_2(VAR_4, "SendTargets", "All");
 FUNC_6(VAR_4, VAR_2);
 FUNC_3(VAR_4);
 VAR_4 = ((void*)0);
 FUNC_11(VAR_2);
 FUNC_10(VAR_2);
 VAR_2 = ((void*)0);

 FUNC_7("waiting for Text Response");
 VAR_3 = FUNC_14(VAR_1);
 VAR_5 = FUNC_5();
 FUNC_4(VAR_5, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->keys_names[VAR_6] == ((void*)0))
   break;

  if (FUNC_12(VAR_5->keys_names[VAR_6], "TargetName") != 0)
   continue;

  FUNC_7("adding target %s", VAR_5->keys_values[VAR_6]);



  FUNC_0(VAR_1, VAR_5->keys_values[VAR_6]);
 }
 FUNC_3(VAR_5);
 FUNC_10(VAR_3);

 FUNC_7("removing temporary discovery session");
 FUNC_1(VAR_1);
 FUNC_7("discovery done; logging out");
 VAR_2 = FUNC_8(VAR_1);
 FUNC_11(VAR_2);
 FUNC_10(VAR_2);
 VAR_2 = ((void*)0);

 FUNC_7("waiting for Logout Response");
 VAR_3 = FUNC_9(VAR_1);
 FUNC_10(VAR_3);

 FUNC_7("discovery session done");
}
