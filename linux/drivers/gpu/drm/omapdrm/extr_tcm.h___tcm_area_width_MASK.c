
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ x; } ;
struct tcm_area {TYPE_2__ p0; TYPE_1__ p1; } ;



__attribute__((used)) static inline u16 FUNC_0(struct tcm_area *VAR_0)
{
 return VAR_0->p1.x - VAR_0->p0.x + 1;
}
