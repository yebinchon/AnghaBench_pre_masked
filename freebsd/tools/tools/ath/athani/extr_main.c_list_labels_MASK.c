
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int id; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1].name != ((void*)0); VAR_1++) {
  FUNC_0("%s (%d)\n", VAR_0[VAR_1].name, VAR_0[VAR_1].id);
 }
}
