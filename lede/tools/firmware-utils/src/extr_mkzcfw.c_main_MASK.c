
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* file_name; } ;
struct TYPE_3__ {void* file_name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char*) ;
 TYPE_2__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int) ;

int FUNC_5(int VAR_8, char *VAR_9[])
{
 int VAR_10 = VAR_0;
 int VAR_11;

 FILE *VAR_12;

 VAR_6 = FUNC_0(VAR_9[0]);

 while ( 1 ) {
  int VAR_13;

  VAR_13 = FUNC_3(VAR_8, VAR_9, "B:k:r:o:h");
  if (VAR_13 == -1)
   break;

  switch (VAR_13) {
  case 'B':
   VAR_2 = VAR_5;
   break;
  case 'k':
   VAR_3.file_name = VAR_5;
   break;
  case 'r':
   VAR_7.file_name = VAR_5;
   break;
  case 'o':
   VAR_4 = VAR_5;
   break;
  case 'h':
   FUNC_4(VAR_1);
   break;
  default:
   FUNC_4(VAR_0);
   break;
  }
 }

 VAR_10 = FUNC_2();
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_1();

 out:
 return VAR_10;
}
