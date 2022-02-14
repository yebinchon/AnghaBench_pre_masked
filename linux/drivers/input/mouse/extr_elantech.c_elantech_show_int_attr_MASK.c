
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; } ;
struct elantech_data {int dummy; } ;
struct elantech_attr_data {int field_offset; int reg; } ;
typedef int ssize_t ;


 int FUNC_0 (struct psmouse*,int ,unsigned char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_0, void *VAR_1,
     char *VAR_2)
{
 struct elantech_data *VAR_3 = VAR_0->private;
 struct elantech_attr_data *VAR_4 = VAR_1;
 unsigned char *VAR_5 = (unsigned char *) VAR_3 + VAR_4->field_offset;
 int VAR_6 = 0;

 if (VAR_4->reg)
  VAR_6 = FUNC_0(VAR_0, VAR_4->reg, VAR_5);

 return FUNC_1(VAR_2, "0x%02x\n", (VAR_4->reg && VAR_6) ? -1 : *VAR_5);
}
