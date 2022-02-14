
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key {int dummy; } ;
struct pf_state {struct pf_state_key** key; } ;
struct pf_keyhash {int dummy; } ;


 int FUNC_0 (struct pf_keyhash*) ;
 int FUNC_1 (struct pf_keyhash*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct pf_keyhash* VAR_2 ;
 size_t FUNC_2 (struct pf_state_key*) ;
 int FUNC_3 (struct pf_state*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct pf_state *VAR_3)
{
 struct pf_state_key *VAR_4 = VAR_3->key[VAR_0];
 struct pf_keyhash *VAR_5;

 if (VAR_4 != ((void*)0)) {
  VAR_5 = &VAR_2[FUNC_2(VAR_4)];
  FUNC_0(VAR_5);
  if (VAR_3->key[VAR_0] != ((void*)0))
   FUNC_3(VAR_3, VAR_0);



  if (VAR_4 == VAR_3->key[VAR_1]) {
   FUNC_3(VAR_3, VAR_1);
   FUNC_1(VAR_5);
   return;
  }
  FUNC_1(VAR_5);
 }

 if (VAR_3->key[VAR_1] != ((void*)0)) {
  VAR_5 = &VAR_2[FUNC_2(VAR_3->key[VAR_1])];
  FUNC_0(VAR_5);
  if (VAR_3->key[VAR_1] != ((void*)0))
   FUNC_3(VAR_3, VAR_1);
  FUNC_1(VAR_5);
 }
}
