
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target_io {int clone; scalar_t__ inside_dm_io; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dm_target_io *VAR_0)
{
 if (VAR_0->inside_dm_io)
  return;
 FUNC_0(&VAR_0->clone);
}
