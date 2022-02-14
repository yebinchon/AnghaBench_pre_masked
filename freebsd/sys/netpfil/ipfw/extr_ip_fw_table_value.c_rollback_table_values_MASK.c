
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tentry_info {scalar_t__ value; } ;
struct tableop_state {int count; struct tentry_info* tei; int vshared; int tc; struct ip_fw_chain* ch; } ;
struct table_value {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*,int ,int ,struct table_value**,struct namedobj_instance**) ;
 int FUNC_2 (struct namedobj_instance*,struct table_value*,scalar_t__) ;

void
FUNC_3(struct tableop_state *VAR_0)
{
 struct ip_fw_chain *VAR_1;
 struct table_value *VAR_2;
 struct tentry_info *VAR_3;
 struct namedobj_instance *VAR_4;
 int VAR_5;

 VAR_1 = VAR_0->ch;

 FUNC_0(VAR_1);


 FUNC_1(VAR_1, VAR_0->tc, VAR_0->vshared, &VAR_2, &VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_0->count; VAR_5++) {
  VAR_3 = &VAR_0->tei[VAR_5];

  if (VAR_3->value == 0)
   continue;

  FUNC_2(VAR_4, VAR_2, VAR_3->value);
 }
}
