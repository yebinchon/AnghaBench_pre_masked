
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_dirty_log_type {scalar_t__ (* ctr ) (struct dm_dirty_log*,struct dm_target*,unsigned int,char**) ;} ;
struct dm_dirty_log {int (* flush_callback_fn ) (struct dm_target*) ;struct dm_dirty_log_type* type; } ;


 int VAR_0 ;
 struct dm_dirty_log_type* FUNC_0 (char const*) ;
 int FUNC_1 (struct dm_dirty_log*) ;
 struct dm_dirty_log* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dm_dirty_log_type*) ;
 scalar_t__ FUNC_4 (struct dm_dirty_log*,struct dm_target*,unsigned int,char**) ;

struct dm_dirty_log *FUNC_5(const char *VAR_1,
   struct dm_target *VAR_2,
   int (*VAR_3)(struct dm_target *VAR_4),
   unsigned int VAR_5, char **VAR_6)
{
 struct dm_dirty_log_type *VAR_7;
 struct dm_dirty_log *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 VAR_8->flush_callback_fn = VAR_3;
 VAR_8->type = VAR_7;
 if (VAR_7->ctr(VAR_8, VAR_2, VAR_5, VAR_6)) {
  FUNC_1(VAR_8);
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 return VAR_8;
}
