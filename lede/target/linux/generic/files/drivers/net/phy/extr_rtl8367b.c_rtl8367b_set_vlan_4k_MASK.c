
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_vlan_4k {int vid; int member; int untag; int fid; } ;
struct rtl8366_smi {int dummy; } ;
typedef int data ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rtl8366_smi *VAR_15,
    const struct rtl8366_vlan_4k *VAR_16)
{
 u32 VAR_17[VAR_12];
 int VAR_18;
 int VAR_19;

 if (VAR_16->vid >= VAR_2 ||
     VAR_16->member > VAR_6 ||
     VAR_16->untag > VAR_14 ||
     VAR_16->fid > VAR_1)
  return -VAR_0;

 FUNC_3(VAR_17, 0, sizeof(VAR_17));

 VAR_17[0] = (VAR_16->member & VAR_6) <<
    VAR_7;
 VAR_17[0] |= (VAR_16->untag & VAR_8) <<
     VAR_9;
 VAR_17[1] = (VAR_16->fid & VAR_10) <<
    VAR_11;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_17); VAR_19++)
  FUNC_1(VAR_15, FUNC_2(VAR_19), VAR_17[VAR_19]);


 FUNC_1(VAR_15, VAR_3,
        VAR_16->vid & VAR_13);


 FUNC_1(VAR_15, VAR_5, VAR_4);

 return 0;
}
