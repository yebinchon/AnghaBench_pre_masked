
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {size_t ph_data; } ;
typedef TYPE_1__ pal_hints_u_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct seq_file*,int*,int) ;
 scalar_t__ FUNC_1 (unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;
 scalar_t__ FUNC_3 (unsigned long*,TYPE_1__*) ;
 char** VAR_1 ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2)
{
 u64 VAR_3[2];
 u64 VAR_4;
 unsigned long VAR_5;
 pal_hints_u_t VAR_6;
 unsigned long VAR_7, VAR_8;
 static const char * const VAR_9[] = {
  "Implemented AR(s)",
  "AR(s) with read side-effects",
  "Implemented CR(s)",
  "CR(s) with read side-effects",
 };

 for(VAR_4=0; VAR_4 < 4; VAR_4++) {
  if (FUNC_2(VAR_4, &VAR_3[0], &VAR_3[1]) != 0)
   return 0;
  FUNC_4(VAR_2, "%-32s : ", VAR_9[VAR_4]);
  FUNC_0(VAR_2, VAR_3, 128);
  FUNC_5(VAR_2, '\n');
 }

 if (FUNC_3(&VAR_5, &VAR_6) == 0)
  FUNC_4(VAR_2,
      "RSE stacked physical registers   : %ld\n"
      "RSE load/store hints             : %ld (%s)\n",
      VAR_5, VAR_6.ph_data,
      VAR_6.ph_data < VAR_0 ? VAR_1[VAR_6.ph_data]: "(??)");

 if (FUNC_1(&VAR_7, &VAR_8))
  return 0;

 FUNC_4(VAR_2,
     "Instruction debug register pairs : %ld\n"
     "Data debug register pairs        : %ld\n", VAR_7, VAR_8);

 return 0;
}
