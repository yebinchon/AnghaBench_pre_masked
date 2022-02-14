
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cmdname_help {int category; int * name; } ;


 int FUNC_0 (struct cmdname_help*,int) ;
 int FUNC_1 (struct cmdname_help*) ;
 int FUNC_2 (char*) ;
 struct cmdname_help* VAR_0 ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct cmdname_help **VAR_1, uint32_t VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct cmdname_help *VAR_5;

 if (FUNC_1(VAR_0) == 0)
  FUNC_2("empty command_list[] is a sign of broken generate-cmdlist.sh");

 FUNC_0(VAR_5, FUNC_1(VAR_0) + 1);

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
  const struct cmdname_help *VAR_6 = VAR_0 + VAR_3;

  if (!(VAR_6->category & VAR_2))
   continue;

  VAR_5[VAR_4] = *VAR_6;
  VAR_5[VAR_4].name = FUNC_3(VAR_6->name, VAR_6->category);

  VAR_4++;
 }
 VAR_5[VAR_4].name = ((void*)0);
 *VAR_1 = VAR_5;
}
