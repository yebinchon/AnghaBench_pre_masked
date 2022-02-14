
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_directory {struct object_directory* next; } ;
struct TYPE_7__ {TYPE_2__* objects; } ;
struct TYPE_6__ {TYPE_1__* odb; } ;
struct TYPE_5__ {struct object_directory* next; } ;


 scalar_t__ FUNC_0 (struct object_directory*,struct object_id const*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_1, int VAR_2)
{
 struct object_directory *VAR_3;

 FUNC_1(VAR_0);
 for (VAR_3 = VAR_0->objects->odb->next; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_3, VAR_1, VAR_2))
   return 1;
 }
 return 0;
}
