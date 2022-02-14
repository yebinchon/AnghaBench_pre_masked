
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_vlan_4k {int vid; int member; int untag; int fid; } ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_17,
    const struct rtl8366_vlan_4k *VAR_18)
{
 u32 VAR_19[VAR_6];
 int VAR_20;
 int VAR_21;

 if (VAR_18->vid >= VAR_2 ||
     VAR_18->member > VAR_9 ||
     VAR_18->untag > VAR_16 ||
     VAR_18->fid > VAR_1)
  return -VAR_0;

 VAR_19[0] = (VAR_18->member & VAR_9) <<
    VAR_10;
 VAR_19[1] = (VAR_18->fid & VAR_7) <<
    VAR_8;
 VAR_19[2] = (VAR_18->untag & VAR_11) <<
    VAR_12;
 VAR_19[3] = ((VAR_18->untag >> 2) & VAR_13) <<
    VAR_14;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_19); VAR_21++)
  FUNC_1(VAR_17, FUNC_2(VAR_21), VAR_19[VAR_21]);


 FUNC_1(VAR_17, VAR_3,
        VAR_18->vid & VAR_15);


 FUNC_1(VAR_17, VAR_5, VAR_4);

 return 0;
}
