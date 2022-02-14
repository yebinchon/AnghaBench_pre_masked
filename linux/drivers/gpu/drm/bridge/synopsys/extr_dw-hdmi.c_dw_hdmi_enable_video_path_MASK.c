
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int mc_clkdis; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct dw_hdmi*,int,int ) ;
 scalar_t__ FUNC_1 (struct dw_hdmi*) ;

__attribute__((used)) static void FUNC_2(struct dw_hdmi *VAR_16)
{

 FUNC_0(VAR_16, 12, VAR_3);
 FUNC_0(VAR_16, 32, VAR_4);
 FUNC_0(VAR_16, 1, VAR_5);


 FUNC_0(VAR_16, 0x0B, VAR_0);
 FUNC_0(VAR_16, 0x16, VAR_1);
 FUNC_0(VAR_16, 0x21, VAR_2);


 VAR_16->mc_clkdis |= VAR_9 |
      VAR_8 |
      VAR_7 |
      VAR_11 |
      VAR_12;
 VAR_16->mc_clkdis &= ~VAR_10;
 FUNC_0(VAR_16, VAR_16->mc_clkdis, VAR_6);

 VAR_16->mc_clkdis &= ~VAR_12;
 FUNC_0(VAR_16, VAR_16->mc_clkdis, VAR_6);


 if (FUNC_1(VAR_16)) {
  VAR_16->mc_clkdis &= ~VAR_8;
  FUNC_0(VAR_16, VAR_16->mc_clkdis, VAR_6);
 }


 if (FUNC_1(VAR_16))
  FUNC_0(VAR_16, VAR_15,
       VAR_13);
 else
  FUNC_0(VAR_16, VAR_14,
       VAR_13);
}
