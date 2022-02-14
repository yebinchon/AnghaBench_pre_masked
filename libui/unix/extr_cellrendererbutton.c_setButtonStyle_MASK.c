
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidgetPath ;
typedef int GtkWidget ;
typedef int GtkStyleContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,char*) ;

__attribute__((used)) static GtkStyleContext *FUNC_13(GtkWidget *VAR_3)
{
 GtkStyleContext *VAR_4, *VAR_5;
 GtkWidgetPath *VAR_6;

 VAR_4 = FUNC_7(VAR_3);
 VAR_5 = FUNC_3();

 VAR_6 = FUNC_9(FUNC_1(VAR_4));
 FUNC_8(VAR_6, VAR_2);
 if (!FUNC_12(VAR_6, -1, "button"))

  FUNC_10(VAR_6, -1, VAR_1);

 FUNC_5(VAR_5, VAR_6);
 FUNC_4(VAR_5, VAR_4);


 FUNC_6(VAR_5, FUNC_2(VAR_4));
 FUNC_11(VAR_6);


 FUNC_0(VAR_5, VAR_0);

 return VAR_5;
}
