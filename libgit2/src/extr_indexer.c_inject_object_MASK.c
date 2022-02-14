
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uInt ;
struct git_pack_entry {long crc; int oid; int sha1; } ;
struct entry {long crc; int oid; int sha1; } ;
typedef unsigned char git_oid ;
typedef size_t git_off_t ;
typedef int git_odb_object ;
struct TYPE_16__ {size_t off; TYPE_3__* pack; int odb; } ;
typedef TYPE_4__ git_indexer ;
struct TYPE_17__ {unsigned char* ptr; size_t size; } ;
typedef TYPE_5__ git_buf ;
struct TYPE_14__ {size_t size; } ;
struct TYPE_15__ {TYPE_2__ mwf; } ;
struct TYPE_13__ {int member_0; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (struct git_pack_entry*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_1 (TYPE_4__*,unsigned char*,size_t) ;
 void* FUNC_2 (long,unsigned char*,int ) ;
 struct git_pack_entry* FUNC_3 (int,int) ;
 int FUNC_4 (struct git_pack_entry*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int **,int ,unsigned char*) ;
 int FUNC_12 (int *,unsigned char*) ;
 size_t FUNC_13 (unsigned char*,size_t,int ) ;
 int FUNC_14 (TYPE_5__*,void const*,size_t) ;
 long FUNC_15 (void*) ;
 int FUNC_16 (TYPE_4__*,struct git_pack_entry*,struct git_pack_entry*,size_t) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_18(git_indexer *VAR_4, git_oid *VAR_5)
{
 git_odb_object *VAR_6;
 struct entry *VAR_7;
 struct git_pack_entry *VAR_8 = ((void*)0);
 git_oid VAR_9 = {{0}};
 unsigned char VAR_10[64];
 git_buf VAR_11 = VAR_0;
 git_off_t VAR_12;
 const void *VAR_13;
 size_t VAR_14, VAR_15;
 int VAR_16;

 FUNC_17(VAR_4);
 VAR_12 = VAR_4->pack->mwf.size;

 if (FUNC_11(&VAR_6, VAR_4->odb, VAR_5) < 0) {
  FUNC_6(VAR_1, "missing delta bases");
  return -1;
 }

 VAR_13 = FUNC_7(VAR_6);
 VAR_14 = FUNC_9(VAR_6);

 VAR_7 = FUNC_3(1, sizeof(*VAR_7));
 FUNC_0(VAR_7);

 VAR_7->crc = FUNC_2(0L, VAR_3, 0);


 VAR_15 = FUNC_13(VAR_10, VAR_14, FUNC_10(VAR_6));
 if ((VAR_16 = FUNC_1(VAR_4, VAR_10, VAR_15)) < 0)
  goto cleanup;

 VAR_4->pack->mwf.size += VAR_15;
 VAR_7->crc = FUNC_2(VAR_7->crc, VAR_10, (uInt)VAR_15);

 if ((VAR_16 = FUNC_14(&VAR_11, VAR_13, VAR_14)) < 0)
  goto cleanup;


 if ((VAR_16 = FUNC_1(VAR_4, VAR_11.ptr, VAR_11.size)) < 0)
  goto cleanup;

 VAR_4->pack->mwf.size += VAR_11.size;
 VAR_7->crc = FUNC_15(FUNC_2(VAR_7->crc, (unsigned char *)VAR_11.ptr, (uInt)VAR_11.size));
 FUNC_5(&VAR_11);



 if ((VAR_16 = FUNC_1(VAR_4, &VAR_9, VAR_2)) < 0)
  goto cleanup;

 VAR_4->pack->mwf.size += VAR_2;

 VAR_8 = FUNC_3(1, sizeof(struct git_pack_entry));
 FUNC_0(VAR_8);

 FUNC_12(&VAR_8->sha1, VAR_5);
 FUNC_12(&VAR_7->oid, VAR_5);
 VAR_4->off = VAR_12 + VAR_15 + VAR_14;

 VAR_16 = FUNC_16(VAR_4, VAR_7, VAR_8, VAR_12);

cleanup:
 if (VAR_16) {
  FUNC_4(VAR_7);
  FUNC_4(VAR_8);
 }

 FUNC_8(VAR_6);
 return VAR_16;
}
