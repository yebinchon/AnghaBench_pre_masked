
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_init_data {int dummy; } ;
struct dc_link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_link*,struct link_init_data const*) ;
 int FUNC_1 (struct dc_link*) ;
 struct dc_link* FUNC_2 (int,int ) ;

struct dc_link *FUNC_3(const struct link_init_data *VAR_1)
{
 struct dc_link *VAR_2 =
   FUNC_2(sizeof(*VAR_2), VAR_0);

 if (((void*)0) == VAR_2)
  goto alloc_fail;

 if (0 == FUNC_0(VAR_2, VAR_1))
  goto construct_fail;

 return VAR_2;

construct_fail:
 FUNC_1(VAR_2);

alloc_fail:
 return ((void*)0);
}
