
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef int gchar ;
typedef int GtkWindow ;
typedef int GtkWidget ;
typedef int GtkFileChooserAction ;
typedef int GtkFileChooser ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *,int ,char*,int ,int const*,scalar_t__,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static char *FUNC_12(GtkWindow *VAR_4, GtkFileChooserAction VAR_5, const gchar *VAR_6)
{
 GtkWidget *VAR_7;
 GtkFileChooser *VAR_8;
 gint VAR_9;
 char *VAR_10;

 VAR_7 = FUNC_3(((void*)0), VAR_4, VAR_5,
  "_Cancel", VAR_2,
  VAR_6, VAR_1,
  ((void*)0));
 VAR_8 = FUNC_1(VAR_7);
 FUNC_7(VAR_8, VAR_0);
 FUNC_8(VAR_8, VAR_0);
 FUNC_9(VAR_8, VAR_3);
 FUNC_6(VAR_8, VAR_3);
 FUNC_5(VAR_8, VAR_3);
 VAR_9 = FUNC_2(FUNC_0(VAR_7));
 if (VAR_9 != VAR_1) {
  FUNC_10(VAR_7);
  return ((void*)0);
 }
 VAR_10 = FUNC_11(FUNC_4(VAR_8));
 FUNC_10(VAR_7);
 return VAR_10;
}
