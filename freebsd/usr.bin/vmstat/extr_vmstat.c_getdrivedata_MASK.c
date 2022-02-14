
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct devinfo {int devices; int generation; int numdevs; } ;
struct TYPE_5__ {struct devinfo* dinfo; } ;
struct TYPE_4__ {struct devinfo* dinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__*) ;
 char* VAR_5 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *,int ,int ,int ,int ,scalar_t__,char**,int,int ,int,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char) ;
 TYPE_1__ VAR_7 ;
 char** FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char** FUNC_7 (char**,int) ;
 int VAR_16 ;
 int VAR_17 ;
 char** VAR_18 ;
 int FUNC_8 (int,char*,char*) ;

__attribute__((used)) static char **
FUNC_9(char **VAR_19)
{

 if ((VAR_11 = FUNC_3(((void*)0))) < 0)
  FUNC_8(1, "%s", VAR_5);

 VAR_2.dinfo = (struct devinfo *)FUNC_0(1, sizeof(struct devinfo));
 VAR_7.dinfo = (struct devinfo *)FUNC_0(1, sizeof(struct devinfo));

 if (FUNC_2(((void*)0), &VAR_2) == -1)
  FUNC_8(1, "%s", VAR_5);

 VAR_11 = VAR_2.dinfo->numdevs;
 VAR_6 = VAR_2.dinfo->generation;

 VAR_18 = FUNC_6(sizeof(char *));
 for (VAR_12 = 0; *VAR_19; ++VAR_19) {
  if (FUNC_5(**VAR_19))
   break;
  VAR_12++;
  VAR_18 = FUNC_7(VAR_18,
      sizeof(char *) * VAR_12);
  if (VAR_18 == ((void*)0)) {
   FUNC_8(1, "%s", "reallocf (specified_devices)");
  }
  VAR_18[VAR_12 - 1] = *VAR_19;
 }
 VAR_4 = ((void*)0);

 if (VAR_10 == 0 && VAR_9 < VAR_12)
  VAR_9 = VAR_12;
 if ((VAR_12 == 0) && (VAR_13 == 0)) {
  if (FUNC_1(VAR_3, &VAR_8, &VAR_13) != 0)
   FUNC_8(1, "%s", VAR_5);
  VAR_17 = VAR_0;
 } else
  VAR_17 = VAR_1;






 if (FUNC_4(&VAR_4, &VAR_14, &VAR_15,
     &VAR_16, VAR_6, VAR_2.dinfo->devices,
     VAR_11, VAR_8, VAR_13, VAR_18,
     VAR_12, VAR_17,
     VAR_9, 0) == -1)
  FUNC_8(1, "%s", VAR_5);

 return(VAR_19);
}
