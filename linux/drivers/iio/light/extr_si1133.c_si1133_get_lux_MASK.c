
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct si1133_data {int dummy; } ;
struct TYPE_2__ {int * coeff_low; int * coeff_high; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (struct si1133_data*,int ,int,int*) ;
 int FUNC_3 (int,int,int ,int ,int *) ;
 int FUNC_4 (struct si1133_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct si1133_data *VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u8 VAR_14[VAR_4];


 VAR_9 = FUNC_4(VAR_7, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, FUNC_1(0),
          VAR_4, VAR_14);
 if (VAR_9)
  return VAR_9;

 VAR_11 = (VAR_14[0] << 16) | (VAR_14[1] << 8) | VAR_14[2];
 VAR_12 = (VAR_14[3] << 16) | (VAR_14[4] << 8) | VAR_14[5];
 VAR_13 = (VAR_14[6] << 16) | (VAR_14[7] << 8) | VAR_14[8];

 if (VAR_11 > VAR_0 || VAR_13 > VAR_0)
  VAR_10 = FUNC_3(VAR_11, VAR_13,
          VAR_1,
          FUNC_0(VAR_6.coeff_high),
          &VAR_6.coeff_high[0]);
 else
  VAR_10 = FUNC_3(VAR_12, VAR_13,
          VAR_2,
          FUNC_0(VAR_6.coeff_low),
          &VAR_6.coeff_low[0]);

 *VAR_8 = VAR_10 >> VAR_5;

 return VAR_9;
}
