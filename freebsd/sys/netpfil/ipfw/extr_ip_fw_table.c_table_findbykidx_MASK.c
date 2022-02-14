
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct named_object {int dummy; } ;
struct table_config {struct named_object no; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct namedobj_instance*,int ) ;

__attribute__((used)) static struct named_object *
FUNC_4(struct ip_fw_chain *VAR_0, uint16_t VAR_1)
{
 struct namedobj_instance *VAR_2;
 struct table_config *VAR_3;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct table_config *)FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_3 != ((void*)0), ("Table with index %d not found", VAR_1));

 return (&VAR_3->no);
}
