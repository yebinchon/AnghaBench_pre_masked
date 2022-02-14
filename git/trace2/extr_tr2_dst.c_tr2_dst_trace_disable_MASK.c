
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_dst {int initialized; scalar_t__ need_close; scalar_t__ fd; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct tr2_dst *VAR_0)
{
 if (VAR_0->need_close)
  FUNC_0(VAR_0->fd);
 VAR_0->fd = 0;
 VAR_0->initialized = 1;
 VAR_0->need_close = 0;
}
