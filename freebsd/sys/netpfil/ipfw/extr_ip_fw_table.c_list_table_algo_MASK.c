
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tables_config {int algo_count; struct table_algo** algo; } ;
struct table_algo {int refcnt; int type; int name; } ;
struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_lheader {int size; int count; int objsize; } ;
struct TYPE_2__ {int refcnt; int type; int algoname; } ;
typedef TYPE_1__ ipfw_ta_info ;
typedef int ipfw_obj_lheader ;
typedef int ip_fw3_opheader ;


 struct tables_config* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct sockopt_data*,int) ;
 scalar_t__ FUNC_5 (struct sockopt_data*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct ip_fw_chain *VAR_2, ip_fw3_opheader *VAR_3,
    struct sockopt_data *VAR_4)
{
 struct _ipfw_obj_lheader *VAR_5;
 struct tables_config *VAR_6;
 ipfw_ta_info *VAR_7;
 struct table_algo *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;

 VAR_5 = (struct _ipfw_obj_lheader *)FUNC_4(VAR_4,sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 if (VAR_4->valsize < VAR_5->size)
  return (VAR_0);

 FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_2);
 VAR_9 = VAR_6->algo_count;
 VAR_11 = VAR_9 * sizeof(ipfw_ta_info) + sizeof(ipfw_obj_lheader);


 VAR_5->count = VAR_9;
 VAR_5->objsize = sizeof(ipfw_ta_info);

 if (VAR_11 > VAR_5->size) {
  VAR_5->size = VAR_11;
  FUNC_2(VAR_2);
  return (VAR_1);
 }
 VAR_5->size = VAR_11;

 for (VAR_10 = 1; VAR_10 <= VAR_9; VAR_10++) {
  VAR_7 = (ipfw_ta_info *)FUNC_5(VAR_4, sizeof(*VAR_7));
  FUNC_3(VAR_7 != ((void*)0), ("previously checked buffer is not enough"));
  VAR_8 = VAR_6->algo[VAR_10];
  FUNC_6(VAR_7->algoname, VAR_8->name, sizeof(VAR_7->algoname));
  VAR_7->type = VAR_8->type;
  VAR_7->refcnt = VAR_8->refcnt;
 }

 FUNC_2(VAR_2);

 return (0);
}
