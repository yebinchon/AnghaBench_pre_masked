
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt305x_esw {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct rt305x_esw*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct rt305x_esw *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;

 VAR_5 = VAR_1 * (VAR_3 % 2);
 FUNC_1(VAR_2,
         FUNC_0(VAR_3 / 2),
         VAR_0 << VAR_5,
         (VAR_4 & VAR_0) << VAR_5);
}
