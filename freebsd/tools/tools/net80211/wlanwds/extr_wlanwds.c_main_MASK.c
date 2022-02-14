
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_msghdr {int dummy; } ;
typedef int ssize_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (struct rt_msghdr*,int ) ;
 char** VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (char*,int,int ) ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 void* VAR_15 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_11 (char const*) ;

int
FUNC_12(int VAR_17, char *VAR_18[])
{
 const char *VAR_19 = VAR_18[0];
 const char *VAR_20 = ((void*)0);
 int VAR_21, VAR_22, VAR_23, VAR_24 = 1;
 char VAR_25[2048];
 int VAR_26 = 0;

 VAR_23 = FUNC_0(VAR_5);
 while ((VAR_22 = FUNC_4(VAR_17, VAR_18, "efjP:s:tv")) != -1)
  switch (VAR_22) {
  case 'e':
   VAR_26 = VAR_6;
   break;
  case 'f':
   VAR_24 = 0;
   break;
  case 'j':
   VAR_10 = 1;
   break;
  case 'P':
   VAR_20 = VAR_13;
   break;
  case 's':
   VAR_15 = VAR_13;
   break;
  case 't':
   VAR_23 = FUNC_0(VAR_4);
   break;
  case 'v':
   VAR_23 = FUNC_0(VAR_3);
   break;
  case '?':
   FUNC_11(VAR_19);

  }
 VAR_17 -= VAR_14, VAR_18 += VAR_14;
 if (VAR_17 == 0) {
  FUNC_3(VAR_16, "%s: no ifnet's specified to monitor\n",
      VAR_19);
  FUNC_11(VAR_19);
 }
 VAR_11 = VAR_18;
 VAR_12 = VAR_17;

 VAR_21 = FUNC_10(VAR_8, VAR_9, 0);
 if (VAR_21 < 0)
  FUNC_2(VAR_0, "socket");



 FUNC_8(VAR_21);


 if (VAR_24 && FUNC_1(0, 0) < 0)
  FUNC_2(VAR_0, "daemon");

 FUNC_6("wlanwds", VAR_26 | VAR_7 | VAR_1, VAR_2);
 FUNC_9(VAR_23);

 for (;;) {
  ssize_t VAR_27 = FUNC_7(VAR_21, VAR_25, sizeof(VAR_25));
  FUNC_5((struct rt_msghdr *)VAR_25, VAR_27);
 }
 return 0;
}
