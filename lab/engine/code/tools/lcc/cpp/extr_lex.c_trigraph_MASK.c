
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* inp; char* inl; } ;
typedef TYPE_1__ Source ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*,int*,int) ;

int
FUNC_2(Source *VAR_1)
{
 int VAR_2;

 while (VAR_1->inp+2 >= VAR_1->inl && FUNC_0(VAR_1)!=VAR_0)
  ;
 if (VAR_1->inp[1]!='?')
  return 0;
 VAR_2 = 0;
 switch(VAR_1->inp[2]) {
 case '=':
  VAR_2 = '#'; break;
 case '(':
  VAR_2 = '['; break;
 case '/':
  VAR_2 = '\\'; break;
 case ')':
  VAR_2 = ']'; break;
 case '\'':
  VAR_2 = '^'; break;
 case '<':
  VAR_2 = '{'; break;
 case '!':
  VAR_2 = '|'; break;
 case '>':
  VAR_2 = '}'; break;
 case '-':
  VAR_2 = '~'; break;
 }
 if (VAR_2) {
  *VAR_1->inp = VAR_2;
  FUNC_1(VAR_1->inp+1, VAR_1->inp+3, VAR_1->inl-VAR_1->inp+2);
  VAR_1->inl -= 2;
 }
 return VAR_2;
}
