
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iter_parent; int iter_nth_child; int iter_n_children; int iter_has_child; int iter_children; int iter_previous; int iter_next; int get_value; int get_path; int get_iter; int get_column_type; int get_n_columns; int get_flags; } ;
typedef TYPE_1__ GtkTreeModelIface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(GtkTreeModelIface *VAR_13)
{
 VAR_13->get_flags = VAR_1;
 VAR_13->get_n_columns = VAR_3;
 VAR_13->get_column_type = VAR_0;
 VAR_13->get_iter = VAR_2;
 VAR_13->get_path = VAR_4;
 VAR_13->get_value = VAR_5;
 VAR_13->iter_next = VAR_9;
 VAR_13->iter_previous = VAR_12;
 VAR_13->iter_children = VAR_6;
 VAR_13->iter_has_child = VAR_7;
 VAR_13->iter_n_children = VAR_8;
 VAR_13->iter_nth_child = VAR_10;
 VAR_13->iter_parent = VAR_11;

}
