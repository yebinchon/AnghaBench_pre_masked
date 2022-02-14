
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl8366_vlan_mc {scalar_t__ fid; scalar_t__ member; scalar_t__ untag; scalar_t__ priority; scalar_t__ vid; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct rtl8366_vlan_mc*,char,int) ;
 int FUNC_2 (struct rtl8366_smi*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_9, u32 VAR_10,
     struct rtl8366_vlan_mc *VAR_11)
{
 u32 VAR_12[3];
 int VAR_13;
 int VAR_14;

 FUNC_1(VAR_11, '\0', sizeof(struct rtl8366_vlan_mc));

 if (VAR_10 >= VAR_1)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  VAR_13 = FUNC_2(VAR_9,
        FUNC_0(VAR_10) + VAR_14,
        &VAR_12[VAR_14]);
  if (VAR_13)
   return VAR_13;
 }

 VAR_11->vid = VAR_12[0] & VAR_8;
 VAR_11->priority = (VAR_12[0] >> VAR_5) &
      VAR_4;
 VAR_11->untag = (VAR_12[1] >> VAR_7) &
   VAR_6;
 VAR_11->member = VAR_12[1] & VAR_3;
 VAR_11->fid = VAR_12[2] & VAR_2;

 return 0;
}
