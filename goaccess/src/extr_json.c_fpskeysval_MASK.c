
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int ,char const*,char const*,...) ;
 int VAR_2 ;

void
FUNC_1 (FILE * VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
  if (!VAR_7)
    FUNC_0 (VAR_3, "%.*s\"%s\": \"%s\",%.*s", VAR_6, VAR_1, VAR_4, VAR_5, VAR_2, VAR_0);
  else
    FUNC_0 (VAR_3, "%.*s\"%s\": \"%s\"", VAR_6, VAR_1, VAR_4, VAR_5);
}
