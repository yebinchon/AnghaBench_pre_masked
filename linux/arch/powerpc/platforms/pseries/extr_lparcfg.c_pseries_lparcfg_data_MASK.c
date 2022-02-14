
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int processorCount; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*) ;
 int FUNC_7 () ;
 int VAR_1 ;
 struct device_node* FUNC_8 (char*) ;
 int * FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct seq_file*) ;
 int FUNC_12 (struct seq_file*) ;
 int FUNC_13 (struct seq_file*) ;
 int FUNC_14 (struct seq_file*) ;
 int FUNC_15 (struct seq_file*) ;
 int FUNC_16 (struct seq_file*) ;
 int FUNC_17 (struct seq_file*,char*,int) ;
 int FUNC_18 (struct seq_file*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_19(struct seq_file *VAR_3, void *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct device_node *VAR_7;
 const __be32 *VAR_8 = ((void*)0);

 VAR_7 = FUNC_8("/rtas");
 if (VAR_7)
  VAR_8 = FUNC_9(VAR_7, "ibm,lrdr-capacity", ((void*)0));

 if (VAR_8 == ((void*)0)) {
  VAR_5 = VAR_2->processorCount;
 } else {
  VAR_5 = FUNC_0(VAR_8 + 4);
 }
 FUNC_10(VAR_7);

 VAR_6 = FUNC_4();

 if (FUNC_1(VAR_0)) {

  FUNC_15(VAR_3);
  FUNC_14(VAR_3);
  FUNC_12(VAR_3);
  FUNC_13(VAR_3);
  FUNC_16(VAR_3);
  FUNC_18(VAR_3);

  FUNC_17(VAR_3, "purr=%ld\n", FUNC_3());
  FUNC_17(VAR_3, "tbr=%ld\n", FUNC_7());
 } else {

  FUNC_17(VAR_3, "system_active_processors=%d\n",
      VAR_5);

  FUNC_17(VAR_3, "system_potential_processors=%d\n",
      VAR_5);

  FUNC_17(VAR_3, "partition_max_entitled_capacity=%d\n",
      VAR_5 * 100);

  FUNC_17(VAR_3, "partition_entitled_capacity=%d\n",
      VAR_6 * 100);
 }

 FUNC_17(VAR_3, "partition_active_processors=%d\n",
     VAR_6);

 FUNC_17(VAR_3, "partition_potential_processors=%d\n",
     VAR_5);

 FUNC_17(VAR_3, "shared_processor_mode=%d\n",
     FUNC_5(FUNC_2()));




 FUNC_11(VAR_3);
 FUNC_6(VAR_3);

 return 0;
}
