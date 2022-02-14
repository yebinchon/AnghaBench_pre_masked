
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int color; } ;
struct used_atom {TYPE_1__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int use_color; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct strbuf*,int,int ,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct ref_format *VAR_0, struct used_atom *VAR_1,
        const char *VAR_2, struct strbuf *VAR_3)
{
 if (!VAR_2)
  return FUNC_2(VAR_3, -1, FUNC_0("expected format: %%(color:<color>)"));
 if (FUNC_1(VAR_2, VAR_1->u.color) < 0)
  return FUNC_2(VAR_3, -1, FUNC_0("unrecognized color: %%(color:%s)"),
           VAR_2);




 if (!FUNC_3(VAR_0->use_color))
  FUNC_1("", VAR_1->u.color);
 return 0;
}
