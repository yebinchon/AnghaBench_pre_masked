
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef void* u_int ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 void* VAR_3 ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* VAR_8 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 long long FUNC_5 (void*,char**,int) ;
 int * VAR_9 ;

int
FUNC_6(int VAR_10, char *VAR_11[])
{
 long long VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 VAR_14 = ((void*)0);
 while ((VAR_15 = FUNC_1(VAR_10, VAR_11, "A:dF:f:Np:t:T:")) != -1) {
  switch (VAR_15) {
  case 'A':
   VAR_1 = VAR_5;
   break;
  case 'd':
   VAR_2++;
   break;
  case 'F':
   VAR_12 = FUNC_5(VAR_5, &VAR_13, 10);
   if (*VAR_13 != '\0' || VAR_12 < 0)
    FUNC_0(VAR_0, "Invalid FIB number");
   VAR_3 = (u_int)VAR_12;
   break;
  case 'f':
   VAR_12 = FUNC_5(VAR_5, &VAR_13, 10);
   if (*VAR_13 != '\0' || VAR_12 < 0)
    FUNC_0(VAR_0, "Invalid FIB number");
   VAR_8 = (u_int)VAR_12;
   break;
  case 'N':
   VAR_4=1;
   break;
  case 'p':
   VAR_12 = FUNC_5(VAR_5, &VAR_13, 10);
   if (*VAR_13 != '\0' || VAR_12 < 0)
    FUNC_0(VAR_0, "Invalid port number");
   VAR_7 = (uint16_t)VAR_12;
   break;
  case 't':
   VAR_9 = VAR_5;
   break;
  case 'T':
   VAR_14 = VAR_5;
   break;
  case '?':
  default:
   FUNC_0(VAR_0, "Unknown command line option at '%c'",
       VAR_6);

  }
 }

 if (VAR_9 == ((void*)0))
  FUNC_0(VAR_0, "Mandatory option -t <testcase> not given");
 if (VAR_14 == ((void*)0))
  FUNC_0(VAR_0, "Mandatory option -T <afname> not given");

 if (FUNC_4(VAR_14, "TCP6") == 0)
  VAR_16 = FUNC_2();
 else if (FUNC_4(VAR_14, "UDP6") == 0)
  VAR_16 = FUNC_3();
 else
  FUNC_0(VAR_0, "Mandatory option -T %s not a valid option",
      VAR_14);

 return (VAR_16);
}
