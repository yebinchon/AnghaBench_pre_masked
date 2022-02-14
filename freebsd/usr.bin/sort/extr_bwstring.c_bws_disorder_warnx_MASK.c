
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wstr; int cstr; } ;
struct bwstring {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,size_t,int ) ;

void
FUNC_1(struct bwstring *VAR_1, const char *VAR_2, size_t VAR_3)
{

 if (VAR_0 == 1)
  FUNC_0("%s:%zu: disorder: %s", VAR_2, VAR_3 + 1, VAR_1->data.cstr);
 else
  FUNC_0("%s:%zu: disorder: %ls", VAR_2, VAR_3 + 1, VAR_1->data.wstr);
}
