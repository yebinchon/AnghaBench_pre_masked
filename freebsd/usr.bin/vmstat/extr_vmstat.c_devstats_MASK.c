
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {long* cp_time; long double snap_time; TYPE_1__* dinfo; } ;
struct TYPE_9__ {scalar_t__ selected; int position; int unit_number; int * device_name; } ;
struct TYPE_8__ {long* cp_time; long double snap_time; TYPE_2__* dinfo; } ;
struct TYPE_7__ {int * devices; } ;
struct TYPE_6__ {int * devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,long double,int ,long double*,int ) ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int ,long double) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 long double VAR_9, VAR_10;
 long VAR_11;
 int VAR_12, VAR_13, VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_0; ++VAR_14) {
  VAR_11 = VAR_3.cp_time[VAR_14];
  VAR_3.cp_time[VAR_14] -= VAR_6.cp_time[VAR_14];
  VAR_6.cp_time[VAR_14] = VAR_11;
 }

 VAR_9 = VAR_3.snap_time - VAR_6.snap_time;

 FUNC_6("device");
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  if (VAR_4[VAR_13].selected == 0 ||
      VAR_4[VAR_13].selected > VAR_7)
   continue;

  VAR_12 = VAR_4[VAR_13].position;

  if (FUNC_0(&VAR_3.dinfo->devices[VAR_12],
      &VAR_6.dinfo->devices[VAR_12], VAR_9,
      VAR_2, &VAR_10,
      VAR_1) != 0)
   FUNC_4(1, "%s", VAR_5);

  FUNC_5("device");
  FUNC_3("{ekq:name/%c%c%d}{:transfers/%3.0Lf} ",
      VAR_4[VAR_13].device_name[0],
      VAR_4[VAR_13].device_name[1],
      VAR_4[VAR_13].unit_number,
      VAR_10);
  FUNC_1("device");
 }
 FUNC_2("device");
}
