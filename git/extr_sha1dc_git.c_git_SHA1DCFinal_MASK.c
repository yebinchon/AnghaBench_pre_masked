
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA1_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (unsigned char*) ;

void FUNC_3(unsigned char VAR_0[20], SHA1_CTX *VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1))
  return;
 FUNC_1("SHA-1 appears to be part of a collision attack: %s",
     FUNC_2(VAR_0));
}
