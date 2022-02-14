
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {scalar_t__ start_sector; scalar_t__ memory_map; scalar_t__ memory_vmapped; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dm_writecache *VAR_1)
{
 if (VAR_1->memory_vmapped)
  FUNC_0(VAR_1->memory_map - ((size_t)VAR_1->start_sector << VAR_0));
}
