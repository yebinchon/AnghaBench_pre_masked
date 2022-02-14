
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct _ipfw_obj_header {int dummy; } ;
struct TYPE_3__ {scalar_t__ opcode; } ;
typedef TYPE_1__ ip_fw3_opheader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ip_fw_chain*,struct tid_info*) ;
 int FUNC_1 (struct ip_fw_chain*,struct tid_info*) ;
 int FUNC_2 (struct _ipfw_obj_header*,struct tid_info*) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_4, ip_fw3_opheader *VAR_5,
    struct sockopt_data *VAR_6)
{
 int VAR_7;
 struct _ipfw_obj_header *VAR_8;
 struct tid_info VAR_9;

 if (VAR_6->valsize != sizeof(*VAR_8))
  return (VAR_0);

 VAR_8 = (struct _ipfw_obj_header *)VAR_5;
 FUNC_2(VAR_8, &VAR_9);

 if (VAR_5->opcode == VAR_2)
  VAR_7 = FUNC_0(VAR_4, &VAR_9);
 else if (VAR_5->opcode == VAR_3)
  VAR_7 = FUNC_1(VAR_4, &VAR_9);
 else
  return (VAR_1);

 return (VAR_7);
}
