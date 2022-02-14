
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * file; } ;
struct config_source {int origin_type; char const* name; char const* path; int do_ftell; int do_ungetc; int do_fgetc; int default_error_action; TYPE_1__ u; } ;
struct config_options {int dummy; } ;
typedef enum config_origin_type { ____Placeholder_config_origin_type } config_origin_type ;
typedef int config_fn_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct config_source*,int ,void*,struct config_options const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(config_fn_t VAR_4,
  const enum config_origin_type VAR_5,
  const char *VAR_6, const char *VAR_7, FILE *VAR_8,
  void *VAR_9, const struct config_options *VAR_10)
{
 struct config_source VAR_11;
 int VAR_12;

 VAR_11.u.file = VAR_8;
 VAR_11.origin_type = VAR_5;
 VAR_11.name = VAR_6;
 VAR_11.path = VAR_7;
 VAR_11.default_error_action = VAR_0;
 VAR_11.do_fgetc = VAR_1;
 VAR_11.do_ungetc = VAR_3;
 VAR_11.do_ftell = VAR_2;

 FUNC_1(VAR_8);
 VAR_12 = FUNC_0(&VAR_11, VAR_4, VAR_9, VAR_10);
 FUNC_2(VAR_8);
 return VAR_12;
}
