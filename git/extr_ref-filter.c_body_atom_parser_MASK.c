
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int option; } ;
struct TYPE_4__ {TYPE_1__ contents; } ;
struct used_atom {TYPE_2__ u; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct ref_format *VAR_1, struct used_atom *VAR_2,
       const char *VAR_3, struct strbuf *VAR_4)
{
 if (VAR_3)
  return FUNC_1(VAR_4, -1, FUNC_0("%%(body) does not take arguments"));
 VAR_2->u.contents.option = VAR_0;
 return 0;
}
