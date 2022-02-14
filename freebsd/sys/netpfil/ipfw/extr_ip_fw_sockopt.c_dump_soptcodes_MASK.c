
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sockopt_data {int valsize; } ;
struct ipfw_sopt_handler {int refcnt; int version; int opcode; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_lheader {int size; int count; int objsize; } ;
struct TYPE_2__ {int refcnt; int version; int opcode; } ;
typedef TYPE_1__ ipfw_sopt_info ;
typedef int ipfw_obj_lheader ;
typedef int ip_fw3_opheader ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 struct ipfw_sopt_handler* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 scalar_t__ FUNC_4 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_4, ip_fw3_opheader *VAR_5,
    struct sockopt_data *VAR_6)
{
 struct _ipfw_obj_lheader *VAR_7;
 ipfw_sopt_info *VAR_8;
 struct ipfw_sopt_handler *VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;

 VAR_7 = (struct _ipfw_obj_lheader *)FUNC_3(VAR_6,sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 if (VAR_6->valsize < VAR_7->size)
  return (VAR_0);

 FUNC_0();
 VAR_10 = VAR_3;
 VAR_12 = VAR_10 * sizeof(ipfw_sopt_info) + sizeof(ipfw_obj_lheader);


 VAR_7->count = VAR_10;
 VAR_7->objsize = sizeof(ipfw_sopt_info);

 if (VAR_12 > VAR_7->size) {
  VAR_7->size = VAR_12;
  FUNC_1();
  return (VAR_1);
 }
 VAR_7->size = VAR_12;

 for (VAR_11 = 1; VAR_11 <= VAR_10; VAR_11++) {
  VAR_8 = (ipfw_sopt_info *)FUNC_4(VAR_6, sizeof(*VAR_8));
  FUNC_2(VAR_8 != ((void*)0), ("previously checked buffer is not enough"));
  VAR_9 = &VAR_2[VAR_11];
  VAR_8->opcode = VAR_9->opcode;
  VAR_8->version = VAR_9->version;
  VAR_8->refcnt = VAR_9->refcnt;
 }
 FUNC_1();

 return (0);
}
