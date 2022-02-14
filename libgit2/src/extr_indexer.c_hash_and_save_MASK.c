
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct git_pack_entry {int crc; int oid; int sha1; } ;
struct entry {int crc; int oid; int sha1; } ;
struct TYPE_9__ {struct git_pack_entry* data; } ;
typedef TYPE_2__ git_rawobj ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
struct TYPE_10__ {TYPE_1__* pack; scalar_t__ off; } ;
typedef TYPE_3__ git_indexer ;
struct TYPE_8__ {int mwf; } ;


 int FUNC_0 (struct git_pack_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (long,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__,size_t) ;
 struct git_pack_entry* FUNC_3 (int,int) ;
 int FUNC_4 (struct git_pack_entry*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_3__*,struct git_pack_entry*,struct git_pack_entry*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(git_indexer *VAR_2, git_rawobj *VAR_3, git_off_t VAR_4)
{
 git_oid VAR_5;
 size_t VAR_6;
 struct entry *VAR_7;
 struct git_pack_entry *VAR_8 = ((void*)0);

 VAR_7 = FUNC_3(1, sizeof(*VAR_7));
 FUNC_0(VAR_7);

 if (FUNC_6(&VAR_5, VAR_3) < 0) {
  FUNC_5(VAR_0, "failed to hash object");
  goto on_error;
 }

 VAR_8 = FUNC_3(1, sizeof(struct git_pack_entry));
 FUNC_0(VAR_8);

 FUNC_7(&VAR_8->sha1, &VAR_5);
 FUNC_7(&VAR_7->oid, &VAR_5);
 VAR_7->crc = FUNC_1(0L, VAR_1, 0);

 VAR_6 = (size_t)(VAR_2->off - VAR_4);
 if (FUNC_2(&VAR_7->crc, &VAR_2->pack->mwf, VAR_4, VAR_6) < 0)
  goto on_error;

 return FUNC_8(VAR_2, VAR_7, VAR_8, VAR_4);

on_error:
 FUNC_4(VAR_8);
 FUNC_4(VAR_7);
 FUNC_4(VAR_3->data);
 return -1;
}
