
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fileusage {int fu_id; int fu_name; struct fileusage* fu_next; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 struct fileusage*** VAR_1 ;
 int* VAR_2 ;
 struct fileusage* FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;

struct fileusage *
FUNC_6(u_long VAR_3, int VAR_4, char *VAR_5)
{
 struct fileusage *VAR_6, **VAR_7;
 int VAR_8;

 if ((VAR_6 = FUNC_3(VAR_3, VAR_4)))
  return (VAR_6);
 if (VAR_5)
  VAR_8 = FUNC_5(VAR_5);
 else
  VAR_8 = 10;
 if ((VAR_6 = (struct fileusage *)FUNC_1(1, sizeof(*VAR_6) + VAR_8)) == ((void*)0))
  FUNC_2(1, "out of memory for fileusage structures");
 VAR_7 = &VAR_1[VAR_4][VAR_3 & (VAR_0 - 1)];
 VAR_6->fu_next = *VAR_7;
 *VAR_7 = VAR_6;
 VAR_6->fu_id = VAR_3;
 if (VAR_3 > VAR_2[VAR_4])
  VAR_2[VAR_4] = VAR_3;
 if (VAR_5) {
  FUNC_0(VAR_5, VAR_6->fu_name, VAR_8 + 1);
 } else {
  FUNC_4(VAR_6->fu_name, "%lu", VAR_3);
 }
 return (VAR_6);
}
