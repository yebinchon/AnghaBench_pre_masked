
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct adis16400_state {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct adis16400_state *VAR_3)
{
 int VAR_4, VAR_5;
 uint16_t VAR_6;

 VAR_5 = FUNC_0(&VAR_3->adis, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = (VAR_6 & VAR_2) ? 52851 : 1638404;
 VAR_4 /= (VAR_6 & VAR_1) + 1;

 return VAR_4;
}
