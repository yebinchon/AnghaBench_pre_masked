
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int,int ,int,int,scalar_t__) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,void*,int) ;

__attribute__((used)) static int
FUNC_6(char *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 void *VAR_18;

 VAR_15 = VAR_17 = VAR_16 = -1;
 VAR_18 = VAR_0;

 if ((VAR_16 = FUNC_3(VAR_11, VAR_5)) == -1) {
  FUNC_4("open");
  return -1;
 }

 VAR_18 = FUNC_1(((void*)0), VAR_14, VAR_8, VAR_2|VAR_1,
     VAR_16, VAR_12);


 if ((VAR_15 = FUNC_3(VAR_13, VAR_3|VAR_6|VAR_7|VAR_4,
     VAR_9|VAR_10)) == -1) {
  FUNC_4("open");
  goto cleanup;
 }

 if (FUNC_5(VAR_15, VAR_18, VAR_14) != VAR_14)
  FUNC_4("write");

 VAR_17 = 0;
cleanup:
 if (VAR_15 != -1)
  FUNC_0(VAR_15);

 if (VAR_18 != VAR_0)
  FUNC_2((void *)VAR_12, VAR_14);

 if (VAR_16 != -1)
  FUNC_0(VAR_16);

 return VAR_17;
}
