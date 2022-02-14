
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evkeyvalq {int dummy; } ;
struct evkeyval {char* value; } ;


 struct evkeyval* FUNC_0 (struct evkeyvalq*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct evkeyvalq *VAR_1, char *VAR_2)
{
 struct evkeyval *VAR_3 = FUNC_0(VAR_1, VAR_0);
 char *VAR_4;
 size_t VAR_5, VAR_6;

 if (VAR_3 == ((void*)0))
  return (-1);

 VAR_5 = FUNC_4(VAR_3->value);


 while (*VAR_2 == ' ' || *VAR_2 == '\t')
  ++VAR_2;
 FUNC_1(VAR_2);

 VAR_6 = FUNC_4(VAR_2);

 VAR_4 = FUNC_3(VAR_3->value, VAR_5 + VAR_6 + 2);
 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_4[VAR_5] = ' ';
 FUNC_2(VAR_4 + VAR_5 + 1, VAR_2, VAR_6 + 1);
 VAR_3->value = VAR_4;

 return (0);
}
