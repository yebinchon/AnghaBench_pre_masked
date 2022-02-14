
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620_mt_msg {scalar_t__* reg; } ;
struct sii8620 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sii8620*) ;
 int FUNC_1 (struct sii8620*) ;
 int FUNC_2 (struct sii8620*,int ,int,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sii8620 *VAR_11,
     struct sii8620_mt_msg *VAR_12)
{
 u8 VAR_13 = VAR_0
  | VAR_1
  | VAR_2;

 if (VAR_12->reg[0] == VAR_7)
  VAR_13 |= VAR_3;

 FUNC_2(VAR_11,
  VAR_10, VAR_4 | VAR_5
   | VAR_6,
  VAR_8, VAR_13,
  VAR_9, 0
 );

 if (VAR_12->reg[0] == VAR_7)
  FUNC_1(VAR_11);
 else
  FUNC_0(VAR_11);
}
