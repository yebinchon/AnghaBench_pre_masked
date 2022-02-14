
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct object_id {int dummy; } ;
typedef int (* each_ref_fn ) (char*,struct object_id*,int,void*) ;


 int VAR_0 ;
 int FUNC_0 (struct ref_store*,char*,int ,struct object_id*,int*) ;

int FUNC_1(struct ref_store *VAR_1, each_ref_fn VAR_2, void *VAR_3)
{
 struct object_id VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_1, "HEAD", VAR_0,
    &VAR_4, &VAR_5))
  return VAR_2("HEAD", &VAR_4, VAR_5, VAR_3);

 return 0;
}
