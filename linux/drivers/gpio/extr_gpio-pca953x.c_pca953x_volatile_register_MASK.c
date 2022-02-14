
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 struct pca953x_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (struct pca953x_chip*,unsigned int,int ) ;

__attribute__((used)) static bool FUNC_3(struct device *VAR_5, unsigned int VAR_6)
{
 struct pca953x_chip *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8;

 if (FUNC_0(VAR_7->driver_data) == VAR_0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 if (VAR_7->driver_data & VAR_4)
  VAR_8 |= VAR_3;

 return FUNC_2(VAR_7, VAR_6, VAR_8);
}
