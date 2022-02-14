
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_cmd {int cmp; char const* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct procstat_cmd* VAR_2 ;
 size_t FUNC_0 (struct procstat_cmd*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static const struct procstat_cmd *
FUNC_4(const char *VAR_3)
{
 const struct procstat_cmd *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_4 = ((void*)0);
 if ((VAR_6 = FUNC_2(VAR_3)) == 0)
  return (FUNC_4("basic"));
 VAR_8 = VAR_6 > 1 && FUNC_1(VAR_3 + VAR_6 - 1, "s") == 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {




  if (VAR_4 == ((void*)0) && (VAR_2[VAR_5].cmp & VAR_1))
   VAR_7 = FUNC_3(VAR_3, VAR_2[VAR_5].command, VAR_6 -
       ((VAR_2[VAR_5].cmp & VAR_0) && VAR_8 ? 1 : 0));
  else if ((VAR_2[VAR_5].cmp & VAR_0) && VAR_8 &&
      VAR_6 == FUNC_2(VAR_2[VAR_5].command) + 1)
   VAR_7 = FUNC_3(VAR_3, VAR_2[VAR_5].command, VAR_6 - 1);
  else
   VAR_7 = FUNC_1(VAR_3, VAR_2[VAR_5].command);
  if (VAR_7 == 0)
   VAR_4 = &VAR_2[VAR_5];
 }
 return (VAR_4);
}
