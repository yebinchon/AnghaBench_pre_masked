
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cstr; int* wstr; } ;
struct bwstring {size_t len; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 struct bwstring* FUNC_1 (int) ;

struct bwstring *
FUNC_2(size_t VAR_1)
{
 struct bwstring *VAR_2;

 if (VAR_0 == 1)
  VAR_2 = FUNC_1(sizeof(struct bwstring) + 1 + VAR_1);
 else
  VAR_2 = FUNC_1(sizeof(struct bwstring) +
      FUNC_0(VAR_1 + 1));
 VAR_2->len = VAR_1;

 if (VAR_0 == 1)
  VAR_2->data.cstr[VAR_2->len] = '\0';
 else
  VAR_2->data.wstr[VAR_2->len] = L'\0';

 return (VAR_2);
}
