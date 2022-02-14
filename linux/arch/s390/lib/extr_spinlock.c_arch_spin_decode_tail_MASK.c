
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spin_wait {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct spin_wait* FUNC_0 (int *,int) ;
 int * VAR_4 ;

__attribute__((used)) static inline struct spin_wait *FUNC_1(int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = (VAR_5 & VAR_2) >> VAR_3;
 VAR_7 = (VAR_5 & VAR_0) >> VAR_1;
 return FUNC_0(&VAR_4[VAR_6], VAR_7 - 1);
}
