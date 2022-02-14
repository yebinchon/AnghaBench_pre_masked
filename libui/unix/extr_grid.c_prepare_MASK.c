
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiControl ;
typedef size_t uiAlign ;
struct gridChild {int oldvalign; int oldvexpand; int oldhalign; int oldhexpand; int * c; } ;
typedef int GtkWidget ;


 int * FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static GtkWidget *FUNC_10(struct gridChild *VAR_1, uiControl *VAR_2, int VAR_3, uiAlign VAR_4, int VAR_5, uiAlign VAR_6)
{
 GtkWidget *VAR_7;

 VAR_1->c = VAR_2;
 VAR_7 = FUNC_0(FUNC_9(VAR_1->c));
 VAR_1->oldhexpand = FUNC_2(VAR_7);
 VAR_1->oldhalign = FUNC_1(VAR_7);
 VAR_1->oldvexpand = FUNC_4(VAR_7);
 VAR_1->oldvalign = FUNC_3(VAR_7);
 FUNC_6(VAR_7, VAR_3 != 0);
 FUNC_5(VAR_7, VAR_0[VAR_4]);
 FUNC_8(VAR_7, VAR_5 != 0);
 FUNC_7(VAR_7, VAR_0[VAR_6]);
 return VAR_7;
}
