
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ber_element*) ;
 int FUNC_1 (struct ber_element*,int *) ;
 int VAR_1 ;
 struct ber_element* FUNC_2 (struct ber_element*,char**) ;

__attribute__((used)) static struct ber_element *
FUNC_3(struct ber_element *VAR_2, char *VAR_3)
{
 struct ber_element *VAR_4;
 char *VAR_5;

 VAR_5 = VAR_3;

 if (VAR_5 == ((void*)0) || *VAR_5 == '\0') {
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 if ((VAR_4 = FUNC_2(VAR_2, &VAR_5)) == ((void*)0))
  return (((void*)0));

 if (*VAR_5 != '\0') {
  FUNC_0(VAR_4);
  FUNC_1(VAR_2, ((void*)0));
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 return (VAR_4);
}
