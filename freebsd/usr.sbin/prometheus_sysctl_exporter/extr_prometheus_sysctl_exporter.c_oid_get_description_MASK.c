
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oiddescription {char* description; } ;
struct oid {int len; int id; } ;
typedef int lookup ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*,int ,int) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (int*,int,char**,size_t*,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(const struct oid *VAR_3, struct oiddescription *VAR_4)
{
 int VAR_5[VAR_0 + 2];
 char *VAR_6;
 size_t VAR_7;

 VAR_5[0] = 0;
 VAR_5[1] = 5;
 FUNC_1(VAR_5 + 2, VAR_3->id, VAR_3->len * sizeof(VAR_5[0]));
 VAR_7 = sizeof(VAR_4->description);
 if (FUNC_3(VAR_5, 2 + VAR_3->len, &VAR_4->description, &VAR_7, 0, 0) != 0) {
  if (VAR_2 == VAR_1)
   return (0);
  FUNC_0(1, "sysctl(oiddescr)");
 }

 VAR_6 = FUNC_2(VAR_4->description, '\n');
 if (VAR_6 != ((void*)0))
  *VAR_6 = '\0';

 return (*VAR_4->description != '\0');
}
