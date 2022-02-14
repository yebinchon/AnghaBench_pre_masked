
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int String; } ;
typedef TYPE_1__ uiDrawTextLayoutParams ;
struct foreachParams {int * attrs; } ;
typedef int PangoAttrList ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct foreachParams*) ;

PangoAttrList *FUNC_2(uiDrawTextLayoutParams *VAR_1)
{
 struct foreachParams VAR_2;

 VAR_2.attrs = FUNC_0();
 FUNC_1(VAR_1->String, VAR_0, &VAR_2);
 return VAR_2.attrs;
}
