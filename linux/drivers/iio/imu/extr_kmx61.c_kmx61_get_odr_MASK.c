
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kmx61_data {int odr_bits; } ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_1(struct kmx61_data *VAR_8, int *VAR_9, int *VAR_10,
    u8 VAR_11)
{
 u8 VAR_12;

 if (VAR_11 & VAR_1)
  VAR_12 = (VAR_8->odr_bits >> VAR_3) &
        VAR_2;
 else if (VAR_11 & VAR_4)
  VAR_12 = (VAR_8->odr_bits >> VAR_6) &
        VAR_5;
 else
  return -VAR_0;

 if (VAR_12 >= FUNC_0(VAR_7))
  return -VAR_0;

 *VAR_9 = VAR_7[VAR_12].val;
 *VAR_10 = VAR_7[VAR_12].val2;

 return 0;
}
