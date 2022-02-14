
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int*,size_t*,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_0;
 int VAR_1 = 0;
 size_t VAR_2 = sizeof(int);



 VAR_0 = FUNC_0("hw.usb.no_pf", &VAR_1,
     &VAR_2, ((void*)0), 0);
 if (VAR_0 == 0 && VAR_1 != 0) {
  FUNC_1("The USB packet filter might be disabled.");
  FUNC_1("See the \"hw.usb.no_pf\" sysctl for more information.");
 }
}
