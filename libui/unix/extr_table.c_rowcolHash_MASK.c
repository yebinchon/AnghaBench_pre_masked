
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rowcol {scalar_t__ col; scalar_t__ row; } ;
typedef int guint ;
typedef scalar_t__ gconstpointer ;



__attribute__((used)) static guint FUNC_0(gconstpointer VAR_0)
{
 const struct rowcol *VAR_1 = (const struct rowcol *) VAR_0;
 guint VAR_2, VAR_3;

 VAR_2 = (guint) (VAR_1->row);
 VAR_3 = (guint) (VAR_1->col);
 return VAR_2 ^ VAR_3;
}
