
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_tsi {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct da9052_tsi *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->da9052);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_3->da9052, VAR_0,
      1 << 6, 1 << 6);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_3->da9052, VAR_2, 0xFC, 0xC0);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3->da9052, VAR_1, 0x59);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
