
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {scalar_t__ writeback_size; } ;


 int FUNC_0 (struct dm_writecache*) ;

__attribute__((used)) static bool FUNC_1(struct dm_writecache *VAR_0)
{
 if (VAR_0->writeback_size) {
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
