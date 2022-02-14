
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {scalar_t__ be_type; struct ber_element* be_next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ber_element*,char**) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char*) ;

char **
FUNC_4(struct ber_element *VAR_1)
{
 struct ber_element *VAR_2;
 int VAR_3;
 char **VAR_4;
 char *VAR_5;

 if (VAR_1->be_type != VAR_0)
  return ((void*)0);

 for (VAR_2 = VAR_1, VAR_3 = 1; VAR_3 > 0 && VAR_2 != ((void*)0) && VAR_2->be_type ==
     VAR_0; VAR_2 = VAR_2->be_next, VAR_3++)
  ;
 if (VAR_3 == 1)
  return ((void*)0);

 if ((VAR_4 = FUNC_1(VAR_3 + 1, sizeof(char *))) == ((void*)0))
  return ((void*)0);

 for (VAR_2 = VAR_1, VAR_3 = 0; VAR_2 != ((void*)0) && VAR_2->be_type == VAR_0;
     VAR_2 = VAR_2->be_next) {

  FUNC_0(VAR_2, &VAR_5);
  VAR_4[VAR_3] = FUNC_3(VAR_5);
  if (VAR_4[VAR_3] != ((void*)0))
   VAR_3++;

 }
 if (VAR_3 == 0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 VAR_4[VAR_3] = ((void*)0);

 return VAR_4;
}
