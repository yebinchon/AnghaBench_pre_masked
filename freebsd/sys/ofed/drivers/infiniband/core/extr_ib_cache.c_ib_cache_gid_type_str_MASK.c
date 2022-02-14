
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char *FUNC_1(enum ib_gid_type VAR_1)
{
 if (VAR_1 < FUNC_0(VAR_0) && VAR_0[VAR_1])
  return VAR_0[VAR_1];

 return "Invalid GID type";
}
