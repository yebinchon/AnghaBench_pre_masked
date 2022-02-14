
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* b_buf; int b_bsize; } ;
typedef int FILE ;
typedef TYPE_1__ BUF ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char**,char*) ;
 void* FUNC_8 (int*,int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_6, char *VAR_7[])
{
 BUF *VAR_8;
 int VAR_9, VAR_10;
 FILE *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 BUF VAR_15[2];

 VAR_11 = ((void*)0);
 while ((VAR_13 = FUNC_7(VAR_6, VAR_7, "dlq")) != -1)
  switch (VAR_13) {
  case 'd':
   VAR_1 = 1;
   break;
  case 'l':
   VAR_2 = 1;
   break;
  case 'q':
   VAR_4 = 1;
   break;
  case '?':
  default:
   FUNC_11();
  }
 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;

 switch (VAR_6) {
 case 0:
  VAR_11 = VAR_5;
  break;
 case 1:
  if ((VAR_11 = FUNC_5(*VAR_7, "r")) == ((void*)0))
   FUNC_1(1, "%s", *VAR_7);
  break;
 default:
  FUNC_11();
 }

 for (VAR_8 = VAR_15, VAR_10 = 2; --VAR_10 >= 0; VAR_8++)
  VAR_8->b_buf = FUNC_8(((void*)0), VAR_8->b_bsize = 1024);


 for (VAR_10 = 0, VAR_9 = FUNC_6(VAR_11);;) {
  while (VAR_9 != VAR_0 && FUNC_9(VAR_9))
   VAR_9 = FUNC_6(VAR_11);
  if (VAR_9 == VAR_0)
   break;

  VAR_14 = 0;
  VAR_8 = &VAR_15[VAR_10];
  VAR_12 = VAR_8->b_bsize;
  do {
   VAR_8->b_buf[VAR_14++] = VAR_9;
   if (VAR_14 == VAR_12)
    VAR_8->b_buf = FUNC_8(VAR_8->b_buf, VAR_12 *= 2);
   VAR_9 = FUNC_6(VAR_11);
  } while (VAR_9 != VAR_0 && !FUNC_9(VAR_9));

  VAR_8->b_buf[VAR_14] = '\0';
  VAR_8->b_bsize = VAR_12;
  if (VAR_10)
   FUNC_0(VAR_15[0].b_buf, VAR_15[1].b_buf);
  VAR_10 = !VAR_10;
 }
 (void)FUNC_4(VAR_11);
 if (VAR_10)
  FUNC_2(1, "odd data count");


 FUNC_10();
 FUNC_3(0);
}
