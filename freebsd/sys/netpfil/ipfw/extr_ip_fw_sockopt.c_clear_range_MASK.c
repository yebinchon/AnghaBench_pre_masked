
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {int dummy; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw*,int) ;
 scalar_t__ FUNC_3 (struct ip_fw*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_1, ipfw_range_tlv *VAR_2, int VAR_3)
{
 struct ip_fw *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = 0;
 VAR_2->flags |= VAR_0;

 FUNC_0(VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_1->n_rules; VAR_6++) {
  VAR_4 = VAR_1->map[VAR_6];
  if (FUNC_3(VAR_4, VAR_2) == 0)
   continue;
  FUNC_2(VAR_4, VAR_3);
  VAR_5++;
 }
 FUNC_1(VAR_1);

 return (VAR_5);
}
