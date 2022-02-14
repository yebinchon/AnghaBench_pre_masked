
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cstr; int* wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;

void
FUNC_0(struct bwstring *VAR_1, size_t VAR_2)
{

 if (VAR_1 && VAR_2 != VAR_1->len && VAR_2 <= VAR_1->len) {
  VAR_1->len = VAR_2;
  if (VAR_0 == 1)
   VAR_1->data.cstr[VAR_2] = '\0';
  else
   VAR_1->data.wstr[VAR_2] = L'\0';
 }
}
