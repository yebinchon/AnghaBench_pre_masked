
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_value {int dummy; } ;
struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {scalar_t__ valuestate; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;

__attribute__((used)) static void
FUNC_1(struct ip_fw_chain *VAR_0, struct table_config *VAR_1, int VAR_2,
    struct table_value **VAR_3, struct namedobj_instance **VAR_4)
{
 struct table_value *VAR_5;
 struct namedobj_instance *VAR_6;

 if (VAR_2 != 0) {
  VAR_5 = (struct table_value *)VAR_0->valuestate;
  VAR_6 = FUNC_0(VAR_0);
 } else {
  VAR_5 = ((void*)0);
  VAR_6 = ((void*)0);

 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_5;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;
}
