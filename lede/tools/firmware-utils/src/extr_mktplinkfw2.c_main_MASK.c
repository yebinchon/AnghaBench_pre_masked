
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fw_header {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {void* file_name; } ;
struct TYPE_6__ {void* file_name; } ;
struct TYPE_5__ {void* file_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_8 ;
 int FUNC_5 () ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (void*,char*,int *) ;
 int VAR_23 ;
 void* VAR_24 ;
 int FUNC_7 (int) ;
 void* VAR_25 ;
 void* VAR_26 ;

int FUNC_8(int VAR_27, char *VAR_28[])
{
 int VAR_29 = VAR_0;

 VAR_19 = FUNC_1(VAR_28[0]);

 while ( 1 ) {
  int VAR_30;

  VAR_30 = FUNC_4(VAR_27, VAR_28, "a:H:E:F:L:V:N:W:w:ci:k:r:R:o:xhsjv:y:T:e");
  if (VAR_30 == -1)
   break;

  switch (VAR_30) {
  case 'a':
   FUNC_6(VAR_18, "0x%x", &VAR_20);
   break;
  case 'H':
   VAR_15 = VAR_18;
   break;
  case 'E':
   FUNC_6(VAR_18, "0x%x", &VAR_10);
   break;
  case 'F':
   VAR_13 = VAR_18;
   break;
  case 'W':
   VAR_16 = VAR_18;
   break;
  case 'w':
   VAR_17 = VAR_18;
   break;
  case 'L':
   FUNC_6(VAR_18, "0x%x", &VAR_12);
   break;
  case 'V':
   VAR_26 = VAR_18;
   break;
  case 'v':
   VAR_7 = VAR_18;
   break;
  case 'y':
   VAR_24 = VAR_18;
   break;
  case 'N':
   VAR_25 = VAR_18;
   break;
  case 'c':
   VAR_4++;
   break;
  case 'k':
   VAR_11.file_name = VAR_18;
   break;
  case 'r':
   VAR_21.file_name = VAR_18;
   break;
  case 'R':
   FUNC_6(VAR_18, "0x%x", &VAR_22);
   break;
  case 'o':
   VAR_14 = VAR_18;
   break;
  case 's':
   VAR_23 = 1;
   break;
  case 'i':
   VAR_9.file_name = VAR_18;
   break;
  case 'j':
   VAR_3 = 1;
   break;
  case 'x':
   VAR_6 = 1;
   break;
  case 'T':
   VAR_8 = FUNC_0(VAR_18);
   break;
  case 'e':
   VAR_5.flags = VAR_2;
   break;
  case 'h':
   FUNC_7(VAR_1);
   break;
  default:
   FUNC_7(VAR_0);
   break;
  }
 }

 VAR_29 = FUNC_3();
 if (VAR_29)
  goto out;

 if (!VAR_9.file_name)
  VAR_29 = FUNC_2(sizeof(struct fw_header));
 else
  VAR_29 = FUNC_5();

 out:
 return VAR_29;
}
