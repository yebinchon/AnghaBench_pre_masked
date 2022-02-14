
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (struct strbuf*,int) ;
 int FUNC_1 (struct strbuf*,int ) ;
 struct strbuf* FUNC_2 (int) ;

__attribute__((used)) static struct strbuf *FUNC_3(const struct strbuf *VAR_0)
{

 int VAR_1, VAR_2 = 0, VAR_3 = 0;
 const char *VAR_4 = VAR_0->buf;
 struct strbuf *VAR_5 = FUNC_2(sizeof(struct strbuf));
 FUNC_1(VAR_5, VAR_0->len);

 while ((VAR_1 = *VAR_4++) != 0) {
  if (VAR_1 == '+')
   VAR_1 = 62;
  else if (VAR_1 == '/')
   VAR_1 = 63;
  else if ('A' <= VAR_1 && VAR_1 <= 'Z')
   VAR_1 -= 'A';
  else if ('a' <= VAR_1 && VAR_1 <= 'z')
   VAR_1 -= 'a' - 26;
  else if ('0' <= VAR_1 && VAR_1 <= '9')
   VAR_1 -= '0' - 52;
  else
   continue;
  switch (VAR_2++) {
  case 0:
   VAR_3 = (VAR_1 << 2);
   break;
  case 1:
   FUNC_0(VAR_5, (VAR_3 | (VAR_1 >> 4)));
   VAR_3 = (VAR_1 & 15) << 4;
   break;
  case 2:
   FUNC_0(VAR_5, (VAR_3 | (VAR_1 >> 2)));
   VAR_3 = (VAR_1 & 3) << 6;
   break;
  case 3:
   FUNC_0(VAR_5, (VAR_3 | VAR_1));
   VAR_3 = VAR_2 = 0;
   break;
  }
 }
 return VAR_5;
}
