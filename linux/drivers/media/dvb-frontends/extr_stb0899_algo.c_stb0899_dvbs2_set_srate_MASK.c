
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb0899_internal {int master_clk; int srate; } ;
struct stb0899_state {struct stb0899_internal internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct stb0899_state*) ;
 int FUNC_4 (struct stb0899_state*) ;
 int FUNC_5 (struct stb0899_state*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct stb0899_state *VAR_13)
{
 struct stb0899_internal *VAR_14 = &VAR_13->internal;

 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u8 VAR_26;


 VAR_15 = (VAR_14->master_clk * 2) / (5 * VAR_14->srate);
 VAR_15 = (VAR_15 == 0) ? 1 : VAR_15;
 VAR_16 = FUNC_0(VAR_15);

 VAR_17 = 0;
 if (VAR_16 >= 5)
  VAR_17 = VAR_16 - 4;

 VAR_18 = (1 << VAR_16);

 VAR_19 = VAR_14->master_clk / ((VAR_18 * VAR_14->srate) / 1000);

 if (VAR_19 <= 2250)
  VAR_23 = 1;
 else
  VAR_23 = 0;

 VAR_24 = ((VAR_17 << 3) & 0x18) + ((VAR_23 << 5) & 0x20) + (VAR_16 & 0x7);
 FUNC_5(VAR_13, VAR_12, VAR_5, VAR_10, VAR_24);

 if (VAR_19 <= 3450)
  VAR_26 = 0;
 else if (VAR_19 <= 4250)
  VAR_26 = 1;
 else
  VAR_26 = 2;

 FUNC_5(VAR_13, VAR_12, VAR_2, VAR_7, VAR_26);
 VAR_20 = FUNC_4(VAR_13);
 FUNC_5(VAR_13, VAR_12, VAR_4, VAR_9, VAR_20);

 VAR_21 = FUNC_3(VAR_13);
 VAR_25 = FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_1, VAR_25, VAR_21);
 FUNC_5(VAR_13, VAR_12, VAR_3, VAR_8, VAR_25);


 VAR_22 = VAR_14->srate / (VAR_14->master_clk / 4096);
 FUNC_5(VAR_13, VAR_12, VAR_6, VAR_11, VAR_22);
}
