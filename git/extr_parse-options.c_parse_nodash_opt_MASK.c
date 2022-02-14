
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int dummy; } ;
struct option {scalar_t__ type; int flags; char const short_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct parse_opt_ctx_t*,struct option const*,struct option const*,int ) ;

__attribute__((used)) static int FUNC_1(struct parse_opt_ctx_t *VAR_3, const char *VAR_4,
       const struct option *VAR_5)
{
 const struct option *VAR_6 = VAR_5;

 for (; VAR_5->type != VAR_0; VAR_5++) {
  if (!(VAR_5->flags & VAR_2))
   continue;
  if (VAR_5->short_name == VAR_4[0] && VAR_4[1] == '\0')
   return FUNC_0(VAR_3, VAR_5, VAR_6, VAR_1);
 }
 return -2;
}
