
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_3(void)
{
 void *VAR_9;


 VAR_9 = FUNC_2(((void*)0), VAR_0);
 if (VAR_9 == ((void*)0))
  return;

 *((void **) (&VAR_5)) = FUNC_0(VAR_9, "pango_attr_font_features_new");
 *((void **) (&VAR_4)) = FUNC_0(VAR_9, "pango_attr_foreground_alpha_new");
 *((void **) (&VAR_3)) = FUNC_0(VAR_9, "pango_attr_background_alpha_new");
 *((void **) (&VAR_2)) = FUNC_0(VAR_9, "gtk_widget_path_iter_set_object_name");
 FUNC_1(VAR_9);
}
