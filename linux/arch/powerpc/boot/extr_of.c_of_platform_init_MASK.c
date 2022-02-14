
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int setprop; int getprop; int finddevice; } ;
struct TYPE_5__ {unsigned long initrd_addr; unsigned long initrd_size; void* promptr; } ;
struct TYPE_4__ {int vmlinux_alloc; int exit; int malloc; int image_hdr; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_10, unsigned long VAR_11, void *VAR_12)
{
 VAR_9.image_hdr = VAR_5;
 VAR_9.malloc = VAR_7;
 VAR_9.exit = VAR_2;
 VAR_9.vmlinux_alloc = VAR_8;

 VAR_0.finddevice = VAR_3;
 VAR_0.getprop = VAR_4;
 VAR_0.setprop = VAR_6;

 FUNC_0();

 FUNC_1(VAR_12);
 VAR_1.promptr = VAR_12;
 if (VAR_10 && VAR_11 && VAR_11 != 0xdeadbeef) {
  VAR_1.initrd_addr = VAR_10;
  VAR_1.initrd_size = VAR_11;
 }
}
