
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dsi {int mode_flags; int lanes; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct vc4_dsi*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct vc4_dsi *VAR_20, bool VAR_21)
{
 bool VAR_22 = VAR_20->mode_flags & VAR_14;
 u32 VAR_23 = ((VAR_22 ? FUNC_0(VAR_16) : 0) |
    VAR_10 |
    (VAR_20->lanes > 1 ? VAR_11 : 0) |
    (VAR_20->lanes > 2 ? VAR_12 : 0) |
    (VAR_20->lanes > 3 ? VAR_13 : 0));
 u32 VAR_24 = ((VAR_22 ? VAR_1 : 0) |
    VAR_3 |
    (VAR_20->lanes > 1 ? VAR_5 : 0) |
    (VAR_20->lanes > 2 ? VAR_7 : 0) |
    (VAR_20->lanes > 3 ? VAR_9 : 0));
 u32 VAR_25 = ((VAR_22 ? VAR_0 : 0) |
    VAR_2 |
    (VAR_20->lanes > 1 ? VAR_4 : 0) |
    (VAR_20->lanes > 2 ? VAR_6 : 0) |
    (VAR_20->lanes > 3 ? VAR_8 : 0));
 int VAR_26;
 bool VAR_27 = (FUNC_1(VAR_17) &
           FUNC_0(VAR_18));

 if (VAR_21 == VAR_27)
  return;

 FUNC_2(VAR_19, VAR_24);
 FUNC_2(VAR_15, FUNC_1(VAR_15) | VAR_23);
 VAR_26 = FUNC_5((FUNC_1(VAR_19) & VAR_24) == VAR_24, 200);
 if (VAR_26) {
  FUNC_3(&VAR_20->pdev->dev,
    "Timeout waiting for DSI ULPS entry: STAT 0x%08x",
    FUNC_1(VAR_19));
  FUNC_2(VAR_15, FUNC_1(VAR_15) & ~VAR_23);
  FUNC_4(VAR_20, 0);
  return;
 }






 FUNC_4(VAR_20, VAR_21);

 FUNC_2(VAR_19, VAR_25);
 FUNC_2(VAR_15, FUNC_1(VAR_15) & ~VAR_23);
 VAR_26 = FUNC_5((FUNC_1(VAR_19) & VAR_25) == VAR_25, 200);
 if (VAR_26) {
  FUNC_3(&VAR_20->pdev->dev,
    "Timeout waiting for DSI STOP entry: STAT 0x%08x",
    FUNC_1(VAR_19));
  FUNC_2(VAR_15, FUNC_1(VAR_15) & ~VAR_23);
  return;
 }
}
