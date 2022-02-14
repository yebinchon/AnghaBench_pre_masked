
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct tag {int dummy; } ;
struct object {int type; int oid; } ;
struct fsck_options {int dummy; } ;
struct commit {int dummy; } ;




 int VAR_0 ;


 int FUNC_0 (struct fsck_options*,struct object*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct commit*,void*,struct fsck_options*) ;
 int FUNC_3 (struct tag*,void*,struct fsck_options*) ;
 int FUNC_4 (struct tree*,void*,struct fsck_options*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;

int FUNC_6(struct object *VAR_2, void *VAR_3, struct fsck_options *VAR_4)
{
 if (!VAR_2)
  return -1;

 if (VAR_2->type == VAR_0)
  FUNC_5(VAR_1, &VAR_2->oid);

 switch (VAR_2->type) {
 case 131:
  return 0;
 case 128:
  return FUNC_4((struct tree *)VAR_2, VAR_3, VAR_4);
 case 130:
  return FUNC_2((struct commit *)VAR_2, VAR_3, VAR_4);
 case 129:
  return FUNC_3((struct tag *)VAR_2, VAR_3, VAR_4);
 default:
  FUNC_1("Unknown object type for %s", FUNC_0(VAR_4, VAR_2));
  return -1;
 }
}
