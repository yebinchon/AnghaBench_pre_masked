
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt16 ;
struct TYPE_4__ {int data; } ;
typedef int SRes ;
typedef TYPE_1__ CBuf ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (int ,int const*,int const*) ;
 size_t FUNC_2 (int const*,int const*) ;

__attribute__((used)) static SRes FUNC_3(CBuf *VAR_2, const UInt16 *VAR_3, size_t VAR_4)
{
  size_t VAR_5 = FUNC_2(VAR_3, VAR_3 + VAR_4);
  VAR_5 += 1;
  if (!FUNC_0(VAR_2, VAR_5))
    return VAR_0;
  *FUNC_1(VAR_2->data, VAR_3, VAR_3 + VAR_4) = 0;
  return VAR_1;
}
