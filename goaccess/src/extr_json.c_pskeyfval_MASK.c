
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GJSON ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ,char const*,float,...) ;

__attribute__((used)) static void
FUNC_1 (GJSON * VAR_3, const char *VAR_4, float VAR_5, int VAR_6, int VAR_7)
{
  if (!VAR_7)
    FUNC_0 (VAR_3, "%.*s\"%s\": \"%4.2f\",%.*s", VAR_6, VAR_1, VAR_4, VAR_5, VAR_2, VAR_0);
  else
    FUNC_0 (VAR_3, "%.*s\"%s\": \"%4.2f\"", VAR_6, VAR_1, VAR_4, VAR_5);
}
