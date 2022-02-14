
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xi ;
typedef int uint16_t ;
struct tid_info {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {int vmask; } ;
typedef TYPE_1__ ipfw_xtable_info ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*,struct tid_info*,int *,TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_1, struct tid_info *VAR_2,
    uint16_t *VAR_3)
{
 ipfw_xtable_info VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.vmask = VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, ((void*)0), &VAR_4, VAR_3, 1);
 if (VAR_5 != 0)
  return (VAR_5);

 return (0);
}
