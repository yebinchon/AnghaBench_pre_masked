
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct git_pack_entry {int crc; int oid; int sha1; scalar_t__ offset; scalar_t__ offset_long; } ;
struct entry {int crc; int oid; int sha1; scalar_t__ offset; scalar_t__ offset_long; } ;
struct TYPE_13__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ git_rawobj ;
struct TYPE_14__ {int* id; } ;
typedef TYPE_4__ git_oid ;
typedef scalar_t__ git_off_t ;
struct TYPE_11__ {int size; int ptr; } ;
struct TYPE_15__ {scalar_t__ entry_start; scalar_t__ off; int * fanout; int objects; TYPE_2__* pack; int entry_type; TYPE_1__ entry_data; scalar_t__ do_verify; int hash_ctx; } ;
typedef TYPE_5__ git_indexer ;
struct TYPE_12__ {int mwf; int idx_cache; } ;


 int FUNC_0 (struct git_pack_entry*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,scalar_t__) ;
 struct git_pack_entry* FUNC_3 (int,int) ;
 int FUNC_4 (struct git_pack_entry*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *,struct git_pack_entry*) ;
 scalar_t__ FUNC_12 (int *,struct git_pack_entry*) ;

__attribute__((used)) static int FUNC_13(git_indexer *VAR_3)
{
 int VAR_4, VAR_5;
 git_oid VAR_6;
 struct entry *VAR_7;
 git_off_t VAR_8;
 struct git_pack_entry *VAR_9;
 git_off_t VAR_10 = VAR_3->entry_start;

 VAR_7 = FUNC_3(1, sizeof(*VAR_7));
 FUNC_0(VAR_7);

 VAR_9 = FUNC_3(1, sizeof(struct git_pack_entry));
 FUNC_0(VAR_9);

 FUNC_7(&VAR_6, &VAR_3->hash_ctx);
 VAR_8 = VAR_3->off - VAR_10;
 if (VAR_10 > VAR_1) {
  VAR_7->offset = VAR_2;
  VAR_7->offset_long = VAR_10;
 } else {
  VAR_7->offset = (uint32_t)VAR_10;
 }

 if (VAR_3->do_verify) {
  git_rawobj VAR_11 = {
      VAR_3->entry_data.ptr,
      VAR_3->entry_data.size,
      VAR_3->entry_type
  };

  if ((VAR_5 = FUNC_1(VAR_3, &VAR_11)) < 0)
   goto on_error;
 }

 FUNC_8(&VAR_9->sha1, &VAR_6);
 VAR_9->offset = VAR_10;

 if (FUNC_10(VAR_3->pack->idx_cache, &VAR_9->sha1)) {
  FUNC_5(VAR_0, "duplicate object %s found in pack", FUNC_9(&VAR_9->sha1));
  FUNC_4(VAR_9);
  goto on_error;
 }

 if ((VAR_5 = FUNC_11(VAR_3->pack->idx_cache, &VAR_9->sha1, VAR_9)) < 0) {
  FUNC_4(VAR_9);
  FUNC_6();
  goto on_error;
 }

 FUNC_8(&VAR_7->oid, &VAR_6);

 if (FUNC_2(&VAR_7->crc, &VAR_3->pack->mwf, VAR_10, VAR_8) < 0)
  goto on_error;


 if (FUNC_12(&VAR_3->objects, VAR_7) < 0)
  goto on_error;

 for (VAR_4 = VAR_6.id[0]; VAR_4 < 256; ++VAR_4) {
  VAR_3->fanout[VAR_4]++;
 }

 return 0;

on_error:
 FUNC_4(VAR_7);

 return -1;
}
