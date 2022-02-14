
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsa_key {size_t n_sz; void const* n; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_2, size_t VAR_3, unsigned char VAR_4,
       const void *VAR_5, size_t VAR_6)
{
 struct rsa_key *VAR_7 = VAR_2;
 const u8 *VAR_8 = VAR_5;
 size_t VAR_9 = VAR_6;


 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 if (VAR_1) {
  while (VAR_9 && !*VAR_8) {
   VAR_8++;
   VAR_9--;
  }


  if (VAR_9 < 256) {
   FUNC_0("RSA: key size not allowed in FIPS mode\n");
   return -VAR_0;
  }
 }

 VAR_7->n = VAR_5;
 VAR_7->n_sz = VAR_6;

 return 0;
}
