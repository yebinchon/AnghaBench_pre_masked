
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chap {int chap_challenge; } ;


 char* FUNC_0 (int ,int) ;

char *
FUNC_1(const struct chap *VAR_0)
{
 char *VAR_1;

 VAR_1 = FUNC_0(VAR_0->chap_challenge,
     sizeof(VAR_0->chap_challenge));

 return (VAR_1);
}
