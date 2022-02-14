
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table_info {int * lookup; } ;
struct table_config {int astate; TYPE_1__* ta; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {void* tablestate; } ;
struct TYPE_2__ {int (* change_ti ) (int ,struct table_info*) ;} ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (struct ip_fw_chain*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (unsigned int,void*,int*) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (struct namedobj_instance*,void**,int*) ;
 int FUNC_9 (struct namedobj_instance*,void**,int*) ;
 scalar_t__ FUNC_10 (struct namedobj_instance*,int) ;
 void* FUNC_11 (unsigned int,int ,int) ;
 int FUNC_12 (void*,void*,int) ;
 scalar_t__ FUNC_13 (unsigned int) ;
 int FUNC_14 (int ,struct table_info*) ;

int
FUNC_15(struct ip_fw_chain *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct namedobj_instance *VAR_10;
 void *VAR_11, *VAR_12, *VAR_13;
 struct table_info *VAR_14;
 struct table_config *VAR_15;
 int VAR_16, VAR_17;


 if (VAR_7 == 0)
  return (VAR_0);
 if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;

 VAR_7 = (unsigned int)FUNC_13(VAR_7);


 VAR_13 = FUNC_11(VAR_7 * sizeof(struct table_info),
     VAR_2, VAR_3 | VAR_4);

 FUNC_6(VAR_7, (void *)&VAR_11, &VAR_17);

 FUNC_1(VAR_6);

 VAR_9 = (VAR_7 >= VAR_5) ? VAR_5 : VAR_7;
 VAR_10 = FUNC_0(VAR_6);


 if (VAR_7 < VAR_5) {




  FUNC_2(VAR_6);
  return (VAR_0);
 }


 FUNC_12(VAR_13, VAR_6->tablestate, sizeof(struct table_info) * VAR_9);
 FUNC_8(VAR_10, &VAR_11, &VAR_17);

 FUNC_3(VAR_6);


 VAR_12 = VAR_6->tablestate;
 VAR_6->tablestate = VAR_13;
 FUNC_9(VAR_10, &VAR_11, &VAR_17);

 VAR_8 = VAR_5;
 VAR_5 = VAR_7;

 FUNC_4(VAR_6);


 VAR_14 = (struct table_info *)VAR_6->tablestate;
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++, VAR_14++) {
  if (VAR_14->lookup == ((void*)0))
   continue;
  VAR_15 = (struct table_config *)FUNC_10(VAR_10, VAR_16);
  if (VAR_15 == ((void*)0) || VAR_15->ta->change_ti == ((void*)0))
   continue;

  VAR_15->ta->change_ti(VAR_15->astate, VAR_14);
 }

 FUNC_2(VAR_6);


 FUNC_5(VAR_12, VAR_2);
 FUNC_7(VAR_11, VAR_17);

 return (0);
}
