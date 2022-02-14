
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pca953x_chip {int driver_data; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_15 ;
 struct pca953x_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (struct pca953x_chip*,unsigned int,int) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_16, unsigned int VAR_17)
{
 struct pca953x_chip *VAR_18 = FUNC_1(VAR_16);
 u32 VAR_19;

 if (FUNC_0(VAR_18->driver_data) == VAR_0) {
  VAR_19 = VAR_2 | VAR_3 |
         VAR_4 | VAR_1;
 } else {
  VAR_19 = VAR_7 | VAR_8 |
         VAR_9 | VAR_6 |
         VAR_5;
 }

 if (VAR_18->driver_data & VAR_15) {
  VAR_19 |= VAR_10 | VAR_13 |
   VAR_14 | VAR_11 |
   VAR_12;
 }

 return FUNC_2(VAR_18, VAR_17, VAR_19);
}
