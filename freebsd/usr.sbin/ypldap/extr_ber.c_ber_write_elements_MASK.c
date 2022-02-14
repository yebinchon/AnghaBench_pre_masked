
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;
struct ber {int fd; int * br_wbuf; int * br_wptr; int br_wend; } ;


 int FUNC_0 (char*,size_t) ;
 size_t FUNC_1 (struct ber_element*) ;
 int FUNC_2 (struct ber*,struct ber_element*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int,int *,size_t) ;

int
FUNC_6(struct ber *VAR_0, struct ber_element *VAR_1)
{
 size_t VAR_2;


 VAR_2 = FUNC_1(VAR_1);
 FUNC_0("write ber element of %zd bytes length\n", VAR_2);

 if (VAR_0->br_wbuf != ((void*)0) && VAR_0->br_wbuf + VAR_2 > VAR_0->br_wend) {
  FUNC_3(VAR_0->br_wbuf);
  VAR_0->br_wbuf = ((void*)0);
 }
 if (VAR_0->br_wbuf == ((void*)0)) {
  if ((VAR_0->br_wbuf = FUNC_4(VAR_2)) == ((void*)0))
   return -1;
  VAR_0->br_wend = *(VAR_0->br_wbuf + VAR_2);
 }


 VAR_0->br_wptr = VAR_0->br_wbuf;

 if (FUNC_2(VAR_0, VAR_1) == -1)
  return -1;


 if (VAR_0->fd != -1)
  return FUNC_5(VAR_0->fd, VAR_0->br_wbuf, VAR_2);

 return (VAR_2);
}
