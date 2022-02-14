
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,...) ;
 char const* FUNC_1 (struct object_id const*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct object_id const*,int *) ;
 char* FUNC_4 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_5 (char*,unsigned long,unsigned int) ;
 int VAR_2 ;
 char* FUNC_6 (int) ;

int FUNC_7(const struct object_id *VAR_3, const char *VAR_4,
  unsigned VAR_5)
{
 enum object_type VAR_6;
 char *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_2, VAR_3, ((void*)0));
 if (VAR_6 != VAR_1)
  return FUNC_0("%s: cannot verify a non-tag object of type %s.",
    VAR_4 ?
    VAR_4 :
    FUNC_1(VAR_3, VAR_0),
    FUNC_6(VAR_6));

 VAR_7 = FUNC_4(VAR_3, &VAR_6, &VAR_8);
 if (!VAR_7)
  return FUNC_0("%s: unable to read file.",
    VAR_4 ?
    VAR_4 :
    FUNC_1(VAR_3, VAR_0));

 VAR_9 = FUNC_5(VAR_7, VAR_8, VAR_5);

 FUNC_2(VAR_7);
 return VAR_9;
}
