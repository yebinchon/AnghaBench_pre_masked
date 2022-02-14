
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mppe_state {int sesskey; int keylen; int mastkey; } ;
typedef int RC4_KEY ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct mppe_state*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct mppe_state *VAR_1)
{
  char VAR_2[VAR_0];
  RC4_KEY VAR_3;

  FUNC_0(VAR_1->mastkey, VAR_1->sesskey, VAR_1->keylen, VAR_2);
  FUNC_3(&VAR_3, VAR_1->keylen, VAR_2);
  FUNC_2(&VAR_3, VAR_1->keylen, VAR_2, VAR_1->sesskey);

  FUNC_1(VAR_1);
}
