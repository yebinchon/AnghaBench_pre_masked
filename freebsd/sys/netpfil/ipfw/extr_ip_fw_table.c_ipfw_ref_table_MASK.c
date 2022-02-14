
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct tid_info {int dummy; } ;
struct TYPE_2__ {int kidx; } ;
struct table_config {TYPE_1__ no; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_obj_ntlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int ,struct tid_info*,struct table_config**) ;
 int FUNC_3 (int *,struct tid_info*) ;
 int FUNC_4 (struct table_config*) ;

int
FUNC_5(struct ip_fw_chain *VAR_1, ipfw_obj_ntlv *VAR_2, uint16_t *VAR_3)
{
 struct tid_info VAR_4;
 struct table_config *VAR_5;
 int VAR_6;

 FUNC_1(VAR_1);

 FUNC_3(VAR_2, &VAR_4);
 VAR_6 = FUNC_2(FUNC_0(VAR_1), &VAR_4, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_4(VAR_5);
 *VAR_3 = VAR_5->no.kidx;

 return (0);
}
