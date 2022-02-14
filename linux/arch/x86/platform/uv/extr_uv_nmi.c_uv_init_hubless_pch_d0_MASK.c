
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int mask; int offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2, VAR_3;

 VAR_3 = *FUNC_1(VAR_0);
 if (VAR_3 != 0) {
  FUNC_3("UV: Hubless NMI already configured\n");
  return;
 }

 FUNC_2("UV: Initializing UV Hubless NMI on PCH\n");
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  FUNC_4(VAR_1[VAR_2].offset,
     VAR_1[VAR_2].mask,
     VAR_1[VAR_2].data);
 }
}
