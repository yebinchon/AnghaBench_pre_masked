
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct trackpoint_data {int dummy; } ;
struct trackpoint_attr_data {int field_offset; int command; } ;
struct psmouse {int ps2dev; struct trackpoint_data* private; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_0, void *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct trackpoint_data *VAR_4 = VAR_0->private;
 struct trackpoint_attr_data *VAR_5 = VAR_1;
 u8 *VAR_6 = (void *)VAR_4 + VAR_5->field_offset;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_6 = VAR_7;
 VAR_8 = FUNC_1(&VAR_0->ps2dev, VAR_5->command, VAR_7);

 return VAR_8 ?: VAR_3;
}
