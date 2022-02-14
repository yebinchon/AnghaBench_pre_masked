
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_dsi {int xfer_result; int xfer_completion; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vc4_dsi*,int *,int,int,char*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_14, void *VAR_15)
{
 struct vc4_dsi *VAR_16 = VAR_15;
 u32 VAR_17 = FUNC_0(VAR_11);
 irqreturn_t VAR_18 = VAR_13;

 FUNC_1(VAR_11, VAR_17);

 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_3, "LPDT sync");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_0, "data lane 0 sequence");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_1, "LP0 contention");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_2, "LP1 contention");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_4, "HSTX timeout");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_5, "LPRX timeout");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_8, "turnaround timeout");
 FUNC_3(VAR_16, &VAR_18, VAR_17,
    VAR_7, "peripheral reset timeout");

 if (VAR_17 & (VAR_9 | VAR_6)) {
  FUNC_2(&VAR_16->xfer_completion);
  VAR_18 = VAR_12;
 } else if (VAR_17 & VAR_4) {
  FUNC_2(&VAR_16->xfer_completion);
  VAR_16->xfer_result = -VAR_10;
  VAR_18 = VAR_12;
 }

 return VAR_18;
}
