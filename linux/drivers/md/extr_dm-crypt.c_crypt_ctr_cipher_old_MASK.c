
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; struct crypt_config* private; } ;
struct crypt_config {int tfms_count; int key_parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypt_config*,char*) ;
 scalar_t__ FUNC_1 (struct crypt_config*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*,char*,char*,...) ;
 int FUNC_6 (char*,char*,int*,char*) ;
 scalar_t__ FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_4, char *VAR_5, char *VAR_6,
    char **VAR_7, char **VAR_8)
{
 struct crypt_config *VAR_9 = VAR_4->private;
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 char *VAR_14 = ((void*)0);
 int VAR_15 = -VAR_1;
 char VAR_16;

 if (FUNC_7(VAR_5, '(') || FUNC_1(VAR_9)) {
  VAR_4->error = "Bad cipher specification";
  return -VAR_1;
 }





 VAR_10 = VAR_5;
 VAR_13 = FUNC_9(&VAR_10, "-");
 VAR_11 = FUNC_9(&VAR_13, ":");

 if (!VAR_13)
  VAR_9->tfms_count = 1;
 else if (FUNC_6(VAR_13, "%u%c", &VAR_9->tfms_count, &VAR_16) != 1 ||
   !FUNC_2(VAR_9->tfms_count)) {
  VAR_4->error = "Bad cipher key count specification";
  return -VAR_1;
 }
 VAR_9->key_parts = VAR_9->tfms_count;

 VAR_12 = FUNC_9(&VAR_10, "-");
 *VAR_7 = FUNC_9(&VAR_10, ":");
 *VAR_8 = VAR_10;





 if (!VAR_12 || (!FUNC_8(VAR_12, "plain") && !*VAR_7)) {
  VAR_12 = "cbc";
  *VAR_7 = "plain";
 }

 if (FUNC_8(VAR_12, "ecb") && !*VAR_7) {
  VAR_4->error = "IV mechanism required";
  return -VAR_1;
 }

 VAR_14 = FUNC_4(VAR_0, VAR_3);
 if (!VAR_14)
  goto bad_mem;

 if (*VAR_7 && !FUNC_8(*VAR_7, "essiv")) {
  if (!*VAR_8) {
   VAR_4->error = "Digest algorithm missing for ESSIV mode";
   FUNC_3(VAR_14);
   return -VAR_1;
  }
  VAR_15 = FUNC_5(VAR_14, VAR_0,
          "essiv(%s(%s),%s)", VAR_12, VAR_11, *VAR_8);
 } else {
  VAR_15 = FUNC_5(VAR_14, VAR_0,
          "%s(%s)", VAR_12, VAR_11);
 }
 if (VAR_15 < 0 || VAR_15 >= VAR_0) {
  FUNC_3(VAR_14);
  goto bad_mem;
 }


 VAR_15 = FUNC_0(VAR_9, VAR_14);
 if (VAR_15 < 0) {
  VAR_4->error = "Error allocating crypto tfm";
  FUNC_3(VAR_14);
  return VAR_15;
 }
 FUNC_3(VAR_14);

 return 0;
bad_mem:
 VAR_4->error = "Cannot allocate cipher strings";
 return -VAR_2;
}
