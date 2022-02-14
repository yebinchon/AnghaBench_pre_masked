
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ entries; } ;
struct st_brotli_context_t {int buf_capacity; TYPE_1__ bufs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct st_brotli_context_t *VAR_0)
{
    FUNC_2(((void*)0), &VAR_0->bufs, VAR_0->bufs.size + 1);
    FUNC_1(VAR_0->bufs.entries + VAR_0->bufs.size++, FUNC_0(VAR_0->buf_capacity), 0);
}
