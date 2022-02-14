
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_5__ {scalar_t__ Size; } ;
typedef int SRes ;
typedef TYPE_1__ CSzData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_3(CSzData *VAR_2)
{
  UInt64 VAR_3;
  FUNC_0(FUNC_1(VAR_2, &VAR_3));
  if (VAR_3 > VAR_2->Size)
    return VAR_0;
  FUNC_2(VAR_2, VAR_3);
  return VAR_1;
}
