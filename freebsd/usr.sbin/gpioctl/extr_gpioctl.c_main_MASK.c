
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gpio_handle_t ;
struct TYPE_3__ {int g_pin; int g_flags; } ;
typedef TYPE_1__ gpio_config_t ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_11 (scalar_t__,int,char*) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int*) ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_3, char **VAR_4)
{
 int VAR_5;
 gpio_config_t VAR_6;
 gpio_handle_t VAR_7;
 char *VAR_8 = ((void*)0);
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_16 = VAR_19 = VAR_20 = VAR_17 = VAR_18 = VAR_11 = 0;

 while ((VAR_12 = FUNC_4(VAR_3, VAR_4, "cf:lntvNp")) != -1) {
  switch (VAR_12) {
  case 'c':
   VAR_16 = 1;
   break;
  case 'f':
   VAR_8 = VAR_1;
   break;
  case 'l':
   VAR_17 = 1;
   break;
  case 'n':
   VAR_18 = 1;
   break;
  case 'N':
   VAR_11 = 129;
   break;
  case'p':
   VAR_11 = 128;
   break;
  case 't':
   VAR_19 = 1;
   break;
  case 'v':
   VAR_20 = 1;
   break;
  default:
   FUNC_17();
   break;
  }
 }
 VAR_4 += VAR_2;
 VAR_3 -= VAR_2;
 if (VAR_8 == ((void*)0))
  VAR_7 = FUNC_6(0);
 else
  VAR_7 = FUNC_7(VAR_8);
 if (VAR_7 == VAR_0) {
  FUNC_13("gpio_open");
  FUNC_1(1);
 }

 if (VAR_17) {
  FUNC_0(VAR_7, VAR_20);
  FUNC_5(VAR_7);
  FUNC_1(0);
 }

 if (VAR_3 == 0)
  FUNC_17();


 switch (VAR_11) {
 default:

  VAR_9 = FUNC_16(VAR_4[0], &VAR_15);
  if (VAR_15) {

   if (FUNC_3(VAR_7, VAR_4[0]) != -1)
    FUNC_2("%s is also a pin name, use -p or -N\n", VAR_4[0]);
  } else {

   if ((VAR_9 = FUNC_3(VAR_7, VAR_4[0])) == -1)
    FUNC_2("Can't find pin named \"%s\"\n", VAR_4[0]);
  }
  break;
 case 128:
  VAR_9 = FUNC_16(VAR_4[0], &VAR_15);
  if (!VAR_15)
   FUNC_2("Invalid pin number: %s\n", VAR_4[0]);
  break;
 case 129:
  if ((VAR_9 = FUNC_3(VAR_7, VAR_4[0])) == -1)
   FUNC_2("Can't find pin named \"%s\"\n", VAR_4[0]);
  break;
 }


 if (VAR_18) {
  if (VAR_3 != 2)
   FUNC_17();
  if (FUNC_11(VAR_7, VAR_9, VAR_4[1]) < 0) {
   FUNC_13("gpio_pin_set_name");
   FUNC_1(1);
  }
  FUNC_1(0);
 }

 if (VAR_19) {



  if (VAR_3 > 1)
   FUNC_17();
  if (FUNC_12(VAR_7, VAR_9) < 0) {
   FUNC_13("gpio_pin_toggle");
   FUNC_1(1);
  }
  FUNC_5(VAR_7);
  FUNC_1(0);
 }

 if (VAR_16) {
  VAR_13 = 0;
  for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
   VAR_14 = FUNC_15(VAR_4[VAR_5]);
   if (VAR_14 < 0)
    FUNC_2("Invalid flag: %s\n", VAR_4[VAR_5]);
   VAR_13 |= VAR_14;
  }
  VAR_6.g_pin = VAR_9;
  VAR_6.g_flags = VAR_13;
  if (FUNC_10(VAR_7, &VAR_6) < 0) {
   FUNC_13("gpio_pin_set_flags");
   FUNC_1(1);
  }
  FUNC_1(0);
 }




 if ((VAR_3 == 0) || (VAR_3 > 2))
  FUNC_17();




 if (VAR_3 == 1) {
  VAR_10 = FUNC_8(VAR_7, VAR_9);
  if (VAR_10 < 0) {
   FUNC_13("gpio_pin_get");
   FUNC_1(1);
  }
  FUNC_14("%d\n", VAR_10);
  FUNC_1(0);
 }


 VAR_10 = FUNC_16(VAR_4[1], &VAR_15);
 if (VAR_15 == 0 || ((VAR_10 != 0) && (VAR_10 != 1)))
  FUNC_2("Invalid pin value: %s\n", VAR_4[1]);




 if (FUNC_9(VAR_7, VAR_9, VAR_10) < 0) {
  FUNC_13("gpio_pin_set");
  FUNC_1(1);
 }

 FUNC_5(VAR_7);
 FUNC_1(0);
}
