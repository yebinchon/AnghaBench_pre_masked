
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,int) ;
 size_t FUNC_2 (struct seq_file*,char**) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 loff_t *VAR_4 = VAR_3;
 char *VAR_5;
 u64 *VAR_6 = (u64 *)&VAR_1;
 size_t VAR_7 = FUNC_2(VAR_2, &VAR_5);

 if (VAR_7 < sizeof(u64))
  return VAR_0;

 if (*VAR_4 == 0)
  *(u64 *)VAR_5 = FUNC_0();
 else
  *(u64 *)VAR_5 = VAR_6[*VAR_4];
 FUNC_1(VAR_2, sizeof(u64));
 return 0;
}
