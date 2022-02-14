
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct used_atom {char* name; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_6__ {int * typep; } ;
struct TYPE_8__ {int type; TYPE_2__ info; } ;
struct TYPE_5__ {int * typep; } ;
struct TYPE_7__ {int type; TYPE_1__ info; } ;


 int FUNC_0 (char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct strbuf*,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct ref_format *VAR_2, struct used_atom *VAR_3,
      const char *VAR_4, struct strbuf *VAR_5)
{
 if (VAR_4)
  return FUNC_1(VAR_5, -1, FUNC_0("%%(objecttype) does not take arguments"));
 if (*VAR_3->name == '*')
  VAR_1.info.typep = &VAR_1.type;
 else
  VAR_0.info.typep = &VAR_0.type;
 return 0;
}
