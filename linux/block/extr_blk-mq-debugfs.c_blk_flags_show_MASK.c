
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int flags ;


 unsigned long const FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char const* const) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, const unsigned long VAR_2,
     const char *const *VAR_3, int VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < sizeof(VAR_2) * VAR_0; VAR_6++) {
  if (!(VAR_2 & FUNC_0(VAR_6)))
   continue;
  if (VAR_5)
   FUNC_2(VAR_1, "|");
  VAR_5 = 1;
  if (VAR_6 < VAR_4 && VAR_3[VAR_6])
   FUNC_2(VAR_1, VAR_3[VAR_6]);
  else
   FUNC_1(VAR_1, "%d", VAR_6);
 }
 return 0;
}
