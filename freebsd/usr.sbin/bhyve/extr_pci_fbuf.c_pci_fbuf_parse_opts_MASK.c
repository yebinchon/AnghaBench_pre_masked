
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct pci_fbuf_softc {int rfb_wait; int vga_enabled; int vga_full; void* rfb_password; TYPE_1__ memregs; void* rfb_host; void* rfb_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 void* FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int
FUNC_8(struct pci_fbuf_softc *VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_6 = VAR_5 = FUNC_6(VAR_4);
 while ((VAR_7 = FUNC_7(&VAR_5, ",")) != ((void*)0)) {
  if (FUNC_5(VAR_7, "wait") == 0) {
   VAR_3->rfb_wait = 1;
   continue;
  }

  if ((VAR_8 = FUNC_4(VAR_7, '=')) == ((void*)0)) {
   FUNC_3(VAR_7);
   VAR_10 = -1;
   goto done;
  }

  *VAR_8++ = '\0';

  FUNC_0(VAR_1, ("pci_fbuf option %s = %s\r\n",
     VAR_7, VAR_8));

  if (!FUNC_5(VAR_7, "tcp") || !FUNC_5(VAR_7, "rfb")) {





   VAR_9 = FUNC_7(&VAR_8, "]");
   if (VAR_8) {
    if (VAR_9[0] == '[')
     VAR_9++;
    VAR_3->rfb_host = FUNC_6(VAR_9);
    if (VAR_8[0] == ':')
     VAR_8++;
    else {
     FUNC_3(VAR_7);
     VAR_10 = -1;
     goto done;
    }
    VAR_3->rfb_port = FUNC_1(VAR_8);
   } else {
    VAR_8 = VAR_9;
    VAR_9 = FUNC_7(&VAR_8, ":");
    if (!VAR_8)
     VAR_3->rfb_port = FUNC_1(VAR_9);
    else {
     VAR_3->rfb_port = FUNC_1(VAR_8);
     VAR_3->rfb_host = FUNC_6(VAR_9);
    }
   }
         } else if (!FUNC_5(VAR_7, "vga")) {
   if (!FUNC_5(VAR_8, "off")) {
    VAR_3->vga_enabled = 0;
   } else if (!FUNC_5(VAR_8, "io")) {
    VAR_3->vga_enabled = 1;
    VAR_3->vga_full = 0;
   } else if (!FUNC_5(VAR_8, "on")) {
    VAR_3->vga_enabled = 1;
    VAR_3->vga_full = 1;
   } else {
    FUNC_3(VAR_7);
    VAR_10 = -1;
    goto done;
   }
         } else if (!FUNC_5(VAR_7, "w")) {
          VAR_3->memregs.width = FUNC_1(VAR_8);
   if (VAR_3->memregs.width > VAR_0) {
    FUNC_3(VAR_7);
    VAR_10 = -1;
    goto done;
   } else if (VAR_3->memregs.width == 0)
    VAR_3->memregs.width = 1920;
  } else if (!FUNC_5(VAR_7, "h")) {
   VAR_3->memregs.height = FUNC_1(VAR_8);
   if (VAR_3->memregs.height > VAR_2) {
    FUNC_3(VAR_7);
    VAR_10 = -1;
    goto done;
   } else if (VAR_3->memregs.height == 0)
    VAR_3->memregs.height = 1080;
  } else if (!FUNC_5(VAR_7, "password")) {
   VAR_3->rfb_password = FUNC_6(VAR_8);
  } else {
   FUNC_3(VAR_7);
   VAR_10 = -1;
   goto done;
  }
 }

done:
 FUNC_2(VAR_6);
 return (VAR_10);
}
