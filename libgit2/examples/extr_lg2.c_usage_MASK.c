
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(const char *VAR_3)
{
 size_t VAR_4;

 FUNC_2(VAR_2, "usage: %s <cmd>...\n\nAvailable commands:\n\n", VAR_3);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_2(VAR_2, "\t%s\n", VAR_1[VAR_4].name);

 FUNC_1(VAR_0);
}
