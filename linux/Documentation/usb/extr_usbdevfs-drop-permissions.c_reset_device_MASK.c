
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int) ;

void FUNC_3(int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2)
  FUNC_1("OK: USBDEVFS_RESET succeeded\n");
 else
  FUNC_1("ERROR: reset failed! (%d - %s)\n",
         -VAR_2, FUNC_2(-VAR_2));
}
