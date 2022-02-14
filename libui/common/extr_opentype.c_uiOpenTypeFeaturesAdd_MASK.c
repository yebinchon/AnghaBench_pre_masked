
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {int len; int cap; struct feature* data; } ;
typedef TYPE_1__ uiOpenTypeFeatures ;
struct feature {char a; char b; char c; char d; void* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct feature*,TYPE_1__*) ;
 struct feature FUNC_2 (char,char,char,char) ;
 int FUNC_3 (struct feature*,int,int,int ) ;
 scalar_t__ FUNC_4 (struct feature*,int ,char*) ;

void FUNC_5(uiOpenTypeFeatures *VAR_1, char VAR_2, char VAR_3, char VAR_4, char VAR_5, uint32_t VAR_6)
{
 struct feature *VAR_7;
 struct feature VAR_8;


 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7 = (struct feature *) FUNC_1(&VAR_8, VAR_1);
 if (VAR_7 != ((void*)0)) {
  VAR_7->value = VAR_6;
  return;
 }


 if (VAR_1->len == VAR_1->cap) {
  VAR_1->cap *= 2;
  VAR_1->data = (struct feature *) FUNC_4(VAR_1->data, FUNC_0(VAR_1->cap), "struct feature[]");
 }
 VAR_7 = VAR_1->data + VAR_1->len;
 VAR_7->a = VAR_2;
 VAR_7->b = VAR_3;
 VAR_7->c = VAR_4;
 VAR_7->d = VAR_5;
 VAR_7->value = VAR_6;

 VAR_1->len++;
 FUNC_3(VAR_1->data, VAR_1->len, sizeof (struct feature), VAR_0);
}
