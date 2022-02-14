
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_target_spec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,void*) ;

__attribute__((used)) static int FUNC_1(struct dm_target_spec *VAR_1, uint32_t VAR_2, void *VAR_3,
         struct dm_target_spec **VAR_4, char **VAR_5)
{
 *VAR_4 = (struct dm_target_spec *) ((unsigned char *) VAR_1 + VAR_2);
 *VAR_5 = (char *) (*VAR_4 + 1);

 if (*VAR_4 < (VAR_1 + 1))
  return -VAR_0;

 return FUNC_0(*VAR_5, VAR_3);
}
