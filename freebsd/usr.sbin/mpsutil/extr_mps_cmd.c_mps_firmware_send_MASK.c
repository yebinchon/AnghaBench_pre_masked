
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int req ;
typedef int reply ;
struct TYPE_6__ {int MsgFlags; int TotalImageSize; int ImageType; int Function; } ;
typedef TYPE_1__ MPI2_FW_DOWNLOAD_REQUEST ;
typedef TYPE_1__ MPI2_FW_DOWNLOAD_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int,TYPE_1__*,int,TYPE_1__*,int,unsigned char*,int ,int ) ;

int
FUNC_2(int VAR_4, unsigned char *VAR_5, uint32_t VAR_6, bool VAR_7)
{
 MPI2_FW_DOWNLOAD_REQUEST VAR_8;
 MPI2_FW_DOWNLOAD_REPLY VAR_9;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_8.Function = VAR_0;
 VAR_8.ImageType = VAR_7 ? VAR_1 : VAR_2;
 VAR_8.TotalImageSize = VAR_6;
 VAR_8.MsgFlags = VAR_3;

 if (FUNC_1(VAR_4, &VAR_8, sizeof(VAR_8), &VAR_9, sizeof(VAR_9),
     VAR_5, VAR_6, 0)) {
  return (-1);
 }
 return (0);
}
