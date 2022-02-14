
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int header ;
typedef int UInt64 ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int CLzmaDec ;


 int FUNC_0 (int *,int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_6(ISeqOutStream *VAR_2, ISeqInStream *VAR_3)
{
  UInt64 VAR_4;
  int VAR_5;
  SRes VAR_6 = 0;

  CLzmaDec VAR_7;


  unsigned char VAR_8[VAR_0 + 8];



  FUNC_4(FUNC_5(VAR_3, VAR_8, sizeof(VAR_8)));

  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
    VAR_4 += (UInt64)VAR_8[VAR_0 + VAR_5] << (VAR_5 * 8);

  FUNC_2(&VAR_7);
  FUNC_4(FUNC_1(&VAR_7, VAR_8, VAR_0, &VAR_1));
  VAR_6 = FUNC_0(&VAR_7, VAR_2, VAR_3, VAR_4);
  FUNC_3(&VAR_7, &VAR_1);
  return VAR_6;
}
