
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chap {int chap_response; } ;


 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct chap *VAR_0, void *VAR_1, size_t VAR_2)
{

 if (VAR_2 != sizeof(VAR_0->chap_response)) {
  FUNC_0("got CHAP response with invalid length; "
      "got %zd, should be %zd",
      VAR_2, sizeof(VAR_0->chap_response));
  return (1);
 }

 FUNC_1(VAR_0->chap_response, VAR_1, VAR_2);
 return (0);
}
