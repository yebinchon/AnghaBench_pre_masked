
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char const*,int,unsigned char*,int,unsigned char*,int *) ;
 int FUNC_5 (char*,...) ;
 char FUNC_6 (unsigned char) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (char*,char const*,char*) ;

__attribute__((used)) static char *FUNC_11(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned char VAR_7[16];
 char VAR_8[33];
 char *VAR_9, *VAR_10, *VAR_11;





 VAR_5 = FUNC_7(VAR_0);
 VAR_11 = FUNC_8(VAR_5);
 VAR_6 = FUNC_1((unsigned char *)VAR_11,
          (unsigned char *)VAR_0, VAR_5);
 if (VAR_6 < 0)
  FUNC_5("invalid challenge %s", VAR_0);
 if (!FUNC_4(FUNC_3(), VAR_2, FUNC_7(VAR_2), (unsigned char *)VAR_11, VAR_6, VAR_7, ((void*)0)))
  FUNC_5("HMAC error");

 VAR_8[32] = 0;
 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_8[2 * VAR_3] = FUNC_6((VAR_7[VAR_3] >> 4) & 0xf);
  VAR_8[2 * VAR_3 + 1] = FUNC_6(VAR_7[VAR_3] & 0xf);
 }


 VAR_9 = FUNC_10("%s %s", VAR_1, VAR_8);
 VAR_4 = FUNC_7(VAR_9);

 VAR_10 = FUNC_9(FUNC_0(VAR_4));
 VAR_5 = FUNC_2((unsigned char *)VAR_10,
          (unsigned char *)VAR_9, VAR_4);
 if (VAR_5 < 0)
  FUNC_5("EVP_EncodeBlock error");
 return (char *)VAR_10;
}
