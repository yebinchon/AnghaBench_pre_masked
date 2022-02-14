
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv; } ;
typedef TYPE_1__ uiTable ;
typedef int GtkTreeViewColumn ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static GtkTreeViewColumn *FUNC_4(uiTable *VAR_1, const char *VAR_2)
{
 GtkTreeViewColumn *VAR_3;

 VAR_3 = FUNC_1();
 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_1->tv, VAR_3);
 return VAR_3;
}
