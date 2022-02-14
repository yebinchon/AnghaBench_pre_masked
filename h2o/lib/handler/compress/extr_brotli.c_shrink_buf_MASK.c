
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; TYPE_1__* entries; } ;
struct st_brotli_context_t {TYPE_2__ bufs; } ;
struct TYPE_3__ {int raw; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct st_brotli_context_t *VAR_0, size_t VAR_1)
{
    while (VAR_1 < VAR_0->bufs.size)
        FUNC_0(VAR_0->bufs.entries[--VAR_0->bufs.size].raw);
}
