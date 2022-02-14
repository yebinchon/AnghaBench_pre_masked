
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {TYPE_1__* vtbl; } ;
struct TYPE_2__ {int (* free ) (struct stream_filter*) ;} ;


 int FUNC_0 (struct stream_filter*) ;

void FUNC_1(struct stream_filter *VAR_0)
{
 VAR_0->vtbl->free(VAR_0);
}
