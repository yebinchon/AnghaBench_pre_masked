
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filestream; int z_filefunc; } ;
typedef TYPE_1__ zip64_internal ;
typedef int uLong ;
typedef scalar_t__ uInt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,int) ;

int FUNC_3(zip64_internal* VAR_2, const char* VAR_3)
{
  int VAR_4 = VAR_1;
  uInt VAR_5 = 0;

  if(VAR_3 != ((void*)0))
    VAR_5 = (uInt)FUNC_1(VAR_3);

  VAR_4 = FUNC_2(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)VAR_5,2);

  if (VAR_4 == VAR_1 && VAR_5 > 0)
  {
    if (FUNC_0(VAR_2->z_filefunc,VAR_2->filestream, VAR_3, VAR_5) != VAR_5)
      VAR_4 = VAR_0;
  }
  return VAR_4;
}
