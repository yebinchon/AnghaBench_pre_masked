
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_parse_context {size_t akid_raw_issuer_size; void const* akid_raw_issuer; } ;


 int FUNC_0 (char*,int,void const*) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
   unsigned char VAR_2,
   const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;

 FUNC_0("AKID: name: %*phN\n", (int)VAR_4, VAR_3);

 VAR_5->akid_raw_issuer = VAR_3;
 VAR_5->akid_raw_issuer_size = VAR_4;
 return 0;
}
