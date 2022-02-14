
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pefile_context {size_t digest_len; int digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,size_t,int ) ;

int FUNC_1(void *VAR_2, size_t VAR_3,
         unsigned char VAR_4,
         const void *VAR_5, size_t VAR_6)
{
 struct pefile_context *VAR_7 = VAR_2;

 VAR_7->digest = FUNC_0(VAR_5, VAR_6, VAR_1);
 if (!VAR_7->digest)
  return -VAR_0;

 VAR_7->digest_len = VAR_6;

 return 0;
}
