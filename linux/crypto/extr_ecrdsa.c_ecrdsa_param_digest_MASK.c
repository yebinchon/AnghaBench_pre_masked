
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecrdsa_ctx {int digest_oid; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,size_t) ;

int FUNC_1(void *VAR_1, size_t VAR_2, unsigned char VAR_3,
   const void *VAR_4, size_t VAR_5)
{
 struct ecrdsa_ctx *VAR_6 = VAR_1;
 int VAR_7 = FUNC_0(VAR_4, VAR_5);

 if (VAR_7 != VAR_6->digest_oid)
  return -VAR_0;
 return 0;
}
