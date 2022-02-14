
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int dev; int regmap; } ;
struct seq_file {struct ti_sn_bridge* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;
 int FUNC_3 (struct seq_file*,char*,unsigned int,unsigned int) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct ti_sn_bridge *VAR_2 = VAR_0->private;
 unsigned int VAR_3, VAR_4;

 FUNC_4(VAR_0, "STATUS REGISTERS:\n");

 FUNC_0(VAR_2->dev);


 for (VAR_3 = 0xf0; VAR_3 <= 0xf8; VAR_3++) {
  FUNC_2(VAR_2->regmap, VAR_3, &VAR_4);
  FUNC_3(VAR_0, "[0x%02x] = 0x%08x\n", VAR_3, VAR_4);
 }

 FUNC_1(VAR_2->dev);

 return 0;
}
