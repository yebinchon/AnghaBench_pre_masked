
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timebuf ;
typedef int suseconds_t ;
struct iovlist {int dummy; } ;
struct TYPE_2__ {int usec; int tm; } ;
struct filed {scalar_t__ f_type; int f_prevpri; TYPE_1__ f_lasttime; } ;
typedef int priority_number ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct filed*,struct iovlist*,int) ;
 int FUNC_1 (struct iovlist*,char const*) ;
 int FUNC_2 (struct iovlist*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,int,char*,int *) ;

__attribute__((used)) static void
FUNC_5(struct filed *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, const char *VAR_6,
    const char *VAR_7, int VAR_8)
{
 struct iovlist VAR_9;
 suseconds_t VAR_10;
 int VAR_11;
 char VAR_12[33], VAR_13[5];

 FUNC_2(&VAR_9);
 if (VAR_1->f_type == VAR_0)
  FUNC_1(&VAR_9, "\r\n\aMessage from syslogd ...\r\n");
 FUNC_1(&VAR_9, "<");
 FUNC_3(VAR_13, sizeof(VAR_13), "%d", VAR_1->f_prevpri);
 FUNC_1(&VAR_9, VAR_13);
 FUNC_1(&VAR_9, ">1 ");
 if (FUNC_4(VAR_12, sizeof(VAR_12), "%FT%T.______%z",
     &VAR_1->f_lasttime.tm) == sizeof(VAR_12) - 2) {

  VAR_12[32] = '\0';
  VAR_12[31] = VAR_12[30];
  VAR_12[30] = VAR_12[29];
  VAR_12[29] = ':';


  VAR_10 = VAR_1->f_lasttime.usec;
  for (VAR_11 = 25; VAR_11 >= 20; --VAR_11) {
   VAR_12[VAR_11] = VAR_10 % 10 + '0';
   VAR_10 /= 10;
  }
  FUNC_1(&VAR_9, VAR_12);
 } else
  FUNC_1(&VAR_9, "-");
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_2);
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_3 == ((void*)0) ? "-" : VAR_3);
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_4 == ((void*)0) ? "-" : VAR_4);
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_5 == ((void*)0) ? "-" : VAR_5);
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_6 == ((void*)0) ? "-" : VAR_6);
 FUNC_1(&VAR_9, " ");
 FUNC_1(&VAR_9, VAR_7);

 FUNC_0(VAR_1, &VAR_9, VAR_8);
}
