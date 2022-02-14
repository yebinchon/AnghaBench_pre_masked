
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int found_entry; } ;
typedef TYPE_1__ MMDB_lookup_result_s ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_1__ FUNC_1 (int ,char const*,int*,int*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (MMDB_lookup_result_s * VAR_2, const char *VAR_3)
{
  int VAR_4, VAR_5;

  *VAR_2 = FUNC_1 (VAR_1, VAR_3, &VAR_4, &VAR_5);
  if (0 != VAR_4)
    return 1;

  if (VAR_0 != VAR_5)
    FUNC_0 ("Error from libmaxminddb: %s\n", FUNC_2 (VAR_5));

  if (!(*VAR_2).found_entry)
    return 1;

  return 0;
}
