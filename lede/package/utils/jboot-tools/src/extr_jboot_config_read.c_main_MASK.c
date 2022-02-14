
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__,struct data_header**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char**,char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct data_header*) ;
 int FUNC_6 (struct data_header**,int) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,char*,scalar_t__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int) ;
 int VAR_12 ;
 int FUNC_10 (struct data_header**,int) ;

int FUNC_11(int VAR_13, char *VAR_14[])
{
 int VAR_15 = VAR_0;
 int VAR_16 = 0;
 struct data_header *VAR_17[VAR_2];
 VAR_3 = ((void*)0);
 VAR_4 = 0;

 VAR_10 = FUNC_1(VAR_14[0]);
 VAR_11 = 0;
 VAR_6 = 0;
 VAR_9 = 0;
 VAR_12 = 0;
 VAR_7 = ((void*)0);
 VAR_5 = ((void*)0);

 while (1) {
  int VAR_18;

  VAR_18 = FUNC_4(VAR_13, VAR_14, "de:hi:mo:pv");
  if (VAR_18 == -1)
   break;

  switch (VAR_18) {
  case 'm':
   VAR_6 = 1;
   break;
  case 'i':
   VAR_5 = VAR_8;
   break;
  case 'e':
   VAR_7 = VAR_8;
   break;
  case 'o':
   FUNC_8(VAR_8, "0x%x", &VAR_11);
   break;
  case 'p':
   VAR_9 = 1;
   break;
  case 'v':
   VAR_12 = 1;
   FUNC_0("Enable verbose!");
   break;
  default:
   FUNC_9(VAR_0);
   break;
  }
 }

 if (!VAR_5)
  FUNC_9(VAR_0);

 VAR_15 = FUNC_7(VAR_5);

 if (VAR_15 || VAR_4 <= 0)
  goto out;

 VAR_16 = FUNC_2(VAR_3, VAR_4, VAR_17);

 if (VAR_16 <= 0)
  goto out_free_buf;

 if (VAR_9 || VAR_12) {
  for (int VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
   FUNC_5(VAR_17[VAR_19]);
 }

 if (VAR_6)
  FUNC_6(VAR_17, VAR_16);

 VAR_15 = VAR_1;

 if (VAR_7)
  VAR_15 = FUNC_10(VAR_17, VAR_16);

 out_free_buf:
 FUNC_3(VAR_3);
 out:
 return VAR_15;

}
