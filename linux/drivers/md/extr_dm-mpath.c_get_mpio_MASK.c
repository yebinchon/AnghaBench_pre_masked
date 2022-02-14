
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union map_info {struct dm_mpath_io* ptr; } ;
struct dm_mpath_io {int dummy; } ;



__attribute__((used)) static struct dm_mpath_io *FUNC_0(union map_info *VAR_0)
{
 return VAR_0->ptr;
}
