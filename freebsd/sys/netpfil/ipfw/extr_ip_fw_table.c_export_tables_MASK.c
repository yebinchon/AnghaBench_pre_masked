
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sockopt_data {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct dump_table_args {struct sockopt_data* sd; struct ip_fw_chain* ch; } ;
typedef int ipfw_xtable_info ;
struct TYPE_3__ {int count; int objsize; int size; } ;
typedef TYPE_1__ ipfw_obj_lheader ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct dump_table_args*) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_2, ipfw_obj_lheader *VAR_3,
    struct sockopt_data *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 struct dump_table_args VAR_7;

 VAR_6 = FUNC_1(FUNC_0(VAR_2));
 VAR_5 = VAR_6 * sizeof(ipfw_xtable_info) + sizeof(ipfw_obj_lheader);


 VAR_3->count = VAR_6;
 VAR_3->objsize = sizeof(ipfw_xtable_info);

 if (VAR_5 > VAR_3->size) {
  VAR_3->size = VAR_5;
  return (VAR_0);
 }

 VAR_3->size = VAR_5;

 VAR_7.ch = VAR_2;
 VAR_7.sd = VAR_4;

 FUNC_2(FUNC_0(VAR_2), VAR_1, &VAR_7);

 return (0);
}
