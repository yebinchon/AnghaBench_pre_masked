
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tid_info {scalar_t__ type; int uidx; } ;
struct table_value {int dummy; } ;
struct table_info {int dummy; } ;
struct TYPE_9__ {scalar_t__ subtype; int kidx; } ;
struct table_config {int astate; struct table_algo* ta; TYPE_3__ no; } ;
struct table_algo {int (* find_tentry ) (int ,struct table_info*,TYPE_5__*) ;} ;
struct sockopt_data {size_t valsize; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ head; } ;
struct _ipfw_obj_header {TYPE_2__ ntlv; } ;
struct TYPE_10__ {int value; int kidx; } ;
struct TYPE_11__ {TYPE_4__ v; int idx; } ;
typedef TYPE_5__ ipfw_obj_tentry ;
typedef struct _ipfw_obj_header ipfw_obj_header ;
typedef int ip_fw3_opheader ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 struct table_info* FUNC_3 (struct ip_fw_chain*,int ) ;
 struct table_config* FUNC_4 (struct namedobj_instance*,struct tid_info*) ;
 struct table_value* FUNC_5 (struct ip_fw_chain*,struct table_config*,int ) ;
 int FUNC_6 (struct table_value*,int *) ;
 scalar_t__ FUNC_7 (struct sockopt_data*,size_t) ;
 int FUNC_8 (struct _ipfw_obj_header*,struct tid_info*) ;
 int FUNC_9 (int ,struct table_info*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_10(struct ip_fw_chain *VAR_3, ip_fw3_opheader *VAR_4,
    struct sockopt_data *VAR_5)
{
 ipfw_obj_tentry *VAR_6;
 ipfw_obj_header *VAR_7;
 struct tid_info VAR_8;
 struct table_config *VAR_9;
 struct table_algo *VAR_10;
 struct table_info *VAR_11;
 struct table_value *VAR_12;
 struct namedobj_instance *VAR_13;
 int VAR_14;
 size_t VAR_15;


 VAR_15 = sizeof(*VAR_7) + sizeof(*VAR_6);
 if (VAR_5->valsize != VAR_15)
  return (VAR_0);

 VAR_7 = (struct _ipfw_obj_header *)FUNC_7(VAR_5, VAR_15);
 VAR_6 = (ipfw_obj_tentry *)(VAR_7 + 1);


 if (VAR_7->ntlv.head.length != sizeof(VAR_7->ntlv))
  return (VAR_0);

 FUNC_8(VAR_7, &VAR_8);
 VAR_8.type = VAR_7->ntlv.type;
 VAR_8.uidx = VAR_6->idx;

 FUNC_1(VAR_3);
 VAR_13 = FUNC_0(VAR_3);




 VAR_10 = ((void*)0);
 if ((VAR_9 = FUNC_4(VAR_13, &VAR_8)) == ((void*)0)) {
  FUNC_2(VAR_3);
  return (VAR_2);
 }


 if (VAR_9->no.subtype != VAR_8.type) {
  FUNC_2(VAR_3);
  return (VAR_0);
 }

 VAR_11 = FUNC_3(VAR_3, VAR_9->no.kidx);
 VAR_10 = VAR_9->ta;

 if (VAR_10->find_tentry == ((void*)0))
  return (VAR_1);

 VAR_14 = VAR_10->find_tentry(VAR_9->astate, VAR_11, VAR_6);
 if (VAR_14 == 0) {
  VAR_12 = FUNC_5(VAR_3, VAR_9, VAR_6->v.kidx);
  FUNC_6(VAR_12, &VAR_6->v.value);
 }
 FUNC_2(VAR_3);

 return (VAR_14);
}
