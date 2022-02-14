
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct feature* data; } ;
typedef TYPE_1__ uiOpenTypeFeatures ;
struct feature {int dummy; } ;
typedef int ptrdiff_t ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct feature*,TYPE_1__*) ;
 int FUNC_2 (struct feature*,struct feature*,int ) ;
 struct feature FUNC_3 (char,char,char,char) ;

void FUNC_4(uiOpenTypeFeatures *VAR_0, char VAR_1, char VAR_2, char VAR_3, char VAR_4)
{
 struct feature *VAR_5;
 struct feature VAR_6;
 ptrdiff_t VAR_7;
 size_t VAR_8;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = (struct feature *) FUNC_1(&VAR_6, VAR_0);
 if (VAR_5 == ((void*)0))
  return;

 VAR_7 = VAR_5 - VAR_0->data;
 VAR_8 = VAR_0->len - VAR_7 - 1;
 FUNC_2(VAR_5 + 1, VAR_5, FUNC_0(VAR_8));
 VAR_0->len--;
}
