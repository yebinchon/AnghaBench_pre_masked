
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gpointer ;
typedef int gint ;
typedef int gchar ;
typedef int GtkSpinButton ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static gint FUNC_3(GtkSpinButton *VAR_2, gpointer VAR_3, gpointer VAR_4)
{
 double *VAR_5 = (double *) VAR_3;
 const gchar *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(FUNC_0(VAR_2));
 VAR_7 = (int) FUNC_1(VAR_6, ((void*)0));
 if (VAR_7 < 0 || VAR_7 > 12)
  return VAR_0;
 if (VAR_7 == 12)
  VAR_7 = 0;
 *VAR_5 = (double) VAR_7;
 return VAR_1;
}
