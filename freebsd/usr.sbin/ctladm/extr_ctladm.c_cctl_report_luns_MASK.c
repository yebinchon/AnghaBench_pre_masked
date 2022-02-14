
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_report_luns_data {TYPE_1__* luns; } ;
struct TYPE_2__ {int* lundata; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int,struct scsi_report_luns_data**,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct scsi_report_luns_data*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct scsi_report_luns_data *VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = ((void*)0);

 if ((VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8,
       &VAR_9)) != 0)
  goto bailout;

 FUNC_1(VAR_3, "%u LUNs returned\n", VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  int VAR_12;





  switch (VAR_8->luns[VAR_10].lundata[0] & VAR_0) {
  case 128:
   VAR_12 = VAR_8->luns[VAR_10].lundata[1];
   break;
  case 130:
   VAR_12 = (VAR_8->luns[VAR_10].lundata[0] &
    VAR_2) |
    (VAR_8->luns[VAR_10].lundata[1] <<
    VAR_1);
   break;
  case 129:
  case 131:
  default:
   FUNC_1(VAR_3, "Unsupported LUN format %d\n",
    VAR_8->luns[VAR_10].lundata[0] &
    VAR_0);
   VAR_12 = -1;
   break;
  }
  if (VAR_12 == -1)
   continue;

  FUNC_1(VAR_3, "%d\n", VAR_12);
 }

bailout:
 if (VAR_8 != ((void*)0))
  FUNC_2(VAR_8);

 return (VAR_11);
}
