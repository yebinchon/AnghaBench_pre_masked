
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct named_object {int kidx; char* name; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct namedobj_instance*,struct table_config*) ;
 scalar_t__ FUNC_1 (struct namedobj_instance*,int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct ip_fw_chain*,struct table_config*) ;

__attribute__((used)) static int
FUNC_4(struct namedobj_instance *VAR_0, struct named_object *VAR_1,
    void *VAR_2)
{

 FUNC_3((struct ip_fw_chain *)VAR_2, (struct table_config *)VAR_1);
 if (FUNC_1(VAR_0, VAR_1->kidx) != 0)
  FUNC_2("Error unlinking kidx %d from table %s\n",
      VAR_1->kidx, VAR_1->name);
 FUNC_0(VAR_0, (struct table_config *)VAR_1);
 return (0);
}
