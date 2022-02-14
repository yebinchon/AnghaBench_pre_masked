
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check_item {char* value; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static const char *FUNC_7(struct attr_check_item *VAR_1)
{
 const char *VAR_2 = VAR_1->value;

 if (FUNC_2(VAR_2) || !FUNC_6(VAR_2))
  return ((void*)0);

 if (FUNC_1(VAR_2) || FUNC_0(VAR_2)) {
  FUNC_4(FUNC_3("true/false are no valid working-tree-encodings"));
 }


 if (FUNC_5(VAR_2, VAR_0))
  return ((void*)0);

 return VAR_2;
}
