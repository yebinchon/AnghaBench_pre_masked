
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer_used; scalar_t__ buffer; } ;
typedef TYPE_1__ ghash_ctx ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ghash_ctx *VAR_0)
{
  if (VAR_0->buffer_used == 0)
    return;

  FUNC_1(VAR_0->buffer + VAR_0->buffer_used, 0, sizeof(VAR_0->buffer) - VAR_0->buffer_used);
  FUNC_0(VAR_0, VAR_0->buffer);
  VAR_0->buffer_used = 0;
}
