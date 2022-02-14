
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static s64 FUNC_2(void)
{
 int VAR_2;
 unsigned long VAR_3;

 do {
  VAR_2 = FUNC_0(&VAR_1);
  VAR_3 = FUNC_1(VAR_0);
 } while (VAR_2 != FUNC_0(&VAR_1));

 return ((s64)VAR_2 << 16) | (VAR_3 >> 16);
}
