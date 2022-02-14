
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int name; } ;
typedef enum dfl_id_type { ____Placeholder_dfl_id_type } dfl_id_type ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static enum dfl_id_type FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (!FUNC_1(VAR_1[VAR_3].name, VAR_2->name))
   return VAR_3;

 return VAR_0;
}
