
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {int set; } ;
struct TYPE_5__ {int new_set; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 scalar_t__ FUNC_2 (struct ip_fw*,TYPE_1__*) ;
 int FUNC_3 (struct ip_fw_chain*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_0, ipfw_range_tlv *VAR_1)
{
 struct ip_fw *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);
 if ((VAR_3 = FUNC_3(VAR_0, VAR_1)) != 0) {
  FUNC_1(VAR_0);
  return (VAR_3);
 }


 for (VAR_3 = 0; VAR_3 < VAR_0->n_rules; VAR_3++) {
  VAR_2 = VAR_0->map[VAR_3];
  if (FUNC_2(VAR_2, VAR_1) == 0)
   continue;
  VAR_2->set = VAR_1->new_set;
 }

 FUNC_1(VAR_0);

 return (0);
}
