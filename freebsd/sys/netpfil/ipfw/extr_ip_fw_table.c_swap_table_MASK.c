
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_header {int ntlv; } ;
typedef int ipfw_obj_ntlv ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 int FUNC_0 (int *,struct tid_info*) ;
 int FUNC_1 (struct ip_fw_chain*,struct tid_info*,struct tid_info*) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 int VAR_4;
 struct _ipfw_obj_header *VAR_5;
 struct tid_info VAR_6, VAR_7;

 if (VAR_3->valsize != sizeof(*VAR_5) + sizeof(ipfw_obj_ntlv))
  return (VAR_0);

 VAR_5 = (struct _ipfw_obj_header *)VAR_2;
 FUNC_0(&VAR_5->ntlv, &VAR_6);
 FUNC_0((ipfw_obj_ntlv *)(VAR_5 + 1), &VAR_7);

 VAR_4 = FUNC_1(VAR_1, &VAR_6, &VAR_7);

 return (VAR_4);
}
