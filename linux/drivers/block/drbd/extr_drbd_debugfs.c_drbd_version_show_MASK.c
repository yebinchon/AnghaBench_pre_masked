
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 FUNC_1(VAR_4, "# %s\n", FUNC_0());
 FUNC_1(VAR_4, "VERSION=%s\n", VAR_3);
 FUNC_1(VAR_4, "API_VERSION=%u\n", VAR_0);
 FUNC_1(VAR_4, "PRO_VERSION_MIN=%u\n", VAR_2);
 FUNC_1(VAR_4, "PRO_VERSION_MAX=%u\n", VAR_1);
 return 0;
}
