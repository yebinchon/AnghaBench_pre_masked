
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pca953x_chip {int driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct pca953x_chip*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct pca953x_chip*) ;

__attribute__((used)) static u8 FUNC_3(struct pca953x_chip *VAR_5, int VAR_6, int VAR_7,
         bool VAR_8, bool VAR_9)
{
 int VAR_10 = FUNC_2(VAR_5);
 int VAR_11 = (VAR_6 & VAR_2) << VAR_10;
 int VAR_12 = (VAR_6 & VAR_3) << 1;
 u8 VAR_13 = VAR_12 | VAR_11 | (VAR_7 / VAR_0);


 if (!VAR_9)
  return VAR_13;


 if (VAR_8 && FUNC_0(VAR_5) > 2)
  VAR_13 |= VAR_4;


 if (FUNC_1(VAR_5->driver_data) == VAR_1)
  VAR_13 |= VAR_4;

 return VAR_13;
}
