
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chap {int chap_id; int * chap_challenge; } ;


 int FUNC_0 (int *,int) ;
 struct chap* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;

struct chap *
FUNC_3(void)
{
 struct chap *VAR_0;

 VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_2(1, "calloc");




 FUNC_0(VAR_0->chap_challenge, sizeof(VAR_0->chap_challenge));
 FUNC_0(&VAR_0->chap_id, sizeof(VAR_0->chap_id));

 return (VAR_0);
}
