
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int full; } ;
typedef TYPE_1__ fInt ;


 TYPE_1__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static fInt FUNC_3 (fInt VAR_0, fInt VAR_1)
{
 fInt VAR_2, VAR_3;
 int64_t VAR_4, VAR_5;

 VAR_2 = FUNC_0(0);

 if (FUNC_1(VAR_1, VAR_2))
  return VAR_2;

 VAR_4 = (int64_t)VAR_0.full;
 VAR_5 = (int64_t)VAR_1.full;

 VAR_4 = VAR_4 << 16;

 FUNC_2(VAR_4, VAR_5);

 VAR_3.full = (int)VAR_4;
 return VAR_3;
}
