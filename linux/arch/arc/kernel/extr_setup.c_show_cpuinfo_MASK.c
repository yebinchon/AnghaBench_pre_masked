
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int,char*,int ) ;
 char* FUNC_3 (int,char*,int ) ;
 char* FUNC_4 (int,char*,int ) ;
 char* FUNC_5 (int,char*,int ) ;
 char* FUNC_6 () ;
 struct clk* FUNC_7 (struct device*,int *) ;
 unsigned long FUNC_8 (struct clk*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned long) ;
 struct device* FUNC_11 (int) ;
 int VAR_3 ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_14(struct seq_file *VAR_4, void *VAR_5)
{
 char *VAR_6;
 int VAR_7 = FUNC_12(VAR_5);
 struct device *VAR_8 = FUNC_11(VAR_7);
 struct clk *VAR_9;
 unsigned long VAR_10 = 0;

 if (!FUNC_9(VAR_7)) {
  FUNC_13(VAR_4, "processor [%d]\t: Offline\n", VAR_7);
  goto done;
 }

 VAR_6 = (char *)FUNC_1(VAR_0);
 if (!VAR_6)
  goto done;

 FUNC_13(VAR_4, FUNC_3(VAR_7, VAR_6, VAR_2));

 VAR_9 = FUNC_7(VAR_8, ((void*)0));
 if (FUNC_0(VAR_9)) {
  FUNC_13(VAR_4, "CPU speed \t: Cannot get clock for processor [%d]\n",
      VAR_7);
 } else {
  VAR_10 = FUNC_8(VAR_9);
 }
 if (VAR_10)
  FUNC_13(VAR_4, "CPU speed\t: %lu.%02lu Mhz\n",
      VAR_10 / 1000000, (VAR_10 / 10000) % 100);

 FUNC_13(VAR_4, "Bogo MIPS\t: %lu.%02lu\n",
     VAR_3 / (500000 / VAR_1),
     (VAR_3 / (5000 / VAR_1)) % 100);

 FUNC_13(VAR_4, FUNC_5(VAR_7, VAR_6, VAR_2));
 FUNC_13(VAR_4, FUNC_2(VAR_7, VAR_6, VAR_2));
 FUNC_13(VAR_4, FUNC_4(VAR_7, VAR_6, VAR_2));
 FUNC_13(VAR_4, FUNC_6());

 FUNC_10((unsigned long)VAR_6);
done:
 FUNC_13(VAR_4, "\n");

 return 0;
}
