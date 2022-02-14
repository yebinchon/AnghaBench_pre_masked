
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity_sig_opts {int dummy; } ;
struct dm_verity {int signature_key_desc; struct dm_target* ti; } ;
struct dm_target {void* error; } ;
struct dm_arg_set {int dummy; } ;


 void* FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (struct dm_arg_set*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,struct dm_verity_sig_opts*) ;

int FUNC_4(struct dm_arg_set *VAR_3,
         struct dm_verity *VAR_4,
         struct dm_verity_sig_opts *VAR_5,
         unsigned int *VAR_6,
         const char *VAR_7)
{
 struct dm_target *VAR_8 = VAR_4->ti;
 int VAR_9 = 0;
 const char *VAR_10 = ((void*)0);

 if (!*VAR_6) {
  VAR_8->error = FUNC_0("Signature key not specified");
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_3);
 (*VAR_6)--;

 VAR_9 = FUNC_3(VAR_10, VAR_5);
 if (VAR_9 < 0)
  VAR_8->error = FUNC_0("Invalid key specified");

 VAR_4->signature_key_desc = FUNC_2(VAR_10, VAR_2);
 if (!VAR_4->signature_key_desc)
  return -VAR_1;

 return VAR_9;
}
