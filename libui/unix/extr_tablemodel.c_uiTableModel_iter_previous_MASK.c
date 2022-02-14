
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gint ;
typedef int gboolean ;
struct TYPE_3__ {scalar_t__ stamp; int user_data; } ;
typedef int GtkTreeModel ;
typedef TYPE_1__ GtkTreeIter ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static gboolean FUNC_2(GtkTreeModel *VAR_4, GtkTreeIter *VAR_5)
{
 gint VAR_6;

 if (VAR_5->stamp != VAR_2)
  return VAR_0;
 VAR_6 = FUNC_1(VAR_5->user_data);
 VAR_6--;
 if (VAR_6 < 0) {
  VAR_5->stamp = VAR_1;
  return VAR_0;
 }
 VAR_5->user_data = FUNC_0(VAR_6);
 return VAR_3;
}
