
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlines; int option; } ;
struct TYPE_4__ {TYPE_1__ contents; } ;
struct used_atom {TYPE_2__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (struct strbuf*,int,int ,char const*) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,int,int *) ;
 scalar_t__ FUNC_5 (struct ref_format const*,struct used_atom*,char const*,struct strbuf*) ;

__attribute__((used)) static int FUNC_6(const struct ref_format *VAR_5, struct used_atom *VAR_6,
    const char *VAR_7, struct strbuf *VAR_8)
{
 if (!VAR_7)
  VAR_6->u.contents.option = VAR_0;
 else if (!FUNC_3(VAR_7, "body"))
  VAR_6->u.contents.option = VAR_1;
 else if (!FUNC_3(VAR_7, "signature"))
  VAR_6->u.contents.option = VAR_3;
 else if (!FUNC_3(VAR_7, "subject"))
  VAR_6->u.contents.option = VAR_4;
 else if (FUNC_1(VAR_7, "trailers", &VAR_7)) {
  FUNC_1(VAR_7, ":", &VAR_7);
  if (FUNC_5(VAR_5, VAR_6, *VAR_7 ? VAR_7 : ((void*)0), VAR_8))
   return -1;
 } else if (FUNC_1(VAR_7, "lines=", &VAR_7)) {
  VAR_6->u.contents.option = VAR_2;
  if (FUNC_4(VAR_7, 10, &VAR_6->u.contents.nlines))
   return FUNC_2(VAR_8, -1, FUNC_0("positive value expected contents:lines=%s"), VAR_7);
 } else
  return FUNC_2(VAR_8, -1, FUNC_0("unrecognized %%(contents) argument: %s"), VAR_7);
 return 0;
}
