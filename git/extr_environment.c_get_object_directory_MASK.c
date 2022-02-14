
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* objects; } ;
struct TYPE_5__ {TYPE_1__* odb; } ;
struct TYPE_4__ {char* path; } ;


 int FUNC_0 (char*) ;
 TYPE_3__* VAR_0 ;

char *FUNC_1(void)
{
 if (!VAR_0->objects->odb)
  FUNC_0("git environment hasn't been setup");
 return VAR_0->objects->odb->path;
}
