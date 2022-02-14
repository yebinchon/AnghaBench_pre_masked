
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char**,char**) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ,int ) ;
 int VAR_8 ;

void FUNC_9(void)
{
 char *VAR_9, *VAR_10;
 bool VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_4 = FUNC_0(VAR_0);
 VAR_12 = FUNC_8(VAR_2, VAR_3);
 while (*VAR_12) {
  VAR_12 = FUNC_4(VAR_12, &VAR_9, &VAR_10);

  if (!FUNC_7(VAR_9, "mem") && VAR_10) {
   VAR_5 = FUNC_5(FUNC_2(VAR_10, ((void*)0)), VAR_1);
   VAR_6 = 1;
  }

  if (!FUNC_7(VAR_9, "vmalloc") && VAR_10)
   VAR_8 = FUNC_6(FUNC_2(VAR_10, ((void*)0)), VAR_1);

  if (!FUNC_7(VAR_9, "noexec")) {
   VAR_13 = FUNC_1(VAR_10, &VAR_11);
   if (!VAR_13 && !VAR_11)
    VAR_7 = 1;
  }

  if (!FUNC_7(VAR_9, "facilities") && VAR_10)
   FUNC_3(VAR_10);

  if (!FUNC_7(VAR_9, "nokaslr"))
   VAR_4 = 0;
 }
}
