
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {struct elantech_data* private; } ;
struct TYPE_2__ {int hw_version; } ;
struct elantech_data {TYPE_1__ info; } ;
struct elantech_attr_data {int field_offset; int reg; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,int,unsigned char) ;
 int FUNC_1 (char const*,int,unsigned char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_2,
         void *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct elantech_data *VAR_6 = VAR_2->private;
 struct elantech_attr_data *VAR_7 = VAR_3;
 unsigned char *VAR_8 = (unsigned char *) VAR_6 + VAR_7->field_offset;
 unsigned char VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_4, 16, &VAR_9);
 if (VAR_10)
  return VAR_10;


 if (VAR_6->info.hw_version == 1) {
  if (VAR_7->reg == 0x10)

   VAR_9 |= VAR_0;
  else if (VAR_7->reg == 0x11)

   VAR_9 |= VAR_1;
 }

 if (!VAR_7->reg || FUNC_0(VAR_2, VAR_7->reg, VAR_9) == 0)
  *VAR_8 = VAR_9;

 return VAR_5;
}
