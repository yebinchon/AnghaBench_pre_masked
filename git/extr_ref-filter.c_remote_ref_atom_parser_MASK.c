
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int push; int nobracket; int push_remote; int refname; void* option; } ;
struct TYPE_6__ {TYPE_2__ remote_ref; } ;
struct used_atom {char const* name; TYPE_3__ u; } ;
struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_4__ {char* string; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 struct string_list VAR_5 ;
 int FUNC_0 (int *,char const*,char const*,struct strbuf*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (struct string_list*,char const*,char,int) ;

__attribute__((used)) static int FUNC_5(const struct ref_format *VAR_6, struct used_atom *VAR_7,
      const char *VAR_8, struct strbuf *VAR_9)
{
 struct string_list VAR_10 = VAR_5;
 int VAR_11;

 if (!FUNC_2(VAR_7->name, "push") || FUNC_1(VAR_7->name, "push:"))
  VAR_7->u.remote_ref.push = 1;

 if (!VAR_8) {
  VAR_7->u.remote_ref.option = VAR_0;
  return FUNC_0(&VAR_7->u.remote_ref.refname,
          VAR_8, VAR_7->name, VAR_9);
 }

 VAR_7->u.remote_ref.nobracket = 0;
 FUNC_4(&VAR_10, VAR_8, ',', -1);

 for (VAR_11 = 0; VAR_11 < VAR_10.nr; VAR_11++) {
  const char *VAR_12 = VAR_10.items[VAR_11].string;

  if (!FUNC_2(VAR_12, "track"))
   VAR_7->u.remote_ref.option = VAR_3;
  else if (!FUNC_2(VAR_12, "trackshort"))
   VAR_7->u.remote_ref.option = VAR_4;
  else if (!FUNC_2(VAR_12, "nobracket"))
   VAR_7->u.remote_ref.nobracket = 1;
  else if (!FUNC_2(VAR_12, "remotename")) {
   VAR_7->u.remote_ref.option = VAR_1;
   VAR_7->u.remote_ref.push_remote = 1;
  } else if (!FUNC_2(VAR_12, "remoteref")) {
   VAR_7->u.remote_ref.option = VAR_2;
   VAR_7->u.remote_ref.push_remote = 1;
  } else {
   VAR_7->u.remote_ref.option = VAR_0;
   if (FUNC_0(&VAR_7->u.remote_ref.refname,
        VAR_8, VAR_7->name, VAR_9)) {
    FUNC_3(&VAR_10, 0);
    return -1;
   }
  }
 }

 FUNC_3(&VAR_10, 0);
 return 0;
}
