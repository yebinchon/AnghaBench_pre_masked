
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adis16400_state {int adis; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct adis16400_state *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 < 819200)
  VAR_5 = FUNC_1(819200 / VAR_4);
 else
  VAR_5 = 0;

 if (VAR_5 > 0x31)
  VAR_5 = 0x31;

 VAR_5 <<= VAR_0;
 VAR_5 |= VAR_1;

 return FUNC_0(&VAR_3->adis, VAR_2, VAR_5);
}
