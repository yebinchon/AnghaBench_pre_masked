
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct used_atom {char* name; } ;
struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_10__ {int hash; } ;
struct TYPE_9__ {int delta_base_sha1; } ;
struct TYPE_12__ {TYPE_4__ delta_base_oid; TYPE_3__ info; } ;
struct TYPE_8__ {int hash; } ;
struct TYPE_7__ {int delta_base_sha1; } ;
struct TYPE_11__ {TYPE_2__ delta_base_oid; TYPE_1__ info; } ;


 int FUNC_0 (char*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (struct strbuf*,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct ref_format *VAR_2, struct used_atom *VAR_3,
     const char *VAR_4, struct strbuf *VAR_5)
{
 if (VAR_4)
  return FUNC_1(VAR_5, -1, FUNC_0("%%(deltabase) does not take arguments"));
 if (*VAR_3->name == '*')
  VAR_1.info.delta_base_sha1 = VAR_1.delta_base_oid.hash;
 else
  VAR_0.info.delta_base_sha1 = VAR_0.delta_base_oid.hash;
 return 0;
}
