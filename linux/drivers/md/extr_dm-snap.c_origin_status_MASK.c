
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct dm_origin* private; } ;
struct dm_origin {TYPE_1__* dev; } ;
typedef int status_type_t ;
struct TYPE_2__ {char* name; } ;




 int FUNC_0 (char*,unsigned int,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
     unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct dm_origin *VAR_5 = VAR_0->private;

 switch (VAR_1) {
 case 129:
  VAR_3[0] = '\0';
  break;

 case 128:
  FUNC_0(VAR_3, VAR_4, "%s", VAR_5->dev->name);
  break;
 }
}
