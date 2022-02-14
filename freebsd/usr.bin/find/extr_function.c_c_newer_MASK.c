
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {scalar_t__ tv_sec; int tv_nsec; } ;
struct stat {TYPE_1__ st_mtim; TYPE_1__ st_birthtim; TYPE_1__ st_atim; TYPE_1__ st_ctim; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {TYPE_1__ t_data; } ;
typedef TYPE_2__ PLAN ;
typedef TYPE_3__ OPTION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,struct stat*) ;
 char* FUNC_4 (TYPE_3__*,char***) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char*,struct stat*) ;

PLAN *
FUNC_7(OPTION *VAR_7, char ***VAR_8)
{
 char *VAR_9;
 PLAN *VAR_10;
 struct stat VAR_11;
 int VAR_12;

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 VAR_6 &= ~VAR_0;

 VAR_10 = FUNC_5(VAR_7);

 if (VAR_7->flags & VAR_5) {
  VAR_10->t_data.tv_sec = FUNC_2(VAR_9);
  if (VAR_10->t_data.tv_sec == (time_t) -1)
   FUNC_1(1, "Can't parse date/time: %s", VAR_9);

  VAR_10->t_data.tv_nsec = 999999999;
 } else {
  if (VAR_6 & VAR_1)
   VAR_12 = FUNC_3(VAR_9, &VAR_11);
  else
   VAR_12 = FUNC_6(VAR_9, &VAR_11);
  if (VAR_12 != 0)
   FUNC_0(1, "%s", VAR_9);
  if (VAR_7->flags & VAR_4)
   VAR_10->t_data = VAR_11.st_ctim;
  else if (VAR_7->flags & VAR_2)
   VAR_10->t_data = VAR_11.st_atim;




  else
   VAR_10->t_data = VAR_11.st_mtim;
 }
 return VAR_10;
}
