
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


struct TYPE_23__ {size_t size; int type; } ;
typedef TYPE_2__ obj_hdr ;
struct TYPE_21__ {int len; int data; } ;
struct TYPE_22__ {int * free; int * read; TYPE_3__* hash_ctx; int * backend; } ;
struct TYPE_24__ {int zstream; TYPE_13__ map; TYPE_1__ stream; } ;
typedef TYPE_3__ loose_readstream ;
typedef int loose_backend ;
typedef int git_oid ;
typedef int git_odb_stream ;
typedef int git_odb_backend ;
typedef int git_object_t ;
typedef TYPE_3__ git_hash_ctx ;
struct TYPE_25__ {int ptr; } ;
typedef TYPE_5__ git_buf ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (TYPE_13__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,int const*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int *,int const*) ;
 int VAR_4 ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_16 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_17(
 git_odb_stream **VAR_6,
 size_t *VAR_7,
 git_object_t *VAR_8,
 git_odb_backend *VAR_9,
 const git_oid *VAR_10)
{
 loose_backend *VAR_11;
 loose_readstream *VAR_12 = ((void*)0);
 git_hash_ctx *VAR_13 = ((void*)0);
 git_buf VAR_14 = VAR_0;
 obj_hdr VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_6 && VAR_7 && VAR_8 && VAR_9 && VAR_10);

 VAR_11 = (loose_backend *)VAR_9;
 *VAR_6 = ((void*)0);
 *VAR_7 = 0;
 *VAR_8 = VAR_1;

 if (FUNC_14(&VAR_14, VAR_11, VAR_10) < 0) {
  VAR_16 = FUNC_10("no matching loose object",
   VAR_10, VAR_2);
  goto done;
 }

 VAR_12 = FUNC_2(1, sizeof(loose_readstream));
 FUNC_0(VAR_12);

 VAR_13 = FUNC_4(sizeof(git_hash_ctx));
 FUNC_0(VAR_13);

 if ((VAR_16 = FUNC_9(VAR_13)) < 0 ||
  (VAR_16 = FUNC_7(&VAR_12->map, VAR_14.ptr)) < 0 ||
  (VAR_16 = FUNC_12(&VAR_12->zstream, VAR_3)) < 0)
  goto done;


 if (!FUNC_13(VAR_12->map.data, VAR_12->map.len))
  VAR_16 = FUNC_15(&VAR_15, VAR_12);
 else
  VAR_16 = FUNC_16(&VAR_15, VAR_12);

 if (VAR_16 < 0)
  goto done;

 VAR_12->stream.backend = VAR_9;
 VAR_12->stream.hash_ctx = VAR_13;
 VAR_12->stream.read = &VAR_5;
 VAR_12->stream.free = &VAR_4;

 *VAR_6 = (git_odb_stream *)VAR_12;
 *VAR_7 = VAR_15.size;
 *VAR_8 = VAR_15.type;

done:
 if (VAR_16 < 0) {
  if (VAR_12) {
   FUNC_6(&VAR_12->map);
   FUNC_11(&VAR_12->zstream);
   FUNC_3(VAR_12);
  }
  if (VAR_13) {
   FUNC_8(VAR_13);
   FUNC_3(VAR_13);
  }
 }

 FUNC_5(&VAR_14);
 return VAR_16;
}
