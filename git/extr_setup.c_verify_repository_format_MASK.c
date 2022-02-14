
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct repository_format {int version; TYPE_2__ unknown_extensions; } ;
struct TYPE_3__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct strbuf*,char*,int,...) ;
 int FUNC_2 (struct strbuf*,int ) ;

int FUNC_3(const struct repository_format *VAR_1,
        struct strbuf *VAR_2)
{
 if (VAR_0 < VAR_1->version) {
  FUNC_1(VAR_2, FUNC_0("Expected git repo version <= %d, found %d"),
       VAR_0, VAR_1->version);
  return -1;
 }

 if (VAR_1->version >= 1 && VAR_1->unknown_extensions.nr) {
  int VAR_3;

  FUNC_2(VAR_2, FUNC_0("unknown repository extensions found:"));

  for (VAR_3 = 0; VAR_3 < VAR_1->unknown_extensions.nr; VAR_3++)
   FUNC_1(VAR_2, "\n\t%s",
        VAR_1->unknown_extensions.items[VAR_3].string);
  return -1;
 }

 return 0;
}
