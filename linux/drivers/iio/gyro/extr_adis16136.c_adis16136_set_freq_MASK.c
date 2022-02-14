
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adis16136 {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct adis16136 *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = 32768 / VAR_2;
 if (VAR_3 < 0xf)
  VAR_3 = 0xf;
 else if (VAR_3 > 0xffff)
  VAR_3 = 0xffff;
 else
  VAR_3--;

 return FUNC_0(&VAR_1->adis, VAR_0, VAR_3);
}
