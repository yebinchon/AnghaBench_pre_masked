
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
struct TYPE_5__ {int * disk_sizep; int * sizep; } ;
struct TYPE_8__ {int disk_size; TYPE_1__ info; int size; } ;
struct TYPE_6__ {int * disk_sizep; int * sizep; } ;
struct TYPE_7__ {int disk_size; TYPE_2__ info; int size; } ;


 int FUNC_0 (char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct strbuf*,int,int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const struct ref_format *VAR_2, struct used_atom *VAR_3,
      const char *VAR_4, struct strbuf *VAR_5)
{
 if (!VAR_4) {
  if (*VAR_3->name == '*')
   VAR_1.info.sizep = &VAR_1.size;
  else
   VAR_0.info.sizep = &VAR_0.size;
 } else if (!FUNC_2(VAR_4, "disk")) {
  if (*VAR_3->name == '*')
   VAR_1.info.disk_sizep = &VAR_1.disk_size;
  else
   VAR_0.info.disk_sizep = &VAR_0.disk_size;
 } else
  return FUNC_1(VAR_5, -1, FUNC_0("unrecognized %%(objectsize) argument: %s"), VAR_4);
 return 0;
}
