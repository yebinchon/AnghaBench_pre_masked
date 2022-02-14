
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gpointer ;
typedef int gint ;
typedef char gchar ;
typedef int GtkSpinButton ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_1 (char const) ;
 char* FUNC_2 (int ) ;
 char const* FUNC_3 (int ) ;

__attribute__((used)) static gint FUNC_4(GtkSpinButton *VAR_4, gpointer VAR_5, gpointer VAR_6)
{
 double *VAR_7 = (double *) VAR_5;
 const gchar *VAR_8;
 char VAR_9, VAR_10;

 VAR_8 = FUNC_2(FUNC_0(VAR_4));

 VAR_9 = FUNC_1(FUNC_3(VAR_0)[0]);
 VAR_10 = FUNC_1(FUNC_3(VAR_2)[0]);
 for (; *VAR_8 != '\0'; VAR_8++)
  if (FUNC_1(*VAR_8) == VAR_9) {
   *VAR_7 = 0;
   return VAR_3;
  } else if (FUNC_1(*VAR_8) == VAR_10) {
   *VAR_7 = 1;
   return VAR_3;
  }
 return VAR_1;
}
