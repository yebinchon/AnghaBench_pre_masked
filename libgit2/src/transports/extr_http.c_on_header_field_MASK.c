
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* t; } ;
typedef TYPE_1__ parser_context ;
struct TYPE_7__ {scalar_t__ last_cb; int parse_error; int parse_header_name; } ;
typedef TYPE_2__ http_subtransport ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ http_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(http_parser *VAR_4, const char *VAR_5, size_t VAR_6)
{
 parser_context *VAR_7 = (parser_context *) VAR_4->data;
 http_subtransport *VAR_8 = VAR_7->t;



 if (VAR_3 == VAR_8->last_cb)
  if (FUNC_2(VAR_8) < 0)
   return VAR_8->parse_error = VAR_2;

 if (VAR_1 == VAR_8->last_cb || VAR_3 == VAR_8->last_cb)
  FUNC_0(&VAR_8->parse_header_name);

 if (FUNC_1(&VAR_8->parse_header_name, VAR_5, VAR_6) < 0)
  return VAR_8->parse_error = VAR_2;

 VAR_8->last_cb = VAR_0;
 return 0;
}
