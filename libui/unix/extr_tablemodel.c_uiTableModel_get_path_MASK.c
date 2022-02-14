
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gint ;
struct TYPE_3__ {scalar_t__ stamp; int user_data; } ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef TYPE_1__ GtkTreeIter ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,int) ;

__attribute__((used)) static GtkTreePath *FUNC_2(GtkTreeModel *VAR_1, GtkTreeIter *VAR_2)
{
 gint VAR_3;

 if (VAR_2->stamp != VAR_0)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_2->user_data);
 return FUNC_1(VAR_3, -1);
}
