
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct adis16136 *VAR_1, unsigned int *VAR_2)
{
 uint16_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1->adis, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = 32768 / (VAR_3 + 1);

 return 0;
}
