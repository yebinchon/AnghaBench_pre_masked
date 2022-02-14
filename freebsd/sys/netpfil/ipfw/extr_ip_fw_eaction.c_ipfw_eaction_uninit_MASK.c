
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namedobj_instance {int dummy; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int FUNC_5 (struct ip_fw_chain*,struct named_object*) ;
 int VAR_2 ;
 struct named_object* FUNC_6 (struct namedobj_instance*,int ,int ,int ) ;

void
FUNC_7(struct ip_fw_chain *VAR_3, int VAR_4)
{
 struct namedobj_instance *VAR_5;
 struct named_object *VAR_6;

 VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_3);
 VAR_6 = FUNC_6(VAR_5, 0, VAR_0,
     VAR_1);
 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_3, VAR_6);
 FUNC_4(VAR_3);
 FUNC_2(VAR_4, VAR_2);
 FUNC_1("External actions support uninitialized");
}
