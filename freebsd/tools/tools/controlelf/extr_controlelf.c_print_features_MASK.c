
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* alias; char* desc; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 size_t VAR_1;

 FUNC_1("Known features are:\n");
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); ++VAR_1)
  FUNC_1("%s\t\t %s\n", VAR_0[VAR_1].alias,
      VAR_0[VAR_1].desc);
}
