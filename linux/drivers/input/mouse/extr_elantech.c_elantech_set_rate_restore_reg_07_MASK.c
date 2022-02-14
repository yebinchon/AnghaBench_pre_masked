
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; } ;
struct elantech_data {int reg_07; int (* original_set_rate ) (struct psmouse*,unsigned int) ;} ;


 scalar_t__ FUNC_0 (struct psmouse*,int,int ) ;
 int FUNC_1 (struct psmouse*,char*) ;
 int FUNC_2 (struct psmouse*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_0,
  unsigned int VAR_1)
{
 struct elantech_data *VAR_2 = VAR_0->private;

 VAR_2->original_set_rate(VAR_0, VAR_1);
 if (FUNC_0(VAR_0, 0x07, VAR_2->reg_07))
  FUNC_1(VAR_0, "restoring reg_07 failed\n");
}
