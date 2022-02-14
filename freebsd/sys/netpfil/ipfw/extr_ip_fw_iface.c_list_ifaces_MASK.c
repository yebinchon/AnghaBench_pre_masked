
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockopt_data {int valsize; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_iface_args {struct sockopt_data* sd; struct ip_fw_chain* ch; } ;
struct _ipfw_obj_lheader {int size; int count; int objsize; } ;
typedef int ipfw_obj_lheader ;
typedef int ipfw_iface_info ;
typedef int ip_fw3_opheader ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 int FUNC_4 (struct namedobj_instance*) ;
 int FUNC_5 (struct namedobj_instance*,int ,struct dump_iface_args*) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_3, ip_fw3_opheader *VAR_4,
    struct sockopt_data *VAR_5)
{
 struct namedobj_instance *VAR_6;
 struct _ipfw_obj_lheader *VAR_7;
 struct dump_iface_args VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_7 = (struct _ipfw_obj_lheader *)FUNC_3(VAR_5,sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 if (VAR_5->valsize < VAR_7->size)
  return (VAR_0);

 FUNC_1(VAR_3);
 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 != ((void*)0))
  VAR_9 = FUNC_4(VAR_6);
 else
  VAR_9 = 0;
 VAR_10 = VAR_9 * sizeof(ipfw_iface_info) + sizeof(ipfw_obj_lheader);


 VAR_7->count = VAR_9;
 VAR_7->objsize = sizeof(ipfw_iface_info);

 if (VAR_10 > VAR_7->size) {
  VAR_7->size = VAR_10;
  FUNC_2(VAR_3);
  return (VAR_1);
 }
 VAR_7->size = VAR_10;

 VAR_8.ch = VAR_3;
 VAR_8.sd = VAR_5;

 if (VAR_6 != ((void*)0))
  FUNC_5(VAR_6, VAR_2, &VAR_8);
 FUNC_2(VAR_3);

 return (0);
}
