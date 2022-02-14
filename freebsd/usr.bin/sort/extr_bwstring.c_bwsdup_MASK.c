
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wstr; int cstr; } ;
struct bwstring {int len; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct bwstring* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

struct bwstring *
FUNC_3(const struct bwstring *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (((void*)0));
 else {
  struct bwstring *VAR_2 = FUNC_1(VAR_1->len);

  if (VAR_0 == 1)
   FUNC_2(VAR_2->data.cstr, VAR_1->data.cstr, (VAR_1->len));
  else
   FUNC_2(VAR_2->data.wstr, VAR_1->data.wstr,
       FUNC_0(VAR_1->len));

  return (VAR_2);
 }
}
