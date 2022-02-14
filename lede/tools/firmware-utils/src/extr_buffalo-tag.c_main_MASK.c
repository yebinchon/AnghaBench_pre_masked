
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*) ;
 void* VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int,char**,char*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_5 (void*,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_17, char *VAR_18[])
{
 int VAR_19 = VAR_0;
 int VAR_20;

 VAR_15 = FUNC_0(VAR_18[0]);

 while ( 1 ) {
  int VAR_21;

  VAR_21 = FUNC_2(VAR_17, VAR_18, "a:b:c:d:f:hi:l:m:o:p:r:sv:w:I:");
  if (VAR_21 == -1)
   break;

  switch (VAR_21) {
  case 'a':
   VAR_13 = VAR_12;
   break;
  case 'b':
   VAR_4 = VAR_12;
   break;
  case 'c':
   VAR_2 = FUNC_5(VAR_12, ((void*)0), 16);
   break;
  case 'd':
   VAR_3 = FUNC_5(VAR_12, ((void*)0), 16);
   break;
  case 'f':
   VAR_6 = FUNC_5(VAR_12, ((void*)0), 2);
   break;
  case 'I':
   VAR_5 = 1;

  case 'i':
   VAR_20 = FUNC_3(VAR_12);
   if (VAR_20)
    goto out;
   break;
  case 'l':
   VAR_8 = VAR_12;
   break;
  case 'm':
   VAR_10 = VAR_12;
   break;
  case 'o':
   VAR_11 = VAR_12;
   break;
  case 'p':
   VAR_14 = VAR_12;
   break;
  case 'r':
   VAR_20 = FUNC_4(VAR_12);
   if (VAR_20)
    goto out;
   break;
  case 's':
   VAR_16 = 1;
   break;
  case 'v':
   VAR_9 = VAR_12;
   break;
  case 'w':
   VAR_7 = VAR_12;
   break;
  case 'h':
   FUNC_7(VAR_1);
   break;
  default:
   FUNC_7(VAR_0);
   break;
  }
 }

 VAR_20 = FUNC_1();
 if (VAR_20)
  goto out;

 VAR_20 = FUNC_6();
 if (VAR_20)
  goto out;

 VAR_19 = VAR_1;

out:
 return VAR_19;
}
