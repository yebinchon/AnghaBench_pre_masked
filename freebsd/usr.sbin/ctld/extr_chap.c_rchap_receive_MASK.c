
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchap {int dummy; } ;


 int FUNC_0 (char const*,void**,size_t*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct rchap*,unsigned char,void*,size_t) ;
 unsigned char FUNC_4 (char const*,int *,int) ;

int
FUNC_5(struct rchap *VAR_0, const char *VAR_1, const char *VAR_2)
{
 unsigned char VAR_3;
 void *VAR_4;
 size_t VAR_5;

 int VAR_6;

 VAR_3 = FUNC_4(VAR_1, ((void*)0), 10);

 VAR_6 = FUNC_0(VAR_2, &VAR_4, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_2("got incorrectly encoded CHAP challenge \"%s\"",
      VAR_2);
  return (1);
 }

 FUNC_3(VAR_0, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_4);

 return (0);
}
