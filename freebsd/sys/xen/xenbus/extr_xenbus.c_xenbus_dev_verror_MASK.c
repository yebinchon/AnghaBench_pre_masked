
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (unsigned int,int ,int ) ;
 int FUNC_5 (char*,char*,char*) ;
 unsigned int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,unsigned int,char const*,int ) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,char*,char*) ;

void
FUNC_10(device_t VAR_4, int VAR_5, const char *VAR_6, va_list VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);


 VAR_10 = FUNC_4(4096,VAR_1, VAR_0);

 VAR_9 = FUNC_6(VAR_10, "%i ", VAR_5);
 VAR_8 = FUNC_7(VAR_10+VAR_9, 4096 -VAR_9, VAR_6, VAR_7);

 FUNC_0(VAR_9 + VAR_8 <= 4096 -1, ("xenbus error message too big"));
 FUNC_1(VAR_4, "Error %s\n", VAR_10);
 VAR_11 = FUNC_2(VAR_4);

 if (VAR_11 == ((void*)0)) {
  FUNC_5("xenbus: failed to write error node for %s (%s)\n",
         FUNC_8(VAR_4), VAR_10);
  goto fail;
 }

 if (FUNC_9(VAR_3, VAR_11, "error", VAR_10) != 0) {
  FUNC_5("xenbus: failed to write error node for %s (%s)\n",
         FUNC_8(VAR_4), VAR_10);
  goto fail;
 }

 fail:
 if (VAR_10)
  FUNC_3(VAR_10,VAR_1);
 if (VAR_11)
  FUNC_3(VAR_11,VAR_1);
}
