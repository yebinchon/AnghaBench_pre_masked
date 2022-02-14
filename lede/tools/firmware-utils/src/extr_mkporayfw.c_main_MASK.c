
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* file_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_5 ;
 int FUNC_4 () ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;

int FUNC_6(int VAR_11, char *VAR_12[])
{
 int VAR_13 = VAR_0;

 VAR_10 = FUNC_0(VAR_12[0]);

 int VAR_14;

 while ((VAR_14 = FUNC_3(VAR_11, VAR_12, "B:H:F:f:o:ixh")) != -1) {
  switch (VAR_14) {
  case 'B':
   VAR_2 = VAR_9;
   break;
  case 'H':
   VAR_8 = VAR_9;
   break;
  case 'F':
   VAR_6 = VAR_9;
   break;
  case 'f':
   VAR_4.file_name = VAR_9;
   break;
  case 'o':
   VAR_7 = VAR_9;
   break;
  case 'i':
   VAR_5 = 1;
   break;
  case 'x':
   VAR_5 = 1;
   VAR_3 = 1;
   break;
  case 'h':
   FUNC_5(VAR_1);
   break;
  default:
   FUNC_5(VAR_0);
   break;
  }
 }

 VAR_13 = FUNC_2();
 if (VAR_13) {
  goto out;
 }
 if (!VAR_5) {
  VAR_13 = FUNC_1();
 } else {
  VAR_13 = FUNC_4();
 }

 out:
 return VAR_13;
}
