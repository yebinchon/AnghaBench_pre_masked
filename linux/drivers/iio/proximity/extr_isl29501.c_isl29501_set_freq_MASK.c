
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (struct isl29501_private*,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long long VAR_6;


 VAR_5 = VAR_3 * 1000000 + VAR_4 % 1000000;
 VAR_6 = 2222ULL * 1000000ULL;
 FUNC_0(VAR_6, VAR_5);

 VAR_6 -= 1;

 if (VAR_6 > 255)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_1, VAR_6);
}
