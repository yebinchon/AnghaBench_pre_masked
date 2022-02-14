
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct bcd_clocktime {int sec; int min; int hour; int day; int mon; int year; scalar_t__ nsec; scalar_t__ dow; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,int) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_15, struct timespec *VAR_16)
{
 struct bcd_clocktime VAR_17;


 if (!(FUNC_7(VAR_11) & VAR_3)) {
  FUNC_2(VAR_15, "WARNING: Battery failure indication\n");
  return (VAR_1);
 }
 FUNC_3(&VAR_14);
 while (FUNC_7(VAR_10) & VAR_2)
  continue;
 FUNC_4(&VAR_13);
 VAR_17.sec = FUNC_8(VAR_9);
 VAR_17.min = FUNC_8(VAR_7);
 VAR_17.hour = FUNC_8(VAR_6);
 VAR_17.day = FUNC_8(VAR_5);
 VAR_17.mon = FUNC_8(VAR_8);
 VAR_17.year = FUNC_8(VAR_12);



 FUNC_6(&VAR_13);
 FUNC_5(&VAR_14);

 VAR_17.dow = 0;
 VAR_17.nsec = 0;
 FUNC_1(VAR_15, VAR_0, &VAR_17);
 return (FUNC_0(&VAR_17, VAR_16, 0));
}
