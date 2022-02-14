
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ found_entry; } ;
typedef TYPE_1__ MMDB_lookup_result_s ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (TYPE_1__,char*,char*,char*,...) ;

__attribute__((used)) static void
FUNC_2 (MMDB_lookup_result_s VAR_0, char *VAR_1)
{
  char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

  if (VAR_0.found_entry) {
    VAR_2 = FUNC_1 (VAR_0, "country", "names", "en", ((void*)0));
    VAR_3 = FUNC_1 (VAR_0, "country", "iso_code", ((void*)0));
  }
  FUNC_0 (VAR_2, VAR_3, VAR_1);
}
