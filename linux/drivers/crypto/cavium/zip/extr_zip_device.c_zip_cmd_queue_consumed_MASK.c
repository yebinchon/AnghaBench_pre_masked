
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct zip_device {TYPE_1__* iq; } ;
struct TYPE_2__ {int sw_head; int sw_tail; } ;



__attribute__((used)) static inline u32 FUNC_0(struct zip_device *VAR_0, int VAR_1)
{
 return ((VAR_0->iq[VAR_1].sw_head - VAR_0->iq[VAR_1].sw_tail) *
  sizeof(u64 *));
}
