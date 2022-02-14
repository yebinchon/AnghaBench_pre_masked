
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct adis16400_state {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct adis16400_state *VAR_2)
{
 int VAR_3;
 uint16_t VAR_4;

 VAR_3 = FUNC_0(&VAR_2->adis, VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 >>= VAR_0;

 return 819200 >> VAR_4;
}
