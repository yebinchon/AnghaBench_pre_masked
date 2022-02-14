
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_1,
         int VAR_2,
         int VAR_3)
{
 int VAR_4;
 VAR_4 = ((int)FUNC_0(VAR_1) *
   (VAR_0.min - VAR_2)) / 100;


 if (VAR_2 + VAR_4 >= VAR_3)
  return VAR_3;
 else
  return VAR_2 + VAR_4;
}
