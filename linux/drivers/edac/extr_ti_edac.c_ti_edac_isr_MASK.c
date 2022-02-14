
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_edac {int dummy; } ;
struct mem_ctl_info {int ctl_name; struct ti_edac* pvt_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
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
 int FUNC_0 (int ,struct mem_ctl_info*,int,int,int,int,int ,int ,int ,int ,char*) ;
 int FUNC_1 (struct ti_edac*,int ) ;
 int FUNC_2 (struct ti_edac*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_12, void *VAR_13)
{
 struct mem_ctl_info *VAR_14 = VAR_13;
 struct ti_edac *VAR_15 = VAR_14->pvt_info;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_16 = FUNC_1(VAR_15, VAR_5);

 if (VAR_16 & VAR_0) {
  VAR_17 = FUNC_1(VAR_15, VAR_1);
  VAR_18 = FUNC_1(VAR_15, VAR_2);
  FUNC_2(VAR_15, VAR_18, VAR_2);
  FUNC_0(VAR_7, VAR_14, VAR_18,
         VAR_17 >> VAR_11,
         VAR_17 & ~VAR_10, -1, 0, 0, 0,
         VAR_14->ctl_name, "1B");
 }

 if (VAR_16 & VAR_3) {
  VAR_17 = FUNC_1(VAR_15, VAR_4);
  FUNC_0(VAR_8, VAR_14, 1,
         VAR_17 >> VAR_11,
         VAR_17 & ~VAR_10, -1, 0, 0, 0,
         VAR_14->ctl_name, "2B");
 }

 if (VAR_16 & VAR_6)
  FUNC_0(VAR_8, VAR_14, 1,
         0, 0, -1, 0, 0, 0,
         VAR_14->ctl_name, "WR");

 FUNC_2(VAR_15, VAR_16, VAR_5);

 return VAR_9;
}
