
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_4__ {int plugged; } ;


 int FUNC_0 (TYPE_1__*,struct object_id*,int,size_t,int,char const*,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

int FUNC_2(struct object_id *VAR_1,
         int VAR_2, size_t VAR_3, enum object_type VAR_4,
         const char *VAR_5, unsigned VAR_6)
{
 int VAR_7 = FUNC_0(&VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 if (!VAR_0.plugged)
  FUNC_1(&VAR_0);
 return VAR_7;
}
