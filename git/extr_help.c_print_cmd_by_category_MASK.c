
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cmdname_help {scalar_t__ name; } ;
struct category_description {char* desc; int category; } ;


 int FUNC_0 (struct cmdname_help*,int,int ) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (struct cmdname_help**,int ) ;
 int FUNC_3 (struct cmdname_help*) ;
 int FUNC_4 (struct cmdname_help*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(const struct category_description *VAR_1,
      int *VAR_2)
{
 struct cmdname_help *VAR_3;
 int VAR_4 = 0;
 int VAR_5, VAR_6 = 0;
 uint32_t VAR_7 = 0;

 for (VAR_5 = 0; VAR_1[VAR_5].desc; VAR_5++)
  VAR_7 |= VAR_1[VAR_5].category;

 FUNC_2(&VAR_3, VAR_7);

 for (VAR_5 = 0; VAR_3[VAR_5].name; VAR_5++, VAR_6++) {
  if (VAR_4 < FUNC_6(VAR_3[VAR_5].name))
   VAR_4 = FUNC_6(VAR_3[VAR_5].name);
 }
 FUNC_0(VAR_3, VAR_6, VAR_0);

 for (VAR_5 = 0; VAR_1[VAR_5].desc; VAR_5++) {
  uint32_t VAR_8 = VAR_1[VAR_5].category;
  const char *VAR_9 = VAR_1[VAR_5].desc;

  FUNC_5("\n%s\n", FUNC_1(VAR_9));
  FUNC_4(VAR_3, VAR_8, VAR_4);
 }
 FUNC_3(VAR_3);
 if (VAR_2)
  *VAR_2 = VAR_4;
}
