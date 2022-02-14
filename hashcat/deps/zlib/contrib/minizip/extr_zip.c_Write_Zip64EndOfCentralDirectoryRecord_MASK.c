
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number_entry; int add_position_when_writing_offset; int filestream; int z_filefunc; } ;
typedef TYPE_1__ zip64_internal ;
typedef int uLong ;
typedef int ZPOS64_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int) ;

int FUNC_1(zip64_internal* VAR_2, uLong VAR_3, ZPOS64_T VAR_4)
{
  int VAR_5 = VAR_1;

  uLong VAR_6 = 44;

  VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)VAR_0,4);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(ZPOS64_T)VAR_6,8);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)45,2);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)45,2);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)0,4);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(uLong)0,4);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc, VAR_2->filestream, VAR_2->number_entry, 8);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc, VAR_2->filestream, VAR_2->number_entry, 8);

  if (VAR_5==VAR_1)
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream,(ZPOS64_T)VAR_3,8);

  if (VAR_5==VAR_1)
  {
    ZPOS64_T VAR_7 = VAR_4 - VAR_2->add_position_when_writing_offset;
    VAR_5 = FUNC_0(&VAR_2->z_filefunc,VAR_2->filestream, (ZPOS64_T)VAR_7,8);
  }
  return VAR_5;
}
