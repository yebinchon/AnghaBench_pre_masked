
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short** _nts; int (* _kids ) (int ,int,int *) ;} ;
struct TYPE_4__ {TYPE_1__ x; } ;
typedef int Node ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int *) ;

__attribute__((used)) static void FUNC_5(Node VAR_2, int VAR_3, int VAR_4) {
 int VAR_5, VAR_6;
 short *VAR_7;
 Node VAR_8[10];

 VAR_2 = FUNC_3(VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_7 = VAR_0->x._nts[VAR_5];
 FUNC_1(VAR_1, "dumpcover(%x) = ", VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_1(VAR_1, " ");
 FUNC_0(VAR_5);
 (*VAR_0->x._kids)(VAR_2, VAR_5, VAR_8);
 for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
  FUNC_5(VAR_8[VAR_6], VAR_7[VAR_6], VAR_4+1);
}
