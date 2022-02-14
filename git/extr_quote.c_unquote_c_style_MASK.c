
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; } ;


 int FUNC_0 (struct strbuf*,char const*,size_t) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,size_t) ;
 size_t FUNC_3 (char const*,char*) ;

int FUNC_4(struct strbuf *VAR_0, const char *VAR_1, const char **VAR_2)
{
 size_t VAR_3 = VAR_0->len, VAR_4;
 int VAR_5, VAR_6;

 if (*VAR_1++ != '"')
  return -1;

 for (;;) {
  VAR_4 = FUNC_3(VAR_1, "\"\\");
  FUNC_0(VAR_0, VAR_1, VAR_4);
  VAR_1 += VAR_4;

  switch (*VAR_1++) {
    case '"':
   if (VAR_2)
    *VAR_2 = VAR_1;
   return 0;
    case '\\':
   break;
    default:
   goto error;
  }

  switch ((VAR_5 = *VAR_1++)) {
  case 'a': VAR_5 = '\a'; break;
  case 'b': VAR_5 = '\b'; break;
  case 'f': VAR_5 = '\f'; break;
  case 'n': VAR_5 = '\n'; break;
  case 'r': VAR_5 = '\r'; break;
  case 't': VAR_5 = '\t'; break;
  case 'v': VAR_5 = '\v'; break;

  case '\\': case '"':
   break;


  case '0': case '1': case '2': case '3':
     VAR_6 = ((VAR_5 - '0') << 6);
   if ((VAR_5 = *VAR_1++) < '0' || '7' < VAR_5)
    goto error;
     VAR_6 |= ((VAR_5 - '0') << 3);
   if ((VAR_5 = *VAR_1++) < '0' || '7' < VAR_5)
    goto error;
     VAR_6 |= (VAR_5 - '0');
     VAR_5 = VAR_6;
     break;
    default:
   goto error;
   }
  FUNC_1(VAR_0, VAR_5);
  }

  error:
 FUNC_2(VAR_0, VAR_3);
 return -1;
}
