
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int rq_flags; TYPE_1__* q; } ;
struct TYPE_2__ {scalar_t__ elevator; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct request *VAR_2)
{
 return (VAR_2->rq_flags & (VAR_0 | VAR_1)) || VAR_2->q->elevator;
}
