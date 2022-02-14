
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tree_desc*,void*,unsigned long) ;
 int FUNC_2 (struct object_id const*) ;
 void* FUNC_3 (struct repository*,struct object_id const*,int ,unsigned long*,int *) ;
 int VAR_0 ;

void *FUNC_4(struct repository *VAR_1,
      struct tree_desc *VAR_2,
      const struct object_id *VAR_3)
{
 unsigned long VAR_4 = 0;
 void *VAR_5 = ((void*)0);

 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_0, &VAR_4, ((void*)0));
  if (!VAR_5)
   FUNC_0("unable to read tree %s", FUNC_2(VAR_3));
 }
 FUNC_1(VAR_2, VAR_5, VAR_4);
 return VAR_5;
}
