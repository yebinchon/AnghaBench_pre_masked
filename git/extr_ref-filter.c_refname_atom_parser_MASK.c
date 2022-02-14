
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refname; } ;
struct used_atom {int name; TYPE_1__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;


 int FUNC_0 (int *,char const*,int ,struct strbuf*) ;

__attribute__((used)) static int FUNC_1(const struct ref_format *VAR_0, struct used_atom *VAR_1,
          const char *VAR_2, struct strbuf *VAR_3)
{
 return FUNC_0(&VAR_1->u.refname, VAR_2, VAR_1->name, VAR_3);
}
