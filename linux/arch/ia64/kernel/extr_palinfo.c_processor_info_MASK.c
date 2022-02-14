
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (struct seq_file*,int,int,int,int) ;
 int FUNC_1 (int*,int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0)
{
 u64 VAR_1=1, VAR_2=1, VAR_3=1, VAR_4=0;
 s64 VAR_5;

 do {
  VAR_5 = FUNC_1(&VAR_1, &VAR_2, &VAR_3,
      VAR_4);
  if (VAR_5 < 0)
   return 0;

  if (VAR_5 == 1) {
   VAR_4++;
   continue;
  }

  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_4++;
 } while(1);

 return 0;
}
