
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fw_header {int dummy; } ;
struct TYPE_6__ {void* file_name; } ;
struct TYPE_5__ {void* file_name; } ;
struct TYPE_4__ {void* file_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (void*,char*,int *) ;
 int VAR_24 ;
 int FUNC_6 (int) ;
 void* VAR_25 ;
 void* VAR_26 ;

int FUNC_7(int VAR_27, char *VAR_28[])
{
 int VAR_29 = VAR_0;

 VAR_18 = FUNC_0(VAR_28[0]);

 while ( 1 ) {
  int VAR_30;

  VAR_30 = FUNC_3(VAR_27, VAR_28, "a:H:E:F:L:m:V:N:W:C:ci:k:r:R:o:OxX:ehsjv:");
  if (VAR_30 == -1)
   break;

  switch (VAR_30) {
  case 'a':
   FUNC_5(VAR_17, "0x%x", &VAR_20);
   break;
  case 'H':
   VAR_15 = VAR_17;
   break;
  case 'E':
   FUNC_5(VAR_17, "0x%x", &VAR_9);
   break;
  case 'F':
   VAR_12 = VAR_17;
   break;
  case 'W':
   VAR_16 = VAR_17;
   break;
  case 'C':
   VAR_4 = VAR_17;
   break;
  case 'L':
   FUNC_5(VAR_17, "0x%x", &VAR_11);
   break;
  case 'm':
   FUNC_5(VAR_17, "%u", &VAR_14);
   break;
  case 'V':
   VAR_26 = VAR_17;
   break;
  case 'v':
   VAR_7 = VAR_17;
   break;
  case 'N':
   VAR_25 = VAR_17;
   break;
  case 'c':
   VAR_3++;
   break;
  case 'k':
   VAR_10.file_name = VAR_17;
   break;
  case 'r':
   VAR_21.file_name = VAR_17;
   break;
  case 'R':
   FUNC_5(VAR_17, "0x%x", &VAR_22);
   break;
  case 'o':
   VAR_13 = VAR_17;
   break;
  case 'O':
   VAR_23 = 1;
   break;
  case 's':
   VAR_24 = 1;
   break;
  case 'i':
   VAR_8.file_name = VAR_17;
   break;
  case 'j':
   VAR_2 = 1;
   break;
  case 'x':
   VAR_6 = 1;
   break;
  case 'e':
   VAR_5 = 1;
   break;
  case 'h':
   FUNC_6(VAR_1);
   break;
  case 'X':
   FUNC_5(VAR_17, "0x%x", &VAR_19);
   break;
  default:
   FUNC_6(VAR_0);
   break;
  }
 }

 VAR_29 = FUNC_2();
 if (VAR_29)
  goto out;

 if (!VAR_8.file_name)
  VAR_29 = FUNC_1(sizeof(struct fw_header));
 else
  VAR_29 = FUNC_4();

 out:
 return VAR_29;
}
