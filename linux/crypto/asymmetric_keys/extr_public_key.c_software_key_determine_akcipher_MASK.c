
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct public_key {char* pkey_algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static
int FUNC_3(const char *VAR_3,
        const char *VAR_4,
        const struct public_key *VAR_5,
        char VAR_6[VAR_0])
{
 int VAR_7;

 if (FUNC_1(VAR_3, "pkcs1") == 0) {




  if (!VAR_4)
   VAR_7 = FUNC_0(VAR_6, VAR_0,
         "pkcs1pad(%s)",
         VAR_5->pkey_algo);
  else
   VAR_7 = FUNC_0(VAR_6, VAR_0,
         "pkcs1pad(%s,%s)",
         VAR_5->pkey_algo, VAR_4);
  return VAR_7 >= VAR_0 ? -VAR_1 : 0;
 }

 if (FUNC_1(VAR_3, "raw") == 0) {
  FUNC_2(VAR_6, VAR_5->pkey_algo);
  return 0;
 }

 return -VAR_2;
}
