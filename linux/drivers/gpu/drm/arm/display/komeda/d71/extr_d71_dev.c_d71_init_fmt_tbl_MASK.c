
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct komeda_format_caps_table {int n_formats; int format_mod_supported; int format_caps; } ;
struct komeda_dev {struct komeda_format_caps_table fmt_tbl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct komeda_dev *VAR_2)
{
 struct komeda_format_caps_table *VAR_3 = &VAR_2->fmt_tbl;

 VAR_3->format_caps = VAR_0;
 VAR_3->format_mod_supported = VAR_1;
 VAR_3->n_formats = FUNC_0(VAR_0);
}
