
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, char *VAR_1[], int VAR_2,
    u64 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_3++)
  FUNC_0(VAR_0, "%26s:\t%llu\n", VAR_1[VAR_4], *VAR_3);
}
