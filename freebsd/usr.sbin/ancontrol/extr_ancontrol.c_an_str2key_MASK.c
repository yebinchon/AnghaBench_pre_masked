
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_ltv_key {int klen; int * key; } ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, struct an_ltv_key *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4;


 if (VAR_0[0] == '0' && (VAR_0[1] == 'x' || VAR_0[1] == 'X')) {

  VAR_2 = 0;
  VAR_4 = (char *)&VAR_1->key[0];
  for (VAR_3 = 2; VAR_0[VAR_3] != '\0' && VAR_0[VAR_3 + 1] != '\0'; VAR_3+= 2) {
   *VAR_4++ = (FUNC_0(VAR_0[VAR_3]) << 4) + FUNC_0(VAR_0[VAR_3 + 1]);
   VAR_2++;
  }
  if (VAR_0[VAR_3] != '\0')
   FUNC_2(1, "hex strings must be of even length");
  VAR_1->klen = VAR_2;
 } else {

  FUNC_1(VAR_0, VAR_1->key, FUNC_3(VAR_0));
  VAR_1->klen = FUNC_3(VAR_0);
 }

 return;
}
