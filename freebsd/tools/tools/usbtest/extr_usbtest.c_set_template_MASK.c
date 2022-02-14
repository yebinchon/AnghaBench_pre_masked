
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int *,int *,int*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1("hw.usb.template", ((void*)0), ((void*)0),
     &VAR_1, sizeof(VAR_1));

 if (VAR_2 != 0) {
  FUNC_0("WARNING: Could not set USB template "
      "to %d (error=%d)\n", VAR_1, VAR_0);
 }
}
