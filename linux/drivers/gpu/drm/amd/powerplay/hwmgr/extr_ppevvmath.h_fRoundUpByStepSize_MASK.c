
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int real; scalar_t__ decimal; } ;
struct TYPE_16__ {TYPE_1__ partial; } ;
typedef TYPE_2__ fInt ;


 TYPE_2__ FUNC_0 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_2 (TYPE_2__,TYPE_2__) ;

__attribute__((used)) static fInt FUNC_3(fInt VAR_0, fInt VAR_1, bool VAR_2)
{
 fInt VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_3.partial.decimal = 0;

 if (VAR_2)
  VAR_3.partial.real += 1;

 VAR_3 = FUNC_2(VAR_3, VAR_1);
 VAR_3 = FUNC_0(VAR_3, VAR_1);

 return VAR_3;
}
