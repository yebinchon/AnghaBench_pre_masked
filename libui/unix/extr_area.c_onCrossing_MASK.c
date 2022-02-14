
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cc; TYPE_3__* ah; } ;
typedef TYPE_1__ uiArea ;
typedef int gboolean ;
struct TYPE_7__ {TYPE_1__* a; } ;
typedef TYPE_2__ areaWidget ;
struct TYPE_8__ {int (* MouseCrossed ) (TYPE_3__*,TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static gboolean FUNC_2(areaWidget *VAR_1, int VAR_2)
{
 uiArea *VAR_3 = VAR_1->a;

 (*(VAR_3->ah->MouseCrossed))(VAR_3->ah, VAR_3, VAR_2);
 FUNC_1(VAR_3->cc);
 return VAR_0;
}
