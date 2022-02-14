
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {int i; } ;



__attribute__((used)) static union drbd_state
FUNC_0(union drbd_state VAR_0, union drbd_state VAR_1, union drbd_state VAR_2)
{
 union drbd_state VAR_3;
 VAR_3.i = (VAR_0.i & ~VAR_1.i) | VAR_2.i;
 return VAR_3;
}
