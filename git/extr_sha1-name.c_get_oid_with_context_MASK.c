
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object_context {int dummy; } ;
typedef enum get_oid_result { ____Placeholder_get_oid_result } get_oid_result ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct repository*,char const*,unsigned int,int *,struct object_id*,struct object_context*) ;

enum get_oid_result FUNC_2(struct repository *VAR_2,
      const char *VAR_3,
      unsigned VAR_4,
      struct object_id *VAR_5,
      struct object_context *VAR_6)
{
 if (VAR_4 & VAR_0 && VAR_4 & VAR_1)
  FUNC_0("incompatible flags for get_sha1_with_context");
 return FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5, VAR_6);
}
