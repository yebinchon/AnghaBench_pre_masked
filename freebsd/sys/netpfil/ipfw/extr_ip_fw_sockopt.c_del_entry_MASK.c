
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ip_fw_chain {int dummy; } ;
typedef int rt ;
struct TYPE_6__ {int start_rule; int end_rule; int set; int new_set; int flags; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_6 ;
 int FUNC_2 (struct ip_fw_chain*,TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct ip_fw_chain*,TYPE_1__*) ;
 int FUNC_5 (struct ip_fw_chain*,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_6(struct ip_fw_chain *VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;
 uint8_t VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 ipfw_range_tlv VAR_15;

 VAR_9 = VAR_8 & 0xffff;
 VAR_10 = (VAR_8 >> 24) & 0xff;
 VAR_11 = (VAR_8 >> 16) & 0xff;

 if (VAR_10 > 5 || VAR_11 > VAR_6)
  return VAR_0;
 if (VAR_10 == 0 || VAR_10 == 2 || VAR_10 == 5) {
  if (VAR_9 >= VAR_2)
   return VAR_0;
 } else {
  if (VAR_9 > VAR_6)
   return VAR_0;
 }


 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.start_rule = VAR_9;
 VAR_15.end_rule = VAR_9;
 VAR_15.set = VAR_9;
 VAR_15.new_set = VAR_11;
 VAR_12 = 0;

 switch (VAR_10) {
 case 0:
  if (VAR_9 == 0)
   VAR_15.flags |= VAR_3;
  else
   VAR_15.flags |= VAR_4;
  VAR_12 = 1;
  break;
 case 1:
  VAR_15.flags |= VAR_5;
  VAR_12 = 1;
  break;
 case 5:
  VAR_15.flags |= VAR_4 | VAR_5;
  VAR_15.set = VAR_11;
  VAR_15.new_set = 0;
  VAR_12 = 1;
  break;
 case 2:
  VAR_15.flags |= VAR_4;
  break;
 case 3:
  FUNC_0(VAR_7);
  VAR_14 = FUNC_5(VAR_7, &VAR_15, 1);
  FUNC_1(VAR_7);
  return (VAR_14);
 case 4:
  FUNC_0(VAR_7);
  VAR_14 = FUNC_5(VAR_7, &VAR_15, 0);
  FUNC_1(VAR_7);
  return (VAR_14);
 default:
  return (VAR_1);
 }

 if (VAR_12 != 0) {
  if ((VAR_14 = FUNC_2(VAR_7, &VAR_15, &VAR_13)) != 0)
   return (VAR_14);

  if (VAR_13 == 0 && (VAR_10 != 1 && VAR_9 != 0))
   return (VAR_0);

  return (0);
 }

 return (FUNC_4(VAR_7, &VAR_15));
}
