
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct convert_driver {int required; int process; int clean; int smudge; struct convert_driver* next; int * name; } ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char const*,int) ;
 struct convert_driver* VAR_0 ;
 struct convert_driver** VAR_1 ;
 struct convert_driver* FUNC_5 (int,int) ;
 int * FUNC_6 (char const*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 const char *VAR_5, *VAR_6;
 int VAR_7;
 struct convert_driver *VAR_8;





 if (FUNC_2(VAR_2, "filter", &VAR_6, &VAR_7, &VAR_5) < 0 || !VAR_6)
  return 0;
 for (VAR_8 = VAR_0; VAR_8; VAR_8 = VAR_8->next)
  if (!FUNC_4(VAR_8->name, VAR_6, VAR_7) && !VAR_8->name[VAR_7])
   break;
 if (!VAR_8) {
  VAR_8 = FUNC_5(1, sizeof(struct convert_driver));
  VAR_8->name = FUNC_6(VAR_6, VAR_7);
  *VAR_1 = VAR_8;
  VAR_1 = &(VAR_8->next);
 }
 if (!FUNC_3("smudge", VAR_5))
  return FUNC_1(&VAR_8->smudge, VAR_2, VAR_3);

 if (!FUNC_3("clean", VAR_5))
  return FUNC_1(&VAR_8->clean, VAR_2, VAR_3);

 if (!FUNC_3("process", VAR_5))
  return FUNC_1(&VAR_8->process, VAR_2, VAR_3);

 if (!FUNC_3("required", VAR_5)) {
  VAR_8->required = FUNC_0(VAR_2, VAR_3);
  return 0;
 }

 return 0;
}
