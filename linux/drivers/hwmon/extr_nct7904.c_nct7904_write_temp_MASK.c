
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nct7904_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 long FUNC_0 (long,int,int) ;
 struct nct7904_data* FUNC_1 (struct device*) ;




 int FUNC_2 (struct nct7904_data*,int ,unsigned int,long) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_14, u32 VAR_15, int VAR_16,
         long VAR_17)
{
 struct nct7904_data *VAR_18 = FUNC_1(VAR_14);
 int VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;

 VAR_17 = FUNC_0(VAR_17 / 1000, -128, 127);

 switch (VAR_15) {
 case 129:
  VAR_20 = VAR_7;
  VAR_21 = VAR_13;
  VAR_22 = VAR_4;
  break;
 case 128:
  VAR_20 = VAR_9;
  VAR_21 = VAR_12;
  VAR_22 = VAR_3;
  break;
 case 131:
  VAR_20 = VAR_6;
  VAR_21 = VAR_11;
  VAR_22 = VAR_2;
  break;
 case 130:
  VAR_20 = VAR_8;
  VAR_21 = VAR_10;
  VAR_22 = VAR_1;
  break;
 default:
  return -VAR_5;
 }
 if (VAR_16 == 4)
  VAR_19 = FUNC_2(VAR_18, VAR_0, VAR_20, VAR_17);
 else if (VAR_16 < 5)
  VAR_19 = FUNC_2(VAR_18, VAR_0,
     VAR_21 + VAR_16 * 8, VAR_17);
 else
  VAR_19 = FUNC_2(VAR_18, VAR_0,
     VAR_22 + (VAR_16 - 5) * 4, VAR_17);

 return VAR_19;
}
