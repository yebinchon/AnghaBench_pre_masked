
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* bootblock_quadwords; scalar_t__ bootblock_checksum; int bootblock_label; } ;
typedef TYPE_1__ bootblock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,long,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_7 (int,TYPE_1__*,int) ;

int FUNC_8(int VAR_4, char ** VAR_5)
{
    bootblock VAR_6;
    bootblock VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;
    int VAR_11;


    if(VAR_4 != 3) {
 FUNC_2(VAR_3, "Usage: %s device lxboot\n", VAR_5[0]);
 FUNC_1(0);
    }


    VAR_8 = FUNC_4(VAR_5[1], VAR_1);
    if(VAR_8 < 0) {
 FUNC_5(VAR_5[1]);
 FUNC_1(0);
    }


    VAR_9 = FUNC_4(VAR_5[2], VAR_0);
    if(VAR_9 < 0) {
 FUNC_5(VAR_5[2]);
 FUNC_0(VAR_8);
 FUNC_1(0);
    }


    VAR_11 = FUNC_6(VAR_9, &VAR_7, sizeof(bootblock));
    if(VAR_11 != sizeof(bootblock)) {
 FUNC_5("lxboot read");
 FUNC_2(VAR_3, "expected %zd, got %d\n", sizeof(bootblock), VAR_11);
 FUNC_1(0);
    }


    VAR_11 = FUNC_6(VAR_8, &VAR_6, sizeof(bootblock));
    if(VAR_11 != sizeof(bootblock)) {
 FUNC_5("bootblock read");
 FUNC_2(VAR_3, "expected %zd, got %d\n", sizeof(bootblock), VAR_11);
 FUNC_1(0);
    }


    VAR_7.bootblock_label = VAR_6.bootblock_label;


    VAR_7.bootblock_checksum = 0;
    for(VAR_10 = 0; VAR_10 < 63; VAR_10++) {
 VAR_7.bootblock_checksum +=
   VAR_7.bootblock_quadwords[VAR_10];
    }


    FUNC_3(VAR_8, 0L, VAR_2);
    if(FUNC_7(VAR_8, &VAR_7, sizeof(bootblock)) != sizeof(bootblock)) {
 FUNC_5("bootblock write");
 FUNC_1(0);
    }

    FUNC_0(VAR_9);
    FUNC_0(VAR_8);
    FUNC_1(0);
}
