
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmp_status; int str; } ;
struct TYPE_3__ {TYPE_2__ if_then_else; } ;
struct used_atom {TYPE_1__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (struct strbuf*,int,int ,char const*) ;

__attribute__((used)) static int FUNC_3(const struct ref_format *VAR_3, struct used_atom *VAR_4,
     const char *VAR_5, struct strbuf *VAR_6)
{
 if (!VAR_5) {
  VAR_4->u.if_then_else.cmp_status = VAR_1;
  return 0;
 } else if (FUNC_1(VAR_5, "equals=", &VAR_4->u.if_then_else.str)) {
  VAR_4->u.if_then_else.cmp_status = VAR_0;
 } else if (FUNC_1(VAR_5, "notequals=", &VAR_4->u.if_then_else.str)) {
  VAR_4->u.if_then_else.cmp_status = VAR_2;
 } else
  return FUNC_2(VAR_6, -1, FUNC_0("unrecognized %%(if) argument: %s"), VAR_5);
 return 0;
}
