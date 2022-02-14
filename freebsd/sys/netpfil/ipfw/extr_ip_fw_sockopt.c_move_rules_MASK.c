
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_2__ {int range; } ;
typedef TYPE_1__ ipfw_range_header ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sockopt_data*,int) ;
 int FUNC_2 (struct ip_fw_chain*,int *) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 ipfw_range_header *VAR_4;

 if (VAR_3->valsize != sizeof(*VAR_4))
  return (VAR_0);

 VAR_4 = (ipfw_range_header *)FUNC_1(VAR_3, VAR_3->valsize);

 if (FUNC_0(&VAR_4->range) != 0)
  return (VAR_0);

 return (FUNC_2(VAR_1, &VAR_4->range));
}
