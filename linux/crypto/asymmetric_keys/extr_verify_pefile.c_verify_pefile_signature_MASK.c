
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pefile_context {int sig_offset; int digest; int digest_len; int sig_len; } ;
struct key {int dummy; } ;
typedef enum key_being_used_for { ____Placeholder_key_being_used_for } key_being_used_for ;
typedef int ctx ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pefile_context*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (void const*,unsigned int,struct pefile_context*) ;
 int FUNC_4 (void const*,unsigned int,struct pefile_context*) ;
 int FUNC_5 (void const*,struct pefile_context*) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 (int *,int ,void const*,int ,struct key*,int,int ,struct pefile_context*) ;

int FUNC_8(const void *VAR_1, unsigned VAR_2,
       struct key *VAR_3,
       enum key_being_used_for VAR_4)
{
 struct pefile_context VAR_5;
 int VAR_6;

 FUNC_0("");

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_7(((void*)0), 0,
         VAR_1 + VAR_5.sig_offset, VAR_5.sig_len,
         VAR_3, VAR_4,
         VAR_0, &VAR_5);
 if (VAR_6 < 0)
  goto error;

 FUNC_6("Digest: %u [%*ph]\n",
   VAR_5.digest_len, VAR_5.digest_len, VAR_5.digest);




 VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_5);

error:
 FUNC_1(VAR_5.digest);
 return VAR_6;
}
