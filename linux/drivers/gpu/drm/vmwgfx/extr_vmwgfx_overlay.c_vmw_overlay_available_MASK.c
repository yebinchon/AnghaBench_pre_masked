
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capabilities; } ;
struct vmw_private {TYPE_1__ fifo; int * overlay_priv; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct vmw_private *VAR_1)
{
 return (VAR_1->overlay_priv != ((void*)0) &&
  ((VAR_1->fifo.capabilities & VAR_0) ==
   VAR_0));
}
