
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef int CXzStreamFlags ;
typedef int CXzEncIndex ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

SRes FUNC_4(ISeqOutStream *VAR_1)
{
  SRes VAR_2;
  CXzEncIndex VAR_3;
  FUNC_0(&VAR_3);
  VAR_2 = FUNC_3((CXzStreamFlags)0, VAR_1);
  if (VAR_2 == VAR_0)
    VAR_2 = FUNC_2(&VAR_3, (CXzStreamFlags)0, VAR_1);
  FUNC_1(&VAR_3, ((void*)0));
  return VAR_2;
}
