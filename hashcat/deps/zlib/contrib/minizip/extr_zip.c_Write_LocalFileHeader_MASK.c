
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos_zip64extrainfo; scalar_t__ zip64; scalar_t__ dosDate; scalar_t__ method; scalar_t__ flag; } ;
struct TYPE_5__ {int filestream; int z_filefunc; TYPE_1__ ci; } ;
typedef TYPE_2__ zip64_internal ;
typedef short uLong ;
typedef scalar_t__ uInt ;
typedef short ZPOS64_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,void const*,scalar_t__) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,short,int) ;

int FUNC_4(zip64_internal* VAR_3, const char* VAR_4, uInt VAR_5, const void* VAR_6)
{

  int VAR_7;
  uInt VAR_8 = (uInt)FUNC_2(VAR_4);
  uInt VAR_9 = VAR_5;

  VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_0, 4);

  if (VAR_7==VAR_2)
  {
    if(VAR_3->ci.zip64)
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)45,2);
    else
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)20,2);
  }

  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_3->ci.flag,2);

  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_3->ci.method,2);

  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_3->ci.dosDate,4);


  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)0,4);
  if (VAR_7==VAR_2)
  {
    if(VAR_3->ci.zip64)
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)0xFFFFFFFF,4);
    else
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)0,4);
  }
  if (VAR_7==VAR_2)
  {
    if(VAR_3->ci.zip64)
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)0xFFFFFFFF,4);
    else
      VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)0,4);
  }

  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_8,2);

  if(VAR_3->ci.zip64)
  {
    VAR_9 += 20;
  }

  if (VAR_7==VAR_2)
    VAR_7 = FUNC_3(&VAR_3->z_filefunc,VAR_3->filestream,(uLong)VAR_9,2);

  if ((VAR_7==VAR_2) && (VAR_8 > 0))
  {
    if (FUNC_1(VAR_3->z_filefunc,VAR_3->filestream,VAR_4,VAR_8)!=VAR_8)
      VAR_7 = VAR_1;
  }

  if ((VAR_7==VAR_2) && (VAR_5 > 0))
  {
    if (FUNC_1(VAR_3->z_filefunc, VAR_3->filestream, VAR_6, VAR_5) != VAR_5)
      VAR_7 = VAR_1;
  }


  if ((VAR_7==VAR_2) && (VAR_3->ci.zip64))
  {

      short VAR_10 = 1;
      short VAR_11 = 16;
      ZPOS64_T VAR_12 = 0;
      ZPOS64_T VAR_13 = 0;


      VAR_3->ci.pos_zip64extrainfo = FUNC_0(VAR_3->z_filefunc,VAR_3->filestream);

      VAR_7 = FUNC_3(&VAR_3->z_filefunc, VAR_3->filestream, (short)VAR_10,2);
      VAR_7 = FUNC_3(&VAR_3->z_filefunc, VAR_3->filestream, (short)VAR_11,2);

      VAR_7 = FUNC_3(&VAR_3->z_filefunc, VAR_3->filestream, (ZPOS64_T)VAR_13,8);
      VAR_7 = FUNC_3(&VAR_3->z_filefunc, VAR_3->filestream, (ZPOS64_T)VAR_12,8);
  }

  return VAR_7;
}
