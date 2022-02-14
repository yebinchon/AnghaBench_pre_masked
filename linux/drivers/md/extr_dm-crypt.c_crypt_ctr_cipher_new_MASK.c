
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; struct crypt_config* private; } ;
struct crypt_config {int tfms_count; int key_parts; int iv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypt_config*) ;
 int FUNC_1 (struct crypt_config*) ;
 int FUNC_2 (struct crypt_config*,char*) ;
 int FUNC_3 (struct crypt_config*,char*) ;
 scalar_t__ FUNC_4 (struct crypt_config*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;

__attribute__((used)) static int FUNC_11(struct dm_target *VAR_3, char *VAR_4, char *VAR_5,
    char **VAR_6, char **VAR_7)
{
 struct crypt_config *VAR_8 = VAR_3->private;
 char *VAR_9, *VAR_10, VAR_11[VAR_0];
 int VAR_12 = -VAR_1;

 VAR_8->tfms_count = 1;





 VAR_9 = &VAR_4[FUNC_9("capi:")];


 *VAR_7 = FUNC_10(VAR_9, ':');
 if (*VAR_7) {
  **VAR_7 = '\0';
  (*VAR_7)++;
 }

 *VAR_6 = FUNC_10(VAR_9, '-');
 if (*VAR_6) {
  **VAR_6 = '\0';
  (*VAR_6)++;
 }

 VAR_10 = VAR_9;


 if (FUNC_4(VAR_8)) {
  VAR_12 = FUNC_3(VAR_8, VAR_10);
  if (VAR_12 < 0) {
   VAR_3->error = "Invalid AEAD cipher spec";
   return -VAR_2;
  }
 }

 if (*VAR_6 && !FUNC_8(*VAR_6, "lmk"))
  VAR_8->tfms_count = 64;

 if (*VAR_6 && !FUNC_8(*VAR_6, "essiv")) {
  if (!*VAR_7) {
   VAR_3->error = "Digest algorithm missing for ESSIV mode";
   return -VAR_1;
  }
  VAR_12 = FUNC_7(VAR_11, VAR_0, "essiv(%s,%s)",
          VAR_10, *VAR_7);
  if (VAR_12 < 0 || VAR_12 >= VAR_0) {
   VAR_3->error = "Cannot allocate cipher string";
   return -VAR_2;
  }
  VAR_10 = VAR_11;
 }

 VAR_8->key_parts = VAR_8->tfms_count;


 VAR_12 = FUNC_2(VAR_8, VAR_10);
 if (VAR_12 < 0) {
  VAR_3->error = "Error allocating crypto tfm";
  return VAR_12;
 }

 if (FUNC_4(VAR_8))
  VAR_8->iv_size = FUNC_5(FUNC_1(VAR_8));
 else
  VAR_8->iv_size = FUNC_6(FUNC_0(VAR_8));

 return 0;
}
