
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xzProps; } ;
typedef int SRes ;
typedef int CXzProps ;
typedef scalar_t__ CXzEncHandle ;
typedef TYPE_1__ CXzEnc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

SRes FUNC_1(CXzEncHandle VAR_1, const CXzProps *VAR_2)
{
  CXzEnc *VAR_3 = (CXzEnc *)VAR_1;
  VAR_3->xzProps = *VAR_2;
  FUNC_0(&VAR_3->xzProps);
  return VAR_0;
}
