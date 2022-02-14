
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int defersRun; struct defer* defers; } ;
typedef TYPE_1__ testingT ;
struct defer {int data; int (* f ) (int ) ;struct defer* next; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(testingT *VAR_0)
{
 struct defer *VAR_1;

 if (VAR_0->defersRun)
  return;
 VAR_0->defersRun = 1;
 for (VAR_1 = VAR_0->defers; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  (*(VAR_1->f))(VAR_1->data);
}
