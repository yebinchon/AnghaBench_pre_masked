
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linear_c {TYPE_1__* dev; scalar_t__ start; } ;
struct dm_target {scalar_t__ private; } ;
typedef int status_type_t ;
struct TYPE_2__ {char* name; } ;




 int FUNC_0 (char*,unsigned int,char*,char*,unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
     unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct linear_c *VAR_5 = (struct linear_c *) VAR_0->private;

 switch (VAR_1) {
 case 129:
  VAR_3[0] = '\0';
  break;

 case 128:
  FUNC_0(VAR_3, VAR_4, "%s %llu", VAR_5->dev->name,
    (unsigned long long)VAR_5->start);
  break;
 }
}
