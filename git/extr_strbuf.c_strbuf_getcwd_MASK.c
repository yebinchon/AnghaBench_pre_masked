
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; int buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct strbuf *VAR_4)
{
 size_t VAR_5 = VAR_4->alloc;
 size_t VAR_6 = 128;

 for (;; VAR_6 *= 2) {
  FUNC_1(VAR_4, VAR_6);
  if (FUNC_0(VAR_4->buf, VAR_4->alloc)) {
   FUNC_4(VAR_4, FUNC_5(VAR_4->buf));
   return 0;
  }
  if (VAR_3 == VAR_0 && VAR_6 < VAR_2)
   continue;

  if (VAR_3 != VAR_1)
   break;
 }
 if (VAR_5 == 0)
  FUNC_2(VAR_4);
 else
  FUNC_3(VAR_4);
 return -1;
}
