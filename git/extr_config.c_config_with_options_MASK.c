
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_config_source {scalar_t__ blob; scalar_t__ file; scalar_t__ use_stdin; } ;
struct config_options {scalar_t__ respect_includes; } ;
struct config_include_data {struct config_options const* opts; void* data; int fn; } ;
typedef int config_fn_t ;


 struct config_include_data VAR_0 ;
 int FUNC_0 (struct config_options const*,int ,void*) ;
 int FUNC_1 (int ,scalar_t__,void*) ;
 int FUNC_2 (int ,scalar_t__,void*) ;
 int FUNC_3 (int ,void*) ;
 int VAR_1 ;

int FUNC_4(config_fn_t VAR_2, void *VAR_3,
   struct git_config_source *VAR_4,
   const struct config_options *VAR_5)
{
 struct config_include_data VAR_6 = VAR_0;

 if (VAR_5->respect_includes) {
  VAR_6.fn = VAR_2;
  VAR_6.data = VAR_3;
  VAR_6.opts = VAR_5;
  VAR_2 = VAR_1;
  VAR_3 = &VAR_6;
 }





 if (VAR_4 && VAR_4->use_stdin)
  return FUNC_3(VAR_2, VAR_3);
 else if (VAR_4 && VAR_4->file)
  return FUNC_2(VAR_2, VAR_4->file, VAR_3);
 else if (VAR_4 && VAR_4->blob)
  return FUNC_1(VAR_2, VAR_4->blob, VAR_3);

 return FUNC_0(VAR_5, VAR_2, VAR_3);
}
