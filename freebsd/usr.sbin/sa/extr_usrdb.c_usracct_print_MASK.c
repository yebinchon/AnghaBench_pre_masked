
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct userinfo {int ui_calls; int ui_utime; int ui_stime; int ui_io; double ui_mem; int ui_uid; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct userinfo*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;

void
FUNC_5(void)
{
 DBT VAR_6, VAR_7;
 struct userinfo VAR_8, *VAR_9 = &VAR_8;
 double VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_5, &VAR_6, &VAR_7, VAR_1);
 if (VAR_11 < 0)
  FUNC_4("retrieving user accounting stats");

 while (VAR_11 == 0) {
  FUNC_1(VAR_9, VAR_7.data, sizeof(struct userinfo));

  FUNC_2("%-*s %9ju ", VAR_0 - 1,
      FUNC_3(VAR_9->ui_uid, 0), (uintmax_t)VAR_9->ui_calls);

  VAR_10 = (VAR_9->ui_utime + VAR_9->ui_stime) / 1000000;
  if (VAR_10 < 0.000001)
   VAR_10 = 0.000001;

  FUNC_2("%12.2f%s ", VAR_10 / 60.0, "cpu");


  if (VAR_3)
   FUNC_2("%12.0f%s",
       VAR_9->ui_io / VAR_9->ui_calls, "avio");
  else
   FUNC_2("%12.0f%s", VAR_9->ui_io, "tio");


  if (VAR_4)
   FUNC_2("%12.0f%s", VAR_9->ui_mem / VAR_10, "k");
  else
   FUNC_2("%12.0f%s", VAR_9->ui_mem, "k*sec");

  FUNC_2("\n");

  VAR_11 = FUNC_0(VAR_5, &VAR_6, &VAR_7, VAR_2);
  if (VAR_11 < 0)
   FUNC_4("retrieving user accounting stats");
 }
}
