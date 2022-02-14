
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer_created; int name; int cmd; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,int,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(void *VAR_1)
{
 int VAR_2 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  FUNC_1(VAR_0[VAR_2].buffer_created !=
    FUNC_2(&VAR_0[VAR_2].cmd),
       "Test %d: \"%s\" failed\n", VAR_2, VAR_0[VAR_2].name);
 }

 return 0;
}
