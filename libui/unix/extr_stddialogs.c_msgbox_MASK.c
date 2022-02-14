
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GtkMessageType ;
typedef int GtkButtonsType ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int * FUNC_4 (int *,int ,int ,int ,char*,char const*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(GtkWindow *VAR_1, const char *VAR_2, const char *VAR_3, GtkMessageType VAR_4, GtkButtonsType VAR_5)
{
 GtkWidget *VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_0,
  VAR_4, VAR_5,
  "%s", VAR_2);
 FUNC_3(FUNC_1(VAR_6), "%s", VAR_3);
 FUNC_2(FUNC_0(VAR_6));
 FUNC_5(VAR_6);
}
