
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Tree ;
struct TYPE_5__ {struct TYPE_5__** kids; } ;
typedef TYPE_1__* Node ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(Node VAR_0, int VAR_1, int VAR_2) {
 int VAR_3, VAR_4;

 if (VAR_0 == 0 || *FUNC_2(VAR_3 = FUNC_1((Tree)VAR_0)))
  return;
 *FUNC_2(VAR_3) = 1;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->kids); VAR_4++)
  FUNC_4(VAR_0->kids[VAR_4], VAR_1, VAR_2 + 1);
 FUNC_3(VAR_0, VAR_1, VAR_2);
}
