
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct da9052*,int ,int ,unsigned char) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct da9052 *VAR_6)
{
 int VAR_7;
 unsigned char VAR_8 = VAR_4
           | VAR_5;

 VAR_7 = FUNC_0(VAR_6, VAR_0,
      VAR_1,
      VAR_8);

 if (VAR_7 < 0) {
  FUNC_1(VAR_6->dev, "Failed to write GPIO 14-15 reg, %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_6, VAR_0,
      VAR_2,
      VAR_8 << VAR_3);
 if (VAR_7 < 0)
  FUNC_1(VAR_6->dev, "Failed to write GPIO 14-15 reg, %d\n",
   VAR_7);

 return VAR_7;
}
