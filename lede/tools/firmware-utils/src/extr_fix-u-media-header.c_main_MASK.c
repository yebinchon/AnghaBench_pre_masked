
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* file_name; } ;


 int FUNC_0 (char*,char*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_9, char *VAR_10[])
{
 int VAR_11 = VAR_0;

 VAR_8 = FUNC_1(VAR_10[0]);

 while (1) {
  int VAR_12;

  VAR_12 = FUNC_4(VAR_9, VAR_10, "B:Fi:o:T:h");
  if (VAR_12 == -1)
   break;

  switch (VAR_12) {
  case 'B':
   if (FUNC_5(VAR_7, &VAR_2)) {
    FUNC_0("%s is invalid '%s'",
        "board ID", VAR_7);
    goto out;
   }
   break;
  case 'T':
   if (FUNC_6(VAR_7, &VAR_5)) {
    FUNC_0("%s is invalid '%s'",
        "image type", VAR_7);
    goto out;
   }
   break;
  case 'F':
   VAR_3 = 1;
   break;
  case 'i':
   VAR_4.file_name = VAR_7;
   break;
  case 'o':
   VAR_6 = VAR_7;
   break;
  case 'h':
   FUNC_7(VAR_1);
   break;
  default:
   FUNC_7(VAR_0);
   break;
  }
 }

 VAR_11 = FUNC_2();
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_3();

out:
 return VAR_11;
}
