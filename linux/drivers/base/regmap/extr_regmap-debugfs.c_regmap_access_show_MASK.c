
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct regmap* private; } ;
struct regmap {int max_register; scalar_t__ reg_stride; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct regmap*,int) ;
 scalar_t__ FUNC_2 (struct regmap*,int) ;
 scalar_t__ FUNC_3 (struct regmap*,int) ;
 scalar_t__ FUNC_4 (struct regmap*,int) ;
 int FUNC_5 (struct seq_file*,char*,int,int,char,char,char,char) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct regmap *VAR_2 = VAR_0->private;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_2->max_register);

 for (VAR_3 = 0; VAR_3 <= VAR_2->max_register; VAR_3 += VAR_2->reg_stride) {

  if (!FUNC_2(VAR_2, VAR_3) && !FUNC_4(VAR_2, VAR_3))
   continue;


  FUNC_5(VAR_0, "%.*x: %c %c %c %c\n", VAR_4, VAR_3,
      FUNC_2(VAR_2, VAR_3) ? 'y' : 'n',
      FUNC_4(VAR_2, VAR_3) ? 'y' : 'n',
      FUNC_3(VAR_2, VAR_3) ? 'y' : 'n',
      FUNC_1(VAR_2, VAR_3) ? 'y' : 'n');
 }

 return 0;
}
