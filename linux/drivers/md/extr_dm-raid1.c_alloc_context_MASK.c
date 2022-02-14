
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mirror_set {unsigned int nr_mirrors; int io_client; int rh; int nr_regions; struct dm_target* ti; int default_mirror; int suspend; scalar_t__ leg_failure; scalar_t__ log_failure; scalar_t__ in_sync; int holds; int failures; int writes; int reads; int lock; } ;
struct dm_target {char* error; int begin; int len; } ;
struct dm_dirty_log {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mirror_set*,int ,int ,int ,int ,int ,struct dm_dirty_log*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mirror_set*) ;
 struct mirror_set* FUNC_8 (int ,int ) ;
 int VAR_4 ;
 struct mirror_set* VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct mirror_set *FUNC_11(unsigned int VAR_8,
     uint32_t VAR_9,
     struct dm_target *VAR_10,
     struct dm_dirty_log *VAR_11)
{
 struct mirror_set *VAR_12 =
  FUNC_8(FUNC_10(VAR_12, VAR_4, VAR_8), VAR_1);

 if (!VAR_12) {
  VAR_10->error = "Cannot allocate mirror context";
  return ((void*)0);
 }

 FUNC_9(&VAR_12->lock);
 FUNC_2(&VAR_12->reads);
 FUNC_2(&VAR_12->writes);
 FUNC_2(&VAR_12->failures);
 FUNC_2(&VAR_12->holds);

 VAR_12->ti = VAR_10;
 VAR_12->nr_mirrors = VAR_8;
 VAR_12->nr_regions = FUNC_6(VAR_10->len, VAR_9);
 VAR_12->in_sync = 0;
 VAR_12->log_failure = 0;
 VAR_12->leg_failure = 0;
 FUNC_1(&VAR_12->suspend, 0);
 FUNC_1(&VAR_12->default_mirror, VAR_0);

 VAR_12->io_client = FUNC_3();
 if (FUNC_0(VAR_12->io_client)) {
  VAR_10->error = "Error creating dm_io client";
  FUNC_7(VAR_12);
   return ((void*)0);
 }

 VAR_12->rh = FUNC_5(VAR_12, VAR_3, VAR_7,
           VAR_6,
           VAR_12->ti->begin, VAR_2,
           VAR_11, VAR_9, VAR_12->nr_regions);
 if (FUNC_0(VAR_12->rh)) {
  VAR_10->error = "Error creating dirty region hash";
  FUNC_4(VAR_12->io_client);
  FUNC_7(VAR_12);
  return ((void*)0);
 }

 return VAR_12;
}
