
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_3;

 FUNC_1(VAR_2, "usage: %s [-i device] [flags]\n", VAR_1);
 FUNC_1(VAR_2, "where flags are:\n");
 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++)
  FUNC_3("%s\n", VAR_0[VAR_3].name);
 FUNC_0(-1);
}
