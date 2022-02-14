
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_6, void *VAR_7)
{




 unsigned long VAR_8 = VAR_3 << 3;

 FUNC_0(VAR_6, "\nDMA Mapping Area size    : %d bytes (%ld pages)\n",
  VAR_0, VAR_8);

 FUNC_0(VAR_6, "Resource bitmap : %d bytes\n", VAR_3);

 FUNC_2(VAR_6, "     	  total:    free:    used:   % used:\n");
 FUNC_0(VAR_6, "blocks  %8d %8ld %8ld %8ld%%\n", VAR_3,
  VAR_3 - VAR_4, VAR_4,
  (VAR_4 * 100) / VAR_3);

 FUNC_0(VAR_6, "pages   %8ld %8ld %8ld %8ld%%\n", VAR_8,
  VAR_8 - VAR_5, VAR_5,
  (VAR_5 * 100 / VAR_8));
 FUNC_1(VAR_6, '\n');
 return 0;
}
