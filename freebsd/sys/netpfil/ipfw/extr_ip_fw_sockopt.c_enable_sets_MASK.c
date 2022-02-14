
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_3__ {int set; int new_set; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_2, ipfw_range_tlv *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_2);


 VAR_4 = (VAR_1 | VAR_3->set) & ~VAR_3->new_set;
 VAR_4 &= ~(1 << VAR_0);
 FUNC_1(VAR_2);
 VAR_1 = VAR_4;
 FUNC_2(VAR_2);
}
