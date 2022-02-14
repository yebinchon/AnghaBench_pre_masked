
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_restriction {int * keytype; struct key* key; int check; } ;
struct key {int dummy; } ;
typedef int key_restrict_link_func_t ;


 int VAR_0 ;
 struct key_restriction* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct key_restriction* FUNC_1 (int,int ) ;

__attribute__((used)) static struct key_restriction *FUNC_2(
 key_restrict_link_func_t VAR_3,
 struct key *VAR_4)
{
 struct key_restriction *VAR_5 =
  FUNC_1(sizeof(struct key_restriction), VAR_1);

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->check = VAR_3;
 VAR_5->key = VAR_4;
 VAR_5->keytype = &VAR_2;

 return VAR_5;
}
