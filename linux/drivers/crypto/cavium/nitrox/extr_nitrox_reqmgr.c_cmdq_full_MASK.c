
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_cmdq {int pending_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline bool FUNC_3(struct nitrox_cmdq *VAR_0, int VAR_1)
{
 if (FUNC_1(&VAR_0->pending_count) > VAR_1) {
  FUNC_0(&VAR_0->pending_count);

  FUNC_2();
  return 1;
 }

 FUNC_2();
 return 0;
}
