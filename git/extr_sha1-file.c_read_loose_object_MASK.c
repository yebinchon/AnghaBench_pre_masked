
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int hdr ;
typedef int git_zstream ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (struct object_id const*,void*,unsigned long,int ) ;
 scalar_t__ FUNC_2 (int *,char*,unsigned long,char const*,struct object_id const*) ;
 int FUNC_3 (int ,char const*,...) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,char const*,int *,unsigned long*) ;
 int FUNC_8 (void*,unsigned long) ;
 char* FUNC_9 (struct object_id const*) ;
 int FUNC_10 (char*,unsigned long*) ;
 int VAR_3 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,void*,unsigned long,char*,int) ;
 void* FUNC_13 (int *,char*,unsigned long,struct object_id const*) ;

int FUNC_14(const char *VAR_4,
        const struct object_id *VAR_5,
        enum object_type *VAR_6,
        unsigned long *VAR_7,
        void **VAR_8)
{
 int VAR_9 = -1;
 void *VAR_10 = ((void*)0);
 unsigned long VAR_11;
 git_zstream VAR_12;
 char VAR_13[VAR_0];

 *VAR_8 = ((void*)0);

 VAR_10 = FUNC_7(VAR_3, VAR_4, ((void*)0), &VAR_11);
 if (!VAR_10) {
  FUNC_4(FUNC_0("unable to mmap %s"), VAR_4);
  goto out;
 }

 if (FUNC_12(&VAR_12, VAR_10, VAR_11, VAR_13, sizeof(VAR_13)) < 0) {
  FUNC_3(FUNC_0("unable to unpack header of %s"), VAR_4);
  goto out;
 }

 *VAR_6 = FUNC_10(VAR_13, VAR_7);
 if (*VAR_6 < 0) {
  FUNC_3(FUNC_0("unable to parse header of %s"), VAR_4);
  FUNC_6(&VAR_12);
  goto out;
 }

 if (*VAR_6 == VAR_1 && *VAR_7 > VAR_2) {
  if (FUNC_2(&VAR_12, VAR_13, *VAR_7, VAR_4, VAR_5) < 0)
   goto out;
 } else {
  *VAR_8 = FUNC_13(&VAR_12, VAR_13, *VAR_7, VAR_5);
  if (!*VAR_8) {
   FUNC_3(FUNC_0("unable to unpack contents of %s"), VAR_4);
   FUNC_6(&VAR_12);
   goto out;
  }
  if (FUNC_1(VAR_5, *VAR_8,
      *VAR_7, FUNC_11(*VAR_6))) {
   FUNC_3(FUNC_0("hash mismatch for %s (expected %s)"), VAR_4,
         FUNC_9(VAR_5));
   FUNC_5(*VAR_8);
   goto out;
  }
 }

 VAR_9 = 0;

out:
 if (VAR_10)
  FUNC_8(VAR_10, VAR_11);
 return VAR_9;
}
