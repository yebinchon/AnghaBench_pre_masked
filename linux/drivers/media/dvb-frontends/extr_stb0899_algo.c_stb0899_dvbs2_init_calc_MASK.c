
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int srate; int srch_range; int step_size; int master_clk; scalar_t__ center_freq; } ;
struct stb0899_state {struct stb0899_internal internal; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_6 ;
 int FUNC_2 (struct stb0899_state*) ;
 int FUNC_3 (struct stb0899_state*) ;
 int FUNC_4 (struct stb0899_state*) ;
 int FUNC_5 (struct stb0899_state*,scalar_t__,int) ;
 int FUNC_6 (struct stb0899_state*) ;
 int FUNC_7 (struct stb0899_state*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct stb0899_state *VAR_7)
{
 struct stb0899_internal *VAR_8 = &VAR_7->internal;
 s32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;


 FUNC_3(VAR_7);
 FUNC_2(VAR_7);


 FUNC_6(VAR_7);
 FUNC_4(VAR_7);

 if (VAR_8->srate / 1000000 >= 15)
  VAR_10 = (1 << 17) / 5;
 else if (VAR_8->srate / 1000000 >= 10)
  VAR_10 = (1 << 17) / 7;
 else if (VAR_8->srate / 1000000 >= 5)
  VAR_10 = (1 << 17) / 10;
 else
  VAR_10 = (1 << 17) / 4;

 VAR_11 = VAR_8->srch_range / 1000000;
 VAR_9 = (10 * VAR_11 * (1 << 17)) / (VAR_10 * (VAR_8->srate / 1000000));
 VAR_9 = (VAR_9 + 6) / 10;
 VAR_9 = (VAR_9 == 0) ? 1 : VAR_9;
 if (VAR_9 % 2 == 0)
  FUNC_5(VAR_7, VAR_8->center_freq -
        (VAR_8->step_size * (VAR_8->srate / 20000000)),
        (VAR_8->master_clk) / 1000000);
 else
  FUNC_5(VAR_7, VAR_8->center_freq, (VAR_8->master_clk) / 1000000);


 VAR_12 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_6, VAR_12, 1);
 FUNC_1(VAR_2, VAR_12, VAR_9);
 FUNC_1(VAR_1, VAR_12, VAR_10);
 FUNC_7(VAR_7, VAR_5, VAR_3, VAR_4, VAR_12);
}
