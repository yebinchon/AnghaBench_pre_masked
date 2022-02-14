
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pack_write_context {int * stats; int * indexer; } ;
struct TYPE_7__ {int pack_oid; int repo; int odb; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_indexer_progress_cb ;
typedef int git_indexer_progress ;
struct TYPE_8__ {void* progress_cb_payload; int progress_cb; } ;
typedef TYPE_2__ git_indexer_options ;
typedef int git_indexer ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,char const*,unsigned int,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,struct pack_write_context*) ;
 int FUNC_7 (int*,int ,int ) ;
 int VAR_3 ;

int FUNC_8(
 git_packbuilder *VAR_4,
 const char *VAR_5,
 unsigned int VAR_6,
 git_indexer_progress_cb VAR_7,
 void *VAR_8)
{
 git_indexer_options VAR_9 = VAR_1;
 git_indexer *VAR_10;
 git_indexer_progress VAR_11;
 struct pack_write_context VAR_12;
 int VAR_13;

 VAR_2;

 VAR_9.progress_cb = VAR_7;
 VAR_9.progress_cb_payload = VAR_8;

 if (FUNC_4(
  &VAR_10, VAR_5, VAR_6, VAR_4->odb, &VAR_9) < 0)
  return -1;

 if (!FUNC_7(&VAR_13, VAR_4->repo, VAR_0) && VAR_13)
  FUNC_0(VAR_10, 1);

 VAR_12.indexer = VAR_10;
 VAR_12.stats = &VAR_11;

 if (FUNC_6(VAR_4, VAR_3, &VAR_12) < 0 ||
  FUNC_1(VAR_10, &VAR_11) < 0) {
  FUNC_2(VAR_10);
  return -1;
 }

 FUNC_5(&VAR_4->pack_oid, FUNC_3(VAR_10));

 FUNC_2(VAR_10);
 return 0;
}
