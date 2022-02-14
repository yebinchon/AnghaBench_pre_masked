
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tsk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline int FUNC_4(int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (FUNC_1(VAR_4)) return 0;
 if (VAR_3[VAR_4].tsk != VAR_0) return 0;
 FUNC_2(&VAR_2, VAR_6);
 VAR_5 = VAR_1 & (1 << VAR_4);
 VAR_1 &= ~VAR_5;
 if (VAR_5) {
  FUNC_0(VAR_4);
  VAR_7 = 1;
 }

 FUNC_3(&VAR_2, VAR_6);
 return VAR_7;
}
