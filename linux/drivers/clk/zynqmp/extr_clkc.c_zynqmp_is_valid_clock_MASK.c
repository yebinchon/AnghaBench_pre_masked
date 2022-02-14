
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int valid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static inline int FUNC_0(u32 VAR_3)
{
 if (VAR_3 >= VAR_2)
  return -VAR_0;

 return VAR_1[VAR_3].valid;
}
