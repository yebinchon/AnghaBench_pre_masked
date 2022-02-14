
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct punit_device* private; } ;
struct punit_device {int sss_pos; scalar_t__ name; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 u32 VAR_5;
 struct punit_device *VAR_6 = VAR_3->private;
 int VAR_7;
 int VAR_8;

 FUNC_2(VAR_3, "\n\nPUNIT NORTH COMPLEX DEVICES :\n");
 while (VAR_6->name) {
  VAR_8 = FUNC_0(VAR_0, VAR_1,
           VAR_6->reg, &VAR_5);
  if (VAR_8) {
   FUNC_1(VAR_3, "%9s : Read Failed\n",
       VAR_6->name);
  } else {
   VAR_7 = (VAR_5 >> VAR_6->sss_pos) & 3;
   FUNC_1(VAR_3, "%9s : %s\n", VAR_6->name,
       VAR_2[VAR_7]);
  }
  VAR_6++;
 }

 return 0;
}
