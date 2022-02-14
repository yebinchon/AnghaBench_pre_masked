
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfl_entry {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pfl_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pfl_entry*,int ) ;
 int FUNC_3 (struct pfl_entry*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(void)
{
 struct pfl_entry *VAR_7;

 if (VAR_5 && VAR_6 <= VAR_1)
  return (0);

 while (!FUNC_0(&VAR_2)) {
  VAR_7 = FUNC_1(&VAR_2);
  FUNC_2(&VAR_2, VAR_7, VAR_0);
  FUNC_3(VAR_7);
 }
 VAR_4 = 0;

 if (FUNC_4(""))
  goto err;

 VAR_3 = FUNC_5(((void*)0));
 VAR_1 = VAR_6;

 return (0);

err:
 while (!FUNC_0(&VAR_2)) {
  VAR_7 = FUNC_1(&VAR_2);
  FUNC_2(&VAR_2, VAR_7, VAR_0);
  FUNC_3(VAR_7);
 }
 VAR_4 = 0;

 return (-1);
}
