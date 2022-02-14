
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ti ;
struct tid_info {int uidx; } ;
struct sockopt_data {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*,struct tid_info*,int *) ;
 scalar_t__ FUNC_3 (struct sockopt_data*,size_t) ;
 int FUNC_4 (struct tid_info*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 uint32_t *VAR_4;
 struct tid_info VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = sizeof(*VAR_2) + sizeof(uint32_t);
 VAR_2 = (ip_fw3_opheader *)FUNC_3(VAR_3, VAR_6);
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_4 = (uint32_t *)(VAR_2 + 1);
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.uidx = *VAR_4;
 FUNC_0(VAR_1);
 VAR_7 = FUNC_2(VAR_1, &VAR_5, VAR_4);
 FUNC_1(VAR_1);
 return (VAR_7);
}
