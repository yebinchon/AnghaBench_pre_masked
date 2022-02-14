
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tempfile {int dummy; } ;
struct TYPE_4__ {int* hash; } ;
struct split_index {TYPE_1__ base_oid; } ;
struct lock_file {int dummy; } ;
struct index_state {int cache_changed; scalar_t__ fsmonitor_last_update; struct split_index* split_index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct index_state*) ;
 int FUNC_1 (struct tempfile**) ;
 int FUNC_2 (struct index_state*,struct lock_file*,unsigned int) ;
 int VAR_5 ;
 int FUNC_3 (struct index_state*) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct tempfile*) ;
 struct tempfile* FUNC_9 (char*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct lock_file*) ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (struct index_state*) ;
 int FUNC_14 (struct index_state*,struct tempfile**) ;
 int FUNC_15 (struct index_state*,struct lock_file*,unsigned int) ;

int FUNC_16(struct index_state *VAR_7, struct lock_file *VAR_8,
         unsigned VAR_9)
{
 int VAR_10, VAR_11;
 struct split_index *VAR_12 = VAR_7->split_index;

 if (FUNC_5("GIT_TEST_CHECK_CACHE_TREE", 0))
  FUNC_0(VAR_6, VAR_7);

 if ((VAR_9 & VAR_2) && !VAR_7->cache_changed) {
  if (VAR_9 & VAR_0)
   FUNC_12(VAR_8);
  return 0;
 }

 if (VAR_7->fsmonitor_last_update)
  FUNC_3(VAR_7);

 if (!VAR_12 || VAR_4 ||
     (VAR_7->cache_changed & ~VAR_1)) {
  if (VAR_12)
   FUNC_11(&VAR_12->base_oid);
  VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9);
  goto out;
 }

 if (FUNC_5("GIT_TEST_SPLIT_INDEX", 0)) {
  int VAR_13 = VAR_12->base_oid.hash[0];
  if ((VAR_13 & 15) < 6)
   VAR_7->cache_changed |= VAR_3;
 }
 if (FUNC_13(VAR_7))
  VAR_7->cache_changed |= VAR_3;

 VAR_10 = VAR_7->cache_changed & VAR_3;

 if (VAR_10) {
  struct tempfile *VAR_14;
  int VAR_15;


  VAR_14 = FUNC_9(FUNC_6("sharedindex_XXXXXX"), 0, 0666);
  if (!VAR_14) {
   FUNC_11(&VAR_12->base_oid);
   VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9);
   goto out;
  }
  VAR_11 = FUNC_14(VAR_7, &VAR_14);

  VAR_15 = VAR_5;
  if (FUNC_8(VAR_14))
   FUNC_1(&VAR_14);
  VAR_5 = VAR_15;

  if (VAR_11)
   goto out;
 }

 VAR_11 = FUNC_15(VAR_7, VAR_8, VAR_9);


 if (!VAR_11 && !VAR_10 && !FUNC_7(&VAR_12->base_oid)) {
  const char *VAR_16 = FUNC_6("sharedindex.%s",
          FUNC_10(&VAR_12->base_oid));
  FUNC_4(VAR_16, 1);
 }

out:
 if (VAR_9 & VAR_0)
  FUNC_12(VAR_8);
 return VAR_11;
}
