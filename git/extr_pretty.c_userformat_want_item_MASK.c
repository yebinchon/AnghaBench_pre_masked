
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userformat_want {int notes; int source; } ;
struct strbuf {int dummy; } ;



__attribute__((used)) static size_t FUNC_0(struct strbuf *VAR_0, const char *VAR_1,
       void *VAR_2)
{
 struct userformat_want *VAR_3 = VAR_2;

 if (*VAR_1 == '+' || *VAR_1 == '-' || *VAR_1 == ' ')
  VAR_1++;

 switch (*VAR_1) {
 case 'N':
  VAR_3->notes = 1;
  break;
 case 'S':
  VAR_3->source = 1;
  break;
 }
 return 0;
}
