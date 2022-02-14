
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int option; } ;
struct TYPE_4__ {TYPE_1__ objectname; } ;
struct used_atom {TYPE_2__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (struct strbuf*,int,int ,char const*) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(const struct ref_format *VAR_4, struct used_atom *VAR_5,
      const char *VAR_6, struct strbuf *VAR_7)
{
 if (!VAR_6)
  VAR_5->u.objectname.option = VAR_1;
 else if (!FUNC_3(VAR_6, "short"))
  VAR_5->u.objectname.option = VAR_3;
 else if (FUNC_1(VAR_6, "short=", &VAR_6)) {
  VAR_5->u.objectname.option = VAR_2;
  if (FUNC_4(VAR_6, 10, &VAR_5->u.objectname.length) ||
      VAR_5->u.objectname.length == 0)
   return FUNC_2(VAR_7, -1, FUNC_0("positive value expected objectname:short=%s"), VAR_6);
  if (VAR_5->u.objectname.length < VAR_0)
   VAR_5->u.objectname.length = VAR_0;
 } else
  return FUNC_2(VAR_7, -1, FUNC_0("unrecognized %%(objectname) argument: %s"), VAR_6);
 return 0;
}
