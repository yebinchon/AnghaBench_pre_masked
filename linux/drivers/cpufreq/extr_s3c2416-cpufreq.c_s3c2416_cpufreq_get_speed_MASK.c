
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2416_data {int armclk; scalar_t__ is_dvs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 struct s3c2416_data VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2)
{
 struct s3c2416_data *VAR_3 = &VAR_1;

 if (VAR_2 != 0)
  return 0;


 if (VAR_3->is_dvs)
  return VAR_0;

 return FUNC_0(VAR_3->armclk) / 1000;
}
