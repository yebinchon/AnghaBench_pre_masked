
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int type; } ;
struct atom_value {int dummy; } ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct atom_value*,int,struct object*) ;
 int FUNC_2 (char*,struct atom_value*,int,void*) ;
 int FUNC_3 (struct atom_value*,int,void*) ;
 int FUNC_4 (struct atom_value*,int,struct object*) ;

__attribute__((used)) static void FUNC_5(struct atom_value *VAR_0, int VAR_1, struct object *VAR_2, void *VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_1, VAR_3);
  FUNC_2("tagger", VAR_0, VAR_1, VAR_3);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_1, VAR_3);
  FUNC_2("author", VAR_0, VAR_1, VAR_3);
  FUNC_2("committer", VAR_0, VAR_1, VAR_3);
  break;
 case 128:

  break;
 case 131:

  break;
 default:
  FUNC_0("Eh?  Object of type %d?", VAR_2->type);
 }
}
