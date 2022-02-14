
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {scalar_t__* opt; } ;
struct option {scalar_t__ type; scalar_t__ short_name; int (* ll_callback ) (struct parse_opt_ctx_t*,struct option const*,char*,int ) ;scalar_t__ (* callback ) (struct option const*,char*,int ) ;} ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct parse_opt_ctx_t*,struct option const*,struct option const*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct option const*,char*,int ) ;
 int FUNC_4 (struct parse_opt_ctx_t*,struct option const*,char*,int ) ;
 char* FUNC_5 (scalar_t__*,size_t) ;

__attribute__((used)) static enum parse_opt_result FUNC_6(struct parse_opt_ctx_t *VAR_4,
          const struct option *VAR_5)
{
 const struct option *VAR_6 = VAR_5;
 const struct option *VAR_7 = ((void*)0);

 for (; VAR_5->type != VAR_0; VAR_5++) {
  if (VAR_5->short_name == *VAR_4->opt) {
   VAR_4->opt = VAR_4->opt[1] ? VAR_4->opt + 1 : ((void*)0);
   return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_2);
  }





  if (VAR_5->type == VAR_1)
   VAR_7 = VAR_5;
 }
 if (VAR_7 && FUNC_2(*VAR_4->opt)) {
  size_t VAR_8 = 1;
  char *VAR_9;
  int VAR_10;

  while (FUNC_2(VAR_4->opt[VAR_8]))
   VAR_8++;
  VAR_9 = FUNC_5(VAR_4->opt, VAR_8);
  VAR_4->opt = VAR_4->opt[VAR_8] ? VAR_4->opt + VAR_8 : ((void*)0);
  if (VAR_7->callback)
   VAR_10 = (*VAR_7->callback)(VAR_7, VAR_9, 0) ? (-1) : 0;
  else
   VAR_10 = (*VAR_7->ll_callback)(VAR_4, VAR_7, VAR_9, 0);
  FUNC_0(VAR_9);
  return VAR_10;
 }
 return VAR_3;
}
