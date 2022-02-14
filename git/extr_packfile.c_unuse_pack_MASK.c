
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_window {int inuse_cnt; } ;



void FUNC_0(struct pack_window **VAR_0)
{
 struct pack_window *VAR_1 = *VAR_0;
 if (VAR_1) {
  VAR_1->inuse_cnt--;
  *VAR_0 = ((void*)0);
 }
}
