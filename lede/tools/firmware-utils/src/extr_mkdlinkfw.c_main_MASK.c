
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* file_name; } ;
struct TYPE_7__ {void* file_name; } ;
struct TYPE_6__ {void* file_name; } ;
struct TYPE_5__ {void* file_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,char**,char*) ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (int ,void*,int) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_6 (void*,char*,scalar_t__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

int FUNC_10(int VAR_14, char *VAR_15[])
{
 int VAR_16 = VAR_0;

 VAR_11 = FUNC_0(VAR_15[0]);
 VAR_6 = VAR_2;
 VAR_3 = 0;
 VAR_4 = 0;

 while (1) {
  int VAR_17;

  VAR_17 = FUNC_3(VAR_14, VAR_15, "f:F:i:hk:m:o:r:s:");
  if (VAR_17 == -1)
   break;

  switch (VAR_17) {
  case 'f':
   FUNC_6(VAR_10, "0x%hx", &VAR_3);
   break;
  case 'F':
   VAR_5.file_name = VAR_10;
   VAR_6 = VAR_1;
   break;
  case 'i':
   VAR_7.file_name = VAR_10;
   break;
  case 'k':
   VAR_8.file_name = VAR_10;
   break;
  case 'm':
   if (FUNC_7(VAR_10) == 12)
    FUNC_5(VAR_12, VAR_10, 12);
   break;
  case 'r':
   VAR_13.file_name = VAR_10;
   break;
  case 'o':
   VAR_9 = VAR_10;
   break;
  case 's':
   FUNC_6(VAR_10, "0x%x", &VAR_4);
   break;
  default:
   FUNC_8(VAR_0);
   break;
  }
 }

 VAR_16 = FUNC_2();
 if (VAR_16)
  goto out;

 if (!VAR_7.file_name) {
  if (VAR_6 == VAR_1)
   VAR_16 = FUNC_9();
  else
   VAR_16 = FUNC_1();
  }
 else
  VAR_16 = FUNC_4();

 out:
 return VAR_16;

}
