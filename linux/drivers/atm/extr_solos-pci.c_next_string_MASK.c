
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char* data; int len; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static char *FUNC_2(struct sk_buff *VAR_0)
{
 int VAR_1 = 0;
 char *VAR_2 = VAR_0->data;

 for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++) {
  if (VAR_2[VAR_1] == '\n') {
   VAR_2[VAR_1] = 0;
   FUNC_1(VAR_0, VAR_1 + 1);
   return VAR_2;
  }
  if (!FUNC_0(VAR_2[VAR_1]))
   return ((void*)0);
 }
 return ((void*)0);
}
