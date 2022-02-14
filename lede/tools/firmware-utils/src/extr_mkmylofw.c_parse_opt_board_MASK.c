
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flash_size; int sdid; int svid; int did; int vid; } ;
struct TYPE_4__ {int sdid; int svid; int did; int vid; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_2__* FUNC_1 (char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (char,char*) ;

int
FUNC_3(char VAR_3, char *VAR_4)
{
 if (FUNC_2(VAR_3, VAR_4)) {
  goto err_out;
 }

 VAR_0 = FUNC_1(VAR_4);
 if (VAR_0 == ((void*)0)){
  FUNC_0(0,"invalid/unknown board specified: %s", VAR_4);
  goto err_out;
 }

 VAR_2.vid = VAR_0->vid;
 VAR_2.did = VAR_0->did;
 VAR_2.svid = VAR_0->svid;
 VAR_2.sdid = VAR_0->sdid;

 VAR_1 = VAR_0->flash_size;

 return 0;

err_out:
 return -1;
}
