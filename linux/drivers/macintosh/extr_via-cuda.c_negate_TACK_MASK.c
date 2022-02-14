
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int * VAR_4 ;

__attribute__((used)) static inline void FUNC_3(void)
{
 if (VAR_3) {
  FUNC_2(VAR_1);
  FUNC_1(&VAR_4[VAR_0], FUNC_0(&VAR_4[VAR_0]) & ~VAR_2);
 } else
  FUNC_1(&VAR_4[VAR_0], FUNC_0(&VAR_4[VAR_0]) | VAR_2);
}
