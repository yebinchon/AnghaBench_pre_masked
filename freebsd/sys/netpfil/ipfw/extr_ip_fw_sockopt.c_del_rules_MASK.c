
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int new_set; } ;
struct TYPE_4__ {TYPE_2__ range; } ;
typedef TYPE_1__ ipfw_range_header ;
typedef int ip_fw3_opheader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ip_fw_chain*,TYPE_2__*,int*) ;
 scalar_t__ FUNC_2 (struct sockopt_data*,int) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_1, ip_fw3_opheader *VAR_2,
    struct sockopt_data *VAR_3)
{
 ipfw_range_header *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3->valsize != sizeof(*VAR_4))
  return (VAR_0);

 VAR_4 = (ipfw_range_header *)FUNC_2(VAR_3, VAR_3->valsize);

 if (FUNC_0(&VAR_4->range) != 0)
  return (VAR_0);

 VAR_6 = 0;
 if ((VAR_5 = FUNC_1(VAR_1, &VAR_4->range, &VAR_6)) != 0)
  return (VAR_5);


 VAR_4->range.new_set = VAR_6;
 return (0);
}
