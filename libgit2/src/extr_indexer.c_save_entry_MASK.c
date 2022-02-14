
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct git_pack_entry {int sha1; scalar_t__ offset; } ;
struct TYPE_6__ {int* id; } ;
struct entry {TYPE_2__ oid; scalar_t__ offset; scalar_t__ offset_long; } ;
typedef scalar_t__ git_off_t ;
struct TYPE_7__ {int * fanout; int objects; TYPE_1__* pack; } ;
typedef TYPE_3__ git_indexer ;
struct TYPE_5__ {int idx_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,struct git_pack_entry*) ;
 scalar_t__ FUNC_3 (int *,struct entry*) ;

__attribute__((used)) static int FUNC_4(git_indexer *VAR_3, struct entry *VAR_4, struct git_pack_entry *VAR_5, git_off_t VAR_6)
{
 int VAR_7;

 if (VAR_6 > VAR_1) {
  VAR_4->offset = VAR_2;
  VAR_4->offset_long = VAR_6;
 } else {
  VAR_4->offset = (uint32_t)VAR_6;
 }

 VAR_5->offset = VAR_6;

 if (FUNC_1(VAR_3->pack->idx_cache, &VAR_5->sha1) ||
     FUNC_2(VAR_3->pack->idx_cache, &VAR_5->sha1, VAR_5) < 0) {
  FUNC_0(VAR_0, "cannot insert object into pack");
  return -1;
 }


 if (FUNC_3(&VAR_3->objects, VAR_4) < 0)
  return -1;

 for (VAR_7 = VAR_4->oid.id[0]; VAR_7 < 256; ++VAR_7) {
  VAR_3->fanout[VAR_7]++;
 }

 return 0;
}
