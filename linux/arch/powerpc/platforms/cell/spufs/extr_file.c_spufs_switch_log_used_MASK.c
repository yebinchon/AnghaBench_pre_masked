
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {TYPE_1__* switch_log; } ;
struct TYPE_2__ {int head; int tail; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct spu_context *VAR_1)
{
 return (VAR_1->switch_log->head - VAR_1->switch_log->tail) %
  VAR_0;
}
