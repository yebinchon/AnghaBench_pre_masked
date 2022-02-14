
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct public_key_signature {struct public_key_signature* digest; struct public_key_signature* s; struct public_key_signature** auth_ids; } ;


 int FUNC_0 (struct public_key_signature**) ;
 int FUNC_1 (struct public_key_signature*) ;

void FUNC_2(struct public_key_signature *VAR_0)
{
 int VAR_1;

 if (VAR_0) {
  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->auth_ids); VAR_1++)
   FUNC_1(VAR_0->auth_ids[VAR_1]);
  FUNC_1(VAR_0->s);
  FUNC_1(VAR_0->digest);
  FUNC_1(VAR_0);
 }
}
