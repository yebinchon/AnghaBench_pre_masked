
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cstr; char* wstr; } ;
struct bwstring {TYPE_1__ data; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,char*,char const*) ;

void
FUNC_1(FILE *VAR_1, struct bwstring *VAR_2, const char *VAR_3, const char *VAR_4)
{

 if (VAR_0 == 1)
  FUNC_0(VAR_1, "%s%s%s", VAR_3, VAR_2->data.cstr, VAR_4);
 else
  FUNC_0(VAR_1, "%s%S%s", VAR_3, VAR_2->data.wstr, VAR_4);
}
