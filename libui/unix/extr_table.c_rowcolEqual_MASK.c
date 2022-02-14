
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rowcol {scalar_t__ row; scalar_t__ col; } ;
typedef scalar_t__ gconstpointer ;
typedef int gboolean ;



__attribute__((used)) static gboolean FUNC_0(gconstpointer VAR_0, gconstpointer VAR_1)
{
 const struct rowcol *VAR_2 = (const struct rowcol *) VAR_0;
 const struct rowcol *VAR_3 = (const struct rowcol *) VAR_1;

 return (VAR_2->row == VAR_3->row) && (VAR_2->col == VAR_3->col);
}
