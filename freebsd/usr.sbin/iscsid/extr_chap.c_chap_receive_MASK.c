
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chap {int dummy; } ;


 int FUNC_0 (char const*,void**,size_t*) ;
 int FUNC_1 (struct chap*,void*,size_t) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*,char const*) ;

int
FUNC_4(struct chap *VAR_0, const char *VAR_1)
{
 void *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_2, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_3("got incorrectly encoded CHAP response \"%s\"",
      VAR_1);
  return (1);
 }

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_2(VAR_2);

 return (VAR_4);
}
