
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {long double snap_time; TYPE_1__* dinfo; } ;
struct TYPE_9__ {int position; } ;
struct TYPE_8__ {long double snap_time; TYPE_2__* dinfo; } ;
struct TYPE_7__ {int * devices; } ;
struct TYPE_6__ {int * devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,long double,int ,long double*,int ,long double*,int ,long double*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (long double,int,double) ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ,int,int,char*,long double,long double,long double) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_5(int VAR_11, int VAR_12, int VAR_13)
{
 long double VAR_14;
 long double VAR_15, VAR_16;
 long double VAR_17;
 int VAR_18;

 VAR_18 = VAR_5[VAR_13].position;

 VAR_17 = VAR_4.snap_time - VAR_8.snap_time;

 if (FUNC_0(&VAR_4.dinfo->devices[VAR_18],
     &VAR_8.dinfo->devices[VAR_18], VAR_17,
     VAR_0, &VAR_15,
     VAR_3, &VAR_14,
     VAR_1, &VAR_16, VAR_2) != 0)
  FUNC_1(1, "%s", VAR_6);

 if (VAR_9) {
  FUNC_3(VAR_10, VAR_11, VAR_12, " %5.2Lf %3.0Lf %5.2Lf ",
    VAR_15, VAR_14,
    VAR_16);
  return(VAR_11);
 }
 FUNC_4(VAR_10, VAR_11++, VAR_12);
 FUNC_2(VAR_16, 50, .5);
 FUNC_4(VAR_10, VAR_11++, VAR_12);
 FUNC_2(VAR_14, 50, .5);
 if (VAR_7) {
  FUNC_4(VAR_10, VAR_11++, VAR_12);
  FUNC_2(VAR_15, 50, .5);
 }

 return(VAR_11);

}
