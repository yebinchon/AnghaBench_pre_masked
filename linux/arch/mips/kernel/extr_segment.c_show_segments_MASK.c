
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char*,char*) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 unsigned int VAR_2;
 char VAR_3[42];

 FUNC_5(VAR_0, "Segment   Virtual    Size   Access Mode   Physical   Caching   EU\n");
 FUNC_5(VAR_0, "-------   -------    ----   -----------   --------   -------   --\n");

 VAR_2 = FUNC_1();
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   0      e0000000   512M      %s", VAR_3);

 VAR_2 >>= 16;
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   1      c0000000   512M      %s", VAR_3);

 VAR_2 = FUNC_2();
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   2      a0000000   512M      %s", VAR_3);

 VAR_2 >>= 16;
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   3      80000000   512M      %s", VAR_3);

 VAR_2 = FUNC_3();
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   4      40000000    1G       %s", VAR_3);

 VAR_2 >>= 16;
 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_0, "   5      00000000    1G       %s\n", VAR_3);

 return 0;
}
