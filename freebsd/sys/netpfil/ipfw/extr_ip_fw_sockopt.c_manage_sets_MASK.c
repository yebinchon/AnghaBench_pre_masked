
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
typedef int ipfw_range_tlv ;
struct TYPE_7__ {int length; } ;
struct TYPE_10__ {scalar_t__ set; scalar_t__ new_set; TYPE_1__ head; } ;
struct TYPE_8__ {TYPE_4__ range; } ;
typedef TYPE_2__ ipfw_range_header ;
struct TYPE_9__ {int opcode; } ;
typedef TYPE_3__ ip_fw3_opheader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;



 int FUNC_2 (struct ip_fw_chain*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (struct sockopt_data*,int) ;
 int FUNC_4 (struct ip_fw_chain*,TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_5(struct ip_fw_chain *VAR_2, ip_fw3_opheader *VAR_3,
    struct sockopt_data *VAR_4)
{
 ipfw_range_header *VAR_5;
 int VAR_6;

 if (VAR_4->valsize != sizeof(*VAR_5))
  return (VAR_0);

 VAR_5 = (ipfw_range_header *)FUNC_3(VAR_4, VAR_4->valsize);

 if (VAR_5->range.head.length != sizeof(ipfw_range_tlv))
  return (1);

 if (VAR_3->opcode != 130 &&
     (VAR_5->range.set >= VAR_1 ||
     VAR_5->range.new_set >= VAR_1))
  return (VAR_0);

 VAR_6 = 0;
 FUNC_0(VAR_2);
 switch (VAR_3->opcode) {
 case 128:
 case 129:
  VAR_6 = FUNC_4(VAR_2, &VAR_5->range,
      VAR_3->opcode == 129);
  break;
 case 130:
  FUNC_2(VAR_2, &VAR_5->range);
  break;
 }
 FUNC_1(VAR_2);

 return (VAR_6);
}
