
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt16 ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__* data; } ;
typedef int SRes ;
typedef int LPCWSTR ;
typedef TYPE_1__ CBuf ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const*,unsigned int) ;
 unsigned int FUNC_2 (int ,int ,int ,unsigned int,char*,unsigned int,char*,int *) ;

__attribute__((used)) static SRes FUNC_3(CBuf *VAR_3, const UInt16 *VAR_4

    , UINT VAR_5

    )
{
  unsigned VAR_6 = 0;
  for (VAR_6 = 0; VAR_4[VAR_6] != 0; VAR_6++);


  {
    unsigned VAR_7 = VAR_6 * 3 + 100;
    if (!FUNC_0(VAR_3, VAR_7))
      return VAR_1;
    {
      VAR_3->data[0] = 0;
      if (VAR_6 != 0)
      {
        char VAR_8 = '_';
        BOOL VAR_9;
        unsigned VAR_10 = 0;
        VAR_10 = FUNC_2(VAR_5, 0, (LPCWSTR)VAR_4, VAR_6, (char *)VAR_3->data, VAR_7, &VAR_8, &VAR_9);
        if (VAR_10 == 0 || VAR_10 >= VAR_7)
          return VAR_0;
        VAR_3->data[VAR_10] = 0;
      }
      return VAR_2;
    }
  }



}
