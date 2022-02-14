
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kmx61_data {int odr_bits; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct kmx61_data*,int*,int) ;
 int FUNC_3 (struct kmx61_data*,int,int,int) ;
 int FUNC_4 (struct kmx61_data*,int,int) ;

__attribute__((used)) static int FUNC_5(struct kmx61_data *VAR_6, int VAR_7, int VAR_8, u8 VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_2(VAR_6, &VAR_11, VAR_0 | VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_12 = FUNC_1(VAR_7, VAR_8);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_10 = FUNC_3(VAR_6, VAR_2, VAR_0 | VAR_3,
        1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_13 = 0;
 if (VAR_9 & VAR_0)
  VAR_13 |= VAR_12 << VAR_1;
 if (VAR_9 & VAR_3)
  VAR_13 |= VAR_12 << VAR_4;

 VAR_10 = FUNC_0(VAR_6->client, VAR_5,
     VAR_13);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6->odr_bits = VAR_13;

 if (VAR_9 & VAR_0) {
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8);
  if (VAR_10)
   return VAR_10;
 }

 return FUNC_3(VAR_6, VAR_11, VAR_0 | VAR_3, 1);
}
