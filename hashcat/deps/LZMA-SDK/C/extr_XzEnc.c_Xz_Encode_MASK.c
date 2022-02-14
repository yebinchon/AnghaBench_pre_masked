
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef int CXzProps ;
typedef int CXzEncHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int const*) ;
 int VAR_2 ;
 int VAR_3 ;

SRes FUNC_4(ISeqOutStream *VAR_4, ISeqInStream *VAR_5,
    const CXzProps *VAR_6, ICompressProgress *VAR_7)
{
  SRes VAR_8;
  CXzEncHandle VAR_9 = FUNC_0(&VAR_2, &VAR_3);
  if (!VAR_9)
    return VAR_0;
  VAR_8 = FUNC_3(VAR_9, VAR_6);
  if (VAR_8 == VAR_1)
    VAR_8 = FUNC_2(VAR_9, VAR_4, VAR_5, VAR_7);
  FUNC_1(VAR_9);
  return VAR_8;
}
