
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {scalar_t__ len; scalar_t__ maxlen; int * buf; } ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_4(struct netbuf *VAR_2, const struct netbuf *VAR_3)
{
 FUNC_0(VAR_3->len <= VAR_3->maxlen);

 if (VAR_2->maxlen < VAR_3->len || VAR_2->buf == ((void*)0)) {
  FUNC_2(VAR_2->buf);
  if ((VAR_2->buf = FUNC_1(1, VAR_3->maxlen)) == ((void*)0))
   return (VAR_0);
  VAR_2->maxlen = VAR_3->maxlen;
 }

 VAR_2->len = VAR_3->len;
 FUNC_3(VAR_2->buf, VAR_3->buf, VAR_3->len);

 return (VAR_1);
}
