
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct repository*,struct tree_desc*,char const*,struct object_id*,unsigned short*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct tree_desc*,void*,unsigned long) ;
 int FUNC_3 (struct object_id*,struct object_id*) ;
 void* FUNC_4 (struct repository*,struct object_id const*,int ,unsigned long*,struct object_id*) ;
 int VAR_0 ;

int FUNC_5(struct repository *VAR_1,
     const struct object_id *VAR_2,
     const char *VAR_3,
     struct object_id *VAR_4,
     unsigned short *VAR_5)
{
 int VAR_6;
 void *VAR_7;
 unsigned long VAR_8;
 struct object_id VAR_9;

 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_0, &VAR_8, &VAR_9);
 if (!VAR_7)
  return -1;

 if (VAR_3[0] == '\0') {
  FUNC_3(VAR_4, &VAR_9);
  FUNC_1(VAR_7);
  return 0;
 }

 if (!VAR_8) {
  VAR_6 = -1;
 } else {
  struct tree_desc VAR_10;
  FUNC_2(&VAR_10, VAR_7, VAR_8);
  VAR_6 = FUNC_0(VAR_1, &VAR_10, VAR_3, VAR_4, VAR_5);
 }
 FUNC_1(VAR_7);
 return VAR_6;
}
