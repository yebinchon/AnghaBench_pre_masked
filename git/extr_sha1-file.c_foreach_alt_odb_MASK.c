
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct object_directory {struct object_directory* next; } ;
typedef int (* alt_odb_fn ) (struct object_directory*,void*) ;
struct TYPE_7__ {TYPE_2__* objects; } ;
struct TYPE_6__ {TYPE_1__* odb; } ;
struct TYPE_5__ {struct object_directory* next; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;

int FUNC_1(alt_odb_fn VAR_1, void *VAR_2)
{
 struct object_directory *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_0);
 for (VAR_3 = VAR_0->objects->odb->next; VAR_3; VAR_3 = VAR_3->next) {
  VAR_4 = VAR_1(VAR_3, VAR_2);
  if (VAR_4)
   break;
 }
 return VAR_4;
}
