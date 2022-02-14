
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,int,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, int VAR_3,
       int *VAR_4, int *VAR_5)
{
 const char *VAR_6 = FUNC_1(VAR_2);
 int VAR_7, VAR_8, VAR_9 = VAR_3 + 1;

 VAR_7 = FUNC_2(VAR_6, VAR_9);
 if (VAR_7 >= 0)
  FUNC_3(FUNC_0("%.*s is in index"), VAR_9, VAR_6);

 VAR_7 = -1 - VAR_7;
 for (VAR_8 = VAR_7; VAR_8 < VAR_1; VAR_8++) {
  const char *VAR_10 = VAR_0[VAR_8]->name;
  if (FUNC_5(VAR_10, VAR_6, VAR_9))
   break;
 }
 if (VAR_6 != VAR_2)
  FUNC_4((char *)VAR_6);
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;
 return VAR_8 - VAR_7;
}
