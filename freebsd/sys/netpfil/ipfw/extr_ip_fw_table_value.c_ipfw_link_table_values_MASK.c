
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct tentry_info {scalar_t__ value; int * ptv; int pvalue; } ;
struct TYPE_5__ {int (* func ) (struct table_config*,TYPE_2__*) ;} ;
struct tableop_state {int count; scalar_t__ modified; TYPE_2__ opstate; struct table_config* tc; int vmask; struct tentry_info* tei; TYPE_1__* ta; int vshared; } ;
struct table_value {int refcnt; } ;
struct TYPE_6__ {int kidx; char* name; } ;
struct table_val_link {TYPE_3__ no; struct table_value* pval; } ;
struct table_config {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {struct table_value* valuestate; } ;
struct TYPE_4__ {int vlimit; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_5 (struct ip_fw_chain*,struct tableop_state*,struct namedobj_instance*,size_t*) ;
 int FUNC_6 (struct ip_fw_chain*,struct tableop_state*) ;
 int FUNC_7 (struct ip_fw_chain*,struct table_config*,int ,struct table_value**,struct namedobj_instance**) ;
 int FUNC_8 (struct namedobj_instance*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct namedobj_instance*,int ,char*) ;
 int * FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ,struct table_value*,int ) ;
 int FUNC_12 (struct table_value*,struct table_value*,int) ;
 int FUNC_13 (struct table_config*,TYPE_2__*) ;
 int FUNC_14 (struct table_config*) ;
 int FUNC_15 (struct table_config*) ;

int
FUNC_16(struct ip_fw_chain *VAR_3, struct tableop_state *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct namedobj_instance *VAR_8;
 struct table_config *VAR_9;
 struct tentry_info *VAR_10, *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint16_t VAR_14;
 struct table_val_link *VAR_15;
 struct table_value VAR_16, *VAR_17;





 FUNC_1(VAR_3);
 FUNC_7(VAR_3, VAR_4->tc, VAR_4->vshared, &VAR_17, &VAR_8);

 VAR_5 = 0;
 VAR_7 = 0;
 VAR_13 = VAR_4->ta->vlimit;
 VAR_14 = 0;
 VAR_9 = VAR_4->tc;
 VAR_10 = VAR_4->tei;
 VAR_12 = VAR_4->count;
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  VAR_11 = &VAR_10[VAR_6];
  VAR_11->value = 0;
  FUNC_11(VAR_11->pvalue, &VAR_16, VAR_4->vmask);
  VAR_15 = (struct table_val_link *)FUNC_9(VAR_8, 0,
      (char *)&VAR_16);
  if (VAR_15 == ((void*)0))
   continue;

  if (VAR_13 > 0 && VAR_13 <= VAR_15->no.kidx)
   continue;


  VAR_15->pval->refcnt++;
  VAR_11->value = VAR_15->no.kidx;
  VAR_7++;
 }

 if (VAR_4->count == VAR_7) {

  return (0);
 }





 FUNC_4(VAR_3, VAR_4);

 FUNC_14(VAR_9);
 FUNC_2(VAR_3);




 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  VAR_11 = &VAR_10[VAR_6];
  if (VAR_11->value != 0)
   continue;
  if (VAR_11->ptv != ((void*)0))
   continue;
  VAR_11->ptv = FUNC_10(sizeof(struct table_val_link), VAR_0,
      VAR_1 | VAR_2);
 }





 FUNC_0(VAR_3);
 FUNC_15(VAR_9);
 FUNC_6(VAR_3, VAR_4);
 if (VAR_4->modified != 0) {






  return (0);
 }

 FUNC_3(VAR_17 == VAR_3->valuestate, ("resize_storage() notify failure"));


 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  VAR_11 = &VAR_10[VAR_6];


  FUNC_11(VAR_11->pvalue, &VAR_16, VAR_4->vmask);
  VAR_15 = (struct table_val_link *)FUNC_9(VAR_8, 0,
      (char *)&VAR_16);
  if (VAR_15 != ((void*)0)) {
   VAR_15->pval->refcnt++;
   VAR_11->value = VAR_15->no.kidx;
   continue;
  }


  VAR_5 = FUNC_5(VAR_3, VAR_4, VAR_8, &VAR_14);
  if (VAR_5 != 0) {
   VAR_4->opstate.func(VAR_4->tc, &VAR_4->opstate);
   return (VAR_5);
  }

  if (VAR_4->modified != 0)
   return (0);


  VAR_11->value = VAR_14;
  VAR_15 = (struct table_val_link *)VAR_11->ptv;
  VAR_11->ptv = ((void*)0);

  VAR_15->no.kidx = VAR_14;
  VAR_15->no.name = (char *)&VAR_17[VAR_14];
  VAR_15->pval = &VAR_17[VAR_14];
  FUNC_12(VAR_15->pval, &VAR_16, sizeof(struct table_value));
  VAR_17[VAR_14].refcnt = 1;
  FUNC_8(VAR_8, &VAR_15->no);
 }

 return (0);
}
