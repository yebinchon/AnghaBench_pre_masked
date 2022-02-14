
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimod_ops {int flags; int in_ext; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct wiimod_ops *VAR_2, size_t VAR_3)
{
 if (!VAR_2->in_ext)
  return 0;
 if ((VAR_2->flags & VAR_1) && VAR_3 < 8)
  return 0;
 if ((VAR_2->flags & VAR_0) && VAR_3 < 16)
  return 0;

 return 1;
}
