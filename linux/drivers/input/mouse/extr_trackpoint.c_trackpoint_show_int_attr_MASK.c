
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trackpoint_data {int dummy; } ;
struct trackpoint_attr_data {int field_offset; scalar_t__ inverted; } ;
struct psmouse {struct trackpoint_data* private; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_0,
     void *VAR_1, char *VAR_2)
{
 struct trackpoint_data *VAR_3 = VAR_0->private;
 struct trackpoint_attr_data *VAR_4 = VAR_1;
 u8 VAR_5 = *(u8 *)((void *)VAR_3 + VAR_4->field_offset);

 if (VAR_4->inverted)
  VAR_5 = !VAR_5;

 return FUNC_0(VAR_2, "%u\n", VAR_5);
}
