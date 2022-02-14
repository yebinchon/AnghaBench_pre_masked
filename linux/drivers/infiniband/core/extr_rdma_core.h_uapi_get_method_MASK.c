
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_api_write_method {int dummy; } ;
struct uverbs_api {int num_write_ex; int num_write; struct uverbs_api_write_method const** write_methods; struct uverbs_api_write_method const** write_ex_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uverbs_api_write_method const* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline const struct uverbs_api_write_method *
FUNC_1(const struct uverbs_api *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & VAR_2;

 if (VAR_5 & ~(u32)(VAR_3 |
        VAR_2))
  return FUNC_0(-VAR_0);

 if (VAR_5 & VAR_3) {
  if (VAR_6 >= VAR_4->num_write_ex)
   return FUNC_0(-VAR_1);
  return VAR_4->write_ex_methods[VAR_6];
 }

 if (VAR_6 >= VAR_4->num_write)
  return FUNC_0(-VAR_1);
 return VAR_4->write_methods[VAR_6];
}
