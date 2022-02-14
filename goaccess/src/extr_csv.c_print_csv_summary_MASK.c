
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* intmax_t ;
struct TYPE_3__ {int processed; int valid; int invalid; int excluded_ip; char* resp_size; } ;
typedef TYPE_1__ GLog ;
typedef int FILE ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int *,char const*,int ,int ,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_22 ;
 long long VAR_23 ;
 int FUNC_7 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_8 (FILE * VAR_24, GLog * VAR_25)
{
  char VAR_26[VAR_0];
  char *VAR_27 = ((void*)0);
  const char *VAR_28;
  int VAR_29 = 0, VAR_30 = 0;
  long long VAR_31 = 0LL;

  FUNC_2 ();
  FUNC_7 (VAR_26, VAR_0, "%Y-%m-%d %H:%M:%S %z", VAR_22);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_26, VAR_4);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  VAR_30 = VAR_25->processed;
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_13);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  VAR_30 = VAR_25->valid;
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_15);


  VAR_30 = VAR_25->invalid;
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_6);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%lld\",\"%s\"\r\n";
  VAR_31 = (long long) VAR_21 - VAR_23;
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_31, VAR_8);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  VAR_30 = FUNC_6 (VAR_20);
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_16);


  VAR_30 = FUNC_5 (VAR_18);
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_7);


  VAR_30 = VAR_25->excluded_ip;
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_5);


  VAR_30 = FUNC_5 (VAR_17);
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_12);


  VAR_30 = FUNC_5 (VAR_2);
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_11);


  VAR_30 = FUNC_5 (VAR_19);
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_30, VAR_14);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%jd\",\"%s\"\r\n";
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, (intmax_t) FUNC_3 (),
           VAR_10);


  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%llu\",\"%s\"\r\n";
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_25->resp_size, VAR_3);


  VAR_27 = FUNC_4 (0);
  VAR_28 = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  FUNC_0 (VAR_24, VAR_28, VAR_29++, VAR_1, VAR_27, VAR_9);
  FUNC_1 (VAR_27);
}
