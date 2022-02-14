
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct evbuffer* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct evbuffer*) ;
 int FUNC_5 (struct evbuffer*,char*,int) ;

__attribute__((used)) static int
FUNC_6(BIO *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct evbuffer *VAR_4;

 FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;
 if (!FUNC_1(VAR_0))
  return -1;

 VAR_4 = FUNC_3(FUNC_1(VAR_0));
 if (FUNC_4(VAR_4) == 0) {

  FUNC_2(VAR_0);
  return -1;
 } else {
  VAR_3 = FUNC_5(VAR_4, VAR_1, VAR_2);
 }

 return VAR_3;
}
