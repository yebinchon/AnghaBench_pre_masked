
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ refcnt; int kidx; } ;
struct table_config {char* tablename; int ti_copy; int astate; int ta; TYPE_1__ no; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 struct table_config* FUNC_5 (struct namedobj_instance*,struct tid_info*) ;
 int FUNC_6 (struct namedobj_instance*,struct table_config*) ;
 scalar_t__ FUNC_7 (struct namedobj_instance*,int) ;
 int FUNC_8 (struct ip_fw_chain*,struct table_config*,int ,int ,int *) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (struct ip_fw_chain*,struct table_config*) ;

__attribute__((used)) static int
FUNC_11(struct ip_fw_chain *VAR_2, struct tid_info *VAR_3)
{
 struct namedobj_instance *VAR_4;
 struct table_config *VAR_5;

 FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_2);
 if ((VAR_5 = FUNC_5(VAR_4, VAR_3)) == ((void*)0)) {
  FUNC_2(VAR_2);
  return (VAR_1);
 }


 if (VAR_5->no.refcnt > 0) {
  FUNC_2(VAR_2);
  return (VAR_0);
 }

 FUNC_3(VAR_2);
 FUNC_10(VAR_2, VAR_5);
 FUNC_4(VAR_2);


 if (FUNC_7(VAR_4, VAR_5->no.kidx) != 0)
  FUNC_9("Error unlinking kidx %d from table %s\n",
      VAR_5->no.kidx, VAR_5->tablename);


 FUNC_8(VAR_2, VAR_5, VAR_5->ta, VAR_5->astate, &VAR_5->ti_copy);
 FUNC_2(VAR_2);

 FUNC_6(VAR_4, VAR_5);

 return (0);
}
