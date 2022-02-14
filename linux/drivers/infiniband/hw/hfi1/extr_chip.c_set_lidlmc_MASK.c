
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_pportdata {unsigned int lmc; scalar_t__ lid; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct hfi1_devdata*,int ) ;
 int FUNC_4 (struct hfi1_devdata*,int,int) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int) ;
 int FUNC_6 (struct hfi1_devdata*,int,int ,int) ;

__attribute__((used)) static void FUNC_7(struct hfi1_pportdata *VAR_14)
{
 int VAR_15;
 u64 VAR_16 = 0;
 struct hfi1_devdata *VAR_17 = VAR_14->dd;
 u32 VAR_18 = ~((1U << VAR_14->lmc) - 1);
 u64 VAR_19 = FUNC_3(VAR_14->dd, VAR_0);
 u32 VAR_20;





 VAR_20 = (VAR_14->lid >= FUNC_0(VAR_7)) ? 0 : VAR_14->lid;
 VAR_19 &= ~(VAR_6
  | VAR_3);
 VAR_19 |= ((VAR_20 & VAR_4)
   << VAR_5) |
       ((VAR_18 & VAR_1)
   << VAR_2);
 FUNC_5(VAR_14->dd, VAR_0, VAR_19);




 VAR_16 = ((VAR_18 & VAR_10) <<
   VAR_11) |
        (((VAR_20 & VAR_18) & VAR_12) <<
   VAR_13);

 for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_17); VAR_15++) {
  FUNC_2(VAR_8, "SendContext[%d].SLID_CHECK = 0x%x",
     VAR_15, (u32)VAR_16);
  FUNC_6(VAR_17, VAR_15, VAR_9, VAR_16);
 }


 FUNC_4(VAR_17, VAR_18, VAR_20);
}
