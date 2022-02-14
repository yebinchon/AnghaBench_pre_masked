
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; int value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 size_t VAR_2;

 FUNC_0(VAR_1, "known ELF types are: ");
 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++)
  FUNC_0(VAR_1, "%s(%u) ", VAR_0[VAR_2].str,
      VAR_0[VAR_2].value);
 FUNC_0(VAR_1, "\n");
}
