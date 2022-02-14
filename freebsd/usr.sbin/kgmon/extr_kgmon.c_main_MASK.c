
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmvars {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvmvars*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 char* FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (struct kvmvars*) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char const*,char*,struct kvmvars*) ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct kvmvars*) ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct kvmvars*,int) ;
 int VAR_14 ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_15, char **VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20;
 struct kvmvars VAR_21;
 const char *VAR_22;
 char *VAR_23;

 if (FUNC_9(FUNC_6()) != 0) {
  FUNC_1(1, "seteuid failed\n");
 }
 VAR_23 = ((void*)0);
 VAR_22 = ((void*)0);
 while ((VAR_17 = FUNC_4(VAR_15, VAR_16, "M:N:Bbhpr")) != -1) {
  switch((char)VAR_17) {

  case 'M':
   VAR_23 = VAR_10;
   VAR_9 = 1;
   break;

  case 'N':
   VAR_22 = VAR_10;
   break;

  case 'B':
   VAR_0 = 1;
   break;

  case 'b':
   VAR_7 = 1;
   break;

  case 'h':
   VAR_8 = 1;
   break;

  case 'p':
   VAR_12 = 1;
   break;

  case 'r':
   VAR_13 = 1;
   break;

  default:
   FUNC_11();
  }
 }
 VAR_15 -= VAR_11;
 VAR_16 += VAR_11;



 if (*VAR_16) {
  VAR_22 = *VAR_16;
  if (*++VAR_16) {
   VAR_23 = *VAR_16;
   ++VAR_9;
  }
 }

 if (VAR_22 == ((void*)0))
  VAR_22 = FUNC_3();
 VAR_20 = FUNC_7(VAR_22, VAR_23, &VAR_21);
 VAR_18 = FUNC_5(&VAR_21);
 if (VAR_8)
  VAR_19 = VAR_4;
 else if (VAR_0)
  VAR_19 = VAR_3;
 else if (VAR_7)
  VAR_19 = VAR_5;
 else
  VAR_19 = VAR_18;
 if (VAR_12)
  FUNC_0(&VAR_21);
 if (VAR_13)
  FUNC_8(&VAR_21);
 if (VAR_20 == VAR_6)
  FUNC_10(&VAR_21, VAR_19);
 (void)FUNC_2(VAR_14, "kgmon: kernel profiling is %s.\n",
        VAR_19 == VAR_4 ? "off" :
        VAR_19 == VAR_3 ? "running (high resolution)" :
        VAR_19 == VAR_5 ? "running" :
        VAR_19 == VAR_1 ? "busy" :
        VAR_19 == VAR_2 ? "off (error)" :
        "in an unknown state");
 return (0);
}
