
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* equatedto; } ;
struct TYPE_7__ {TYPE_1__ l; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef TYPE_3__* Symbol ;


 int FUNC_0 (int) ;

__attribute__((used)) static Symbol FUNC_1(Symbol VAR_0) {
 { Symbol VAR_1; for (VAR_1 = VAR_0->u.l.equatedto; VAR_1; VAR_1 = VAR_1->u.l.equatedto) FUNC_0(VAR_0 != VAR_1); }
 while (VAR_0->u.l.equatedto)
  VAR_0 = VAR_0->u.l.equatedto;
 return VAR_0;
}
