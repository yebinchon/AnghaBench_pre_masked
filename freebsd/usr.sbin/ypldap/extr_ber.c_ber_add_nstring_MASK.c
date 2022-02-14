
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {char* be_val; size_t be_len; int be_free; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 struct ber_element* FUNC_1 (int ) ;
 int FUNC_2 (struct ber_element*,struct ber_element*) ;
 char* FUNC_3 (int,size_t) ;
 int FUNC_4 (char*) ;

struct ber_element *
FUNC_5(struct ber_element *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct ber_element *VAR_4;
 char *VAR_5;

 if ((VAR_5 = FUNC_3(1, VAR_3)) == ((void*)0))
  return ((void*)0);
 if ((VAR_4 = FUNC_1(VAR_0)) == ((void*)0)) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_2, VAR_5, VAR_3);
 VAR_4->be_val = VAR_5;
 VAR_4->be_len = VAR_3;
 VAR_4->be_free = 1;

 FUNC_2(VAR_1, VAR_4);

 return VAR_4;
}
