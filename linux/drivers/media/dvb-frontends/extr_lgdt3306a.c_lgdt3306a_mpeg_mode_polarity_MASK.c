
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_tp_valid_polarity { ____Placeholder_lgdt3306a_tp_valid_polarity } lgdt3306a_tp_valid_polarity ;
typedef enum lgdt3306a_tp_clock_edge { ____Placeholder_lgdt3306a_tp_clock_edge } lgdt3306a_tp_clock_edge ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (struct lgdt3306a_state*,int,int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3306a_state *VAR_2,
           enum lgdt3306a_tp_clock_edge VAR_3,
           enum lgdt3306a_tp_valid_polarity VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 FUNC_0("edge=%d, valid=%d\n", VAR_3, VAR_4);

 VAR_6 = FUNC_2(VAR_2, 0x0070, &VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;

 VAR_5 &= ~0x06;

 if (VAR_3 == VAR_0)
  VAR_5 |= 0x04;
 if (VAR_4 == VAR_1)
  VAR_5 |= 0x02;

 VAR_6 = FUNC_3(VAR_2, 0x0070, VAR_5);
 FUNC_1(VAR_6);

fail:
 return VAR_6;
}
