
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; int buf; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (char const*,int ,size_t) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,size_t) ;

int FUNC_4(struct strbuf *VAR_3, const char *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_3->alloc;

 if (VAR_5 < 32)
  VAR_5 = 32;

 while (VAR_5 < VAR_1) {
  ssize_t VAR_7;

  FUNC_1(VAR_3, VAR_5);
  VAR_7 = FUNC_0(VAR_4, VAR_3->buf, VAR_5);
  if (VAR_7 < 0) {
   if (VAR_2 != VAR_0)
    break;
  } else if (VAR_7 < VAR_5) {
   FUNC_3(VAR_3, VAR_7);
   return 0;
  }


  VAR_5 *= 2;
 }
 if (VAR_6 == 0)
  FUNC_2(VAR_3);
 return -1;
}
