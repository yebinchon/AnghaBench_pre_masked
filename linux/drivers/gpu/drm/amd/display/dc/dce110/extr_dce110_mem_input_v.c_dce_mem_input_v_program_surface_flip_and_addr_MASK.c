
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_plane_address {int dummy; } ;
struct mem_input {struct dc_plane_address request_address; } ;
struct dce_mem_input {int dummy; } ;


 struct dce_mem_input* FUNC_0 (struct mem_input*) ;
 int FUNC_1 (struct dce_mem_input*,struct dc_plane_address const*) ;
 int FUNC_2 (struct dce_mem_input*,int) ;

bool FUNC_3(
 struct mem_input *VAR_0,
 const struct dc_plane_address *VAR_1,
 bool VAR_2)
{
 struct dce_mem_input *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3, VAR_2);
 FUNC_1(VAR_3,
  VAR_1);

 VAR_0->request_address = *VAR_1;

 return 1;
}
