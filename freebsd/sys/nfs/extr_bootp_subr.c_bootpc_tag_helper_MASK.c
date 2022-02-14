
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootpc_tagcontext {int badtag; int badopt; scalar_t__ taglen; int foundopt; scalar_t__ buf; unsigned char overload; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (scalar_t__,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_1(struct bootpc_tagcontext *VAR_4,
    unsigned char *VAR_5, int VAR_6, int VAR_7)
{
 unsigned char *VAR_8;
 unsigned char *VAR_9;
 unsigned char VAR_10;

 if (VAR_4->badtag != 0 || VAR_4->badopt != 0)
  return;

 VAR_8 = VAR_5;
 VAR_9 = VAR_8 + VAR_6;

 while (VAR_8 < VAR_9) {
  VAR_10 = *VAR_8++;
  if (VAR_10 == VAR_3)
   continue;
  if (VAR_10 == VAR_0)
   return;
  if (VAR_8 >= VAR_9 || VAR_8 + *VAR_8 + 1 > VAR_9) {
   VAR_4->badopt = 1;
   return;
  }
  VAR_6 = *VAR_8++;
  if (VAR_10 == VAR_7) {
   if (VAR_4->taglen + VAR_6 > VAR_1) {
    VAR_4->badtag = 1;
    return;
   }
   VAR_4->foundopt = 1;
   if (VAR_6 > 0)
    FUNC_0(VAR_4->buf + VAR_4->taglen,
           VAR_8, VAR_6);
   VAR_4->taglen += VAR_6;
  }
  if (VAR_10 == VAR_2)
   VAR_4->overload = *VAR_8;

  VAR_8 += VAR_6;
 }
}
