
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int window; int childHolderWidget; } ;
typedef TYPE_1__ uiWindow ;
typedef int gint ;
struct TYPE_6__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_2__ GtkAllocation ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(uiWindow *VAR_0, int VAR_1, int VAR_2)
{
 GtkAllocation VAR_3;
 gint VAR_4, VAR_5;
 FUNC_1(VAR_0->window, &VAR_4, &VAR_5);


 FUNC_0(VAR_0->childHolderWidget, &VAR_3);

 VAR_4 -= VAR_3.width;
 VAR_5 -= VAR_3.height;


 VAR_4 += VAR_1;
 VAR_5 += VAR_2;


 FUNC_2(VAR_0->window, VAR_4, VAR_5);
}
