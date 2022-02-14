
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;
struct ber {int dummy; } ;


 int FUNC_0 (char*,struct ber_element*) ;
 int FUNC_1 (struct ber_element*) ;
 struct ber_element* FUNC_2 (int ) ;
 int FUNC_3 (struct ber*,struct ber_element*) ;

struct ber_element *
FUNC_4(struct ber *VAR_0, struct ber_element *VAR_1)
{
 struct ber_element *VAR_2 = VAR_1;

 if (VAR_2 == ((void*)0)) {
  if ((VAR_2 = FUNC_2(0)) == ((void*)0))
   return ((void*)0);
 }

 FUNC_0("read ber elements, root %p\n", VAR_2);

 if (FUNC_3(VAR_0, VAR_2) == -1) {

  if (VAR_1 == ((void*)0))
   FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
