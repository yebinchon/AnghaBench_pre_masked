
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
struct TYPE_6__ {int ActualImageSize; int ImageType; int Function; } ;
typedef TYPE_1__ MPI2_FW_UPLOAD_REQUEST ;
typedef TYPE_1__ MPI2_FW_UPLOAD_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*,int,TYPE_1__*,int,unsigned char*,int,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(int VAR_3, unsigned char **VAR_4, bool VAR_5)
{
 MPI2_FW_UPLOAD_REQUEST VAR_6;
 MPI2_FW_UPLOAD_REPLY VAR_7;
 int VAR_8;

 *VAR_4 = ((void*)0);
 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_6.Function = VAR_0;
 VAR_6.ImageType = VAR_5 ? VAR_1 : VAR_2;

 if (FUNC_3(VAR_3, &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7),
     ((void*)0), 0, 0)) {
  return (-1);
 }
 if (VAR_7.ActualImageSize == 0) {
  return (-1);
 }

 VAR_8 = VAR_7.ActualImageSize;
 *VAR_4 = FUNC_1(VAR_8, sizeof(unsigned char));
 if (*VAR_4 == ((void*)0)) {
  FUNC_4("calloc");
  return (-1);
 }
 if (FUNC_3(VAR_3, &VAR_6, sizeof(VAR_6), &VAR_7, sizeof(VAR_7),
     *VAR_4, VAR_8, 0)) {
  FUNC_2(*VAR_4);
  return (-1);
 }

 return (VAR_8);
}
