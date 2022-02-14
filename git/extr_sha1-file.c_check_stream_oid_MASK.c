
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct object_id {int hash; } ;
struct TYPE_6__ {int total_out; int avail_out; unsigned char* next_out; scalar_t__ avail_in; } ;
typedef TYPE_1__ git_zstream ;
typedef int git_hash_ctx ;
typedef int buf ;
struct TYPE_7__ {int (* final_fn ) (int ,int *) ;int (* update_fn ) (int *,unsigned char*,int) ;int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (struct object_id const*) ;
 int FUNC_5 (struct object_id const*,struct object_id*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int) ;
 int FUNC_9 (int *,unsigned char*,int) ;
 int FUNC_10 (int ,int *) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_11(git_zstream *VAR_5,
       const char *VAR_6,
       unsigned long VAR_7,
       const char *VAR_8,
       const struct object_id *VAR_9)
{
 git_hash_ctx VAR_10;
 struct object_id VAR_11;
 unsigned char VAR_12[4096];
 unsigned long VAR_13;
 int VAR_14 = VAR_2;

 VAR_4->init_fn(&VAR_10);
 VAR_4->update_fn(&VAR_10, VAR_6, VAR_5->total_out);





 VAR_13 = VAR_5->total_out - FUNC_6(VAR_6) - 1;





 while (VAR_13 <= VAR_7 &&
        (VAR_14 == VAR_2 ||
  (VAR_14 == VAR_0 && !VAR_5->avail_out))) {
  VAR_5->next_out = VAR_12;
  VAR_5->avail_out = sizeof(VAR_12);
  if (VAR_7 - VAR_13 < VAR_5->avail_out)
   VAR_5->avail_out = VAR_7 - VAR_13;
  VAR_14 = FUNC_2(VAR_5, VAR_1);
  VAR_4->update_fn(&VAR_10, VAR_12, VAR_5->next_out - VAR_12);
  VAR_13 += VAR_5->next_out - VAR_12;
 }
 FUNC_3(VAR_5);

 if (VAR_14 != VAR_3) {
  FUNC_1(FUNC_0("corrupt loose object '%s'"), FUNC_4(VAR_9));
  return -1;
 }
 if (VAR_5->avail_in) {
  FUNC_1(FUNC_0("garbage at end of loose object '%s'"),
        FUNC_4(VAR_9));
  return -1;
 }

 VAR_4->final_fn(VAR_11.hash, &VAR_10);
 if (!FUNC_5(VAR_9, &VAR_11)) {
  FUNC_1(FUNC_0("hash mismatch for %s (expected %s)"), VAR_8,
        FUNC_4(VAR_9));
  return -1;
 }

 return 0;
}
