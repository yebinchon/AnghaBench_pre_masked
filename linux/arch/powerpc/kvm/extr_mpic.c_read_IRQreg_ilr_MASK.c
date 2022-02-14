
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct openpic {int flags; TYPE_1__* src; } ;
struct TYPE_2__ {int output; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(struct openpic *VAR_1, int VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1->src[VAR_2].output;

 return 0xffffffff;
}
