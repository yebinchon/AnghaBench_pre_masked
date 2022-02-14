
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int,char**,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;

int FUNC_5(int VAR_7, char *VAR_8[])
{
 int VAR_9 = VAR_0;
 int VAR_10;

 VAR_6 = FUNC_0(VAR_8[0]);

 while ( 1 ) {
  int VAR_11;

  VAR_11 = FUNC_3(VAR_7, VAR_8, "di:o:h");
  if (VAR_11 == -1)
   break;

  switch (VAR_11) {
  case 'd':
   VAR_2 = 1;
   break;
  case 'i':
   VAR_3 = VAR_5;
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

 VAR_10 = FUNC_1();
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_2();
 if (VAR_10)
  goto out;

 VAR_9 = VAR_1;

out:
 return VAR_9;
}
