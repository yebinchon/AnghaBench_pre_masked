
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {void* sample_period_val; } ;
struct at91_adc_state {int current_sample_rate; TYPE_1__ touch_st; } ;


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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct at91_adc_state*,int ) ;
 int FUNC_4 (struct at91_adc_state*,int ,int) ;
 void* FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct at91_adc_state *VAR_15, bool VAR_16)
{
 u32 VAR_17 = VAR_15->current_sample_rate / 1000;
 int VAR_18 = 0;
 u16 VAR_19;
 u32 VAR_20, VAR_21;

 if (!VAR_16) {

  FUNC_4(VAR_15, VAR_2,
    VAR_5 | VAR_4);
  FUNC_4(VAR_15, VAR_8, 0);
  return 0;
 }





 VAR_19 = FUNC_5(VAR_6 *
     VAR_17 / 1000, 1);


 while (VAR_19 >> VAR_18++)
  ;

 VAR_19 = VAR_18;

 VAR_20 = VAR_14;

 VAR_20 |= FUNC_1(2) & VAR_12;
 VAR_20 |= FUNC_0(VAR_19) &
  VAR_10;
 VAR_20 |= VAR_9;
 VAR_20 |= VAR_11;
 VAR_20 |= FUNC_2(2) & VAR_13;

 FUNC_4(VAR_15, VAR_8, VAR_20);

 VAR_21 = FUNC_3(VAR_15, VAR_0);
 VAR_21 &= ~VAR_1;
 VAR_21 |= 0x02 & VAR_1;
 FUNC_4(VAR_15, VAR_0, VAR_21);


 VAR_15->touch_st.sample_period_val =
     FUNC_5((VAR_7 *
     VAR_17 / 1000) - 1, 1);

 FUNC_4(VAR_15, VAR_3, VAR_5);

 return 0;
}
