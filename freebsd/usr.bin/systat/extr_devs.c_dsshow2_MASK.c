
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct statinfo {long double snap_time; TYPE_1__* dinfo; } ;
struct TYPE_7__ {int position; } ;
struct TYPE_6__ {int creation_time; } ;
struct TYPE_5__ {TYPE_2__* devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 long double FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,long double,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (long double,int,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_7, int VAR_8, int VAR_9, int VAR_10, struct statinfo *VAR_11, struct statinfo *VAR_12)
{
 long double VAR_13;
 long double VAR_14, VAR_15;
 long double VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = VAR_5[VAR_9].position;

 if (VAR_12 != ((void*)0)) {

  VAR_16 = VAR_11->snap_time - VAR_12->snap_time;
 } else {

  VAR_16 = VAR_11->snap_time - FUNC_0(
      &VAR_11->dinfo->devices[VAR_18].creation_time, ((void*)0));
 }

 if (FUNC_1(&VAR_11->dinfo->devices[VAR_18], VAR_12 ?
     &VAR_12->dinfo->devices[VAR_18] : ((void*)0), VAR_16,
     VAR_1, &VAR_14,
     VAR_4, &VAR_13,
     VAR_2, &VAR_15,
     VAR_0, &VAR_17,
     VAR_3) != 0)
  FUNC_2(1, "%s", VAR_6);

 VAR_10 = VAR_7 + VAR_10 * 6;
 FUNC_3(VAR_14, VAR_8 + 1, VAR_10, 5, 2, 0);
 FUNC_3(VAR_13, VAR_8 + 2, VAR_10, 5, 0, 0);
 FUNC_3(VAR_15, VAR_8 + 3, VAR_10, 5, 2, 0);
 FUNC_3(VAR_17, VAR_8 + 4, VAR_10, 5, 0, 0);
}
