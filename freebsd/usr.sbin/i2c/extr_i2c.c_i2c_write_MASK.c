
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int width; int mode; int count; int addr; int off; } ;
struct iiccmd {int count; char* buf; int last; int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (int,int ) ;
 char* FUNC_8 (char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_9(char *VAR_6, struct options VAR_7, char *VAR_8)
{
 struct iiccmd VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char *VAR_13, *VAR_14;

 VAR_11 = FUNC_6(VAR_6, VAR_4);
 if (VAR_11 == -1) {
  FUNC_3(VAR_8);
  FUNC_1(1, "open failed");
 }

 VAR_9.slave = VAR_7.addr;
 VAR_10 = FUNC_4(VAR_11, VAR_1, &VAR_9);
 if (VAR_10 == -1) {
  VAR_13 = "ioctl: error sending start condition";
  goto err1;
 }

 if (VAR_7.width) {
  VAR_12 = VAR_7.width / 8;
  VAR_14 = FUNC_7(VAR_12, VAR_7.off);
  if (VAR_14 == ((void*)0)) {
   VAR_13 = "error: offset malloc";
   goto err1;
  }
 } else {
  VAR_12 = 0;
  VAR_14 = ((void*)0);
 }

 switch(VAR_7.mode) {
 case 128:



  if (VAR_7.width) {
   VAR_9.count = VAR_12;
   VAR_9.buf = VAR_14;
   VAR_10 = FUNC_4(VAR_11, VAR_3, &VAR_9);
   FUNC_3(VAR_14);
   if (VAR_10 == -1) {
    VAR_13 = "ioctl: error writing offset";
    goto err1;
   }
  }

  VAR_10 = FUNC_4(VAR_11, VAR_2);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error sending stop condition";
   goto err2;
  }
  VAR_9.slave = VAR_7.addr;
  VAR_10 = FUNC_4(VAR_11, VAR_1, &VAR_9);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error sending start condition";
   goto err1;
  }




  VAR_9.count = VAR_7.count;
  VAR_9.buf = VAR_8;
  VAR_9.last = 0;
  VAR_10 = FUNC_4(VAR_11, VAR_3, &VAR_9);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error writing";
   goto err1;
  }
  break;

 case 129:



  if (VAR_7.width) {
   VAR_9.count = VAR_12;
   VAR_9.buf = VAR_14;
   VAR_10 = FUNC_4(VAR_11, VAR_3, &VAR_9);
   FUNC_3(VAR_14);
   if (VAR_10 == -1) {
    VAR_13 = "ioctl: error writing offset";
    goto err1;
   }
  }

  VAR_9.slave = VAR_7.addr;
  VAR_10 = FUNC_4(VAR_11, VAR_0, &VAR_9);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error sending repeated start "
       "condition";
   goto err1;
  }




  VAR_9.count = VAR_7.count;
  VAR_9.buf = VAR_8;
  VAR_9.last = 0;
  VAR_10 = FUNC_4(VAR_11, VAR_3, &VAR_9);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error writing";
   goto err1;
  }
  break;

 case 130:
 default:
  VAR_14 = FUNC_8(VAR_14, VAR_12 + VAR_7.count);
  if (VAR_14 == ((void*)0)) {
   VAR_13 = "error: data malloc";
   goto err1;
  }

  FUNC_5(VAR_14 + VAR_12, VAR_8, VAR_7.count);



  VAR_9.count = VAR_12 + VAR_7.count;
  VAR_9.buf = VAR_14;
  VAR_9.last = 0;
  VAR_10 = FUNC_4(VAR_11, VAR_3, &VAR_9);
  FUNC_3(VAR_14);
  if (VAR_10 == -1) {
   VAR_13 = "ioctl: error writing";
   goto err1;
  }
  break;
 }
 VAR_10 = FUNC_4(VAR_11, VAR_2);
 if (VAR_10 == -1) {
  VAR_13 = "ioctl: error sending stop condition";
  goto err2;
 }

 FUNC_0(VAR_11);
 return (0);

err1:
 VAR_10 = FUNC_4(VAR_11, VAR_2);
 if (VAR_10 == -1)
  FUNC_2(VAR_5, "error sending stop condition\n");
err2:
 if (VAR_13)
  FUNC_2(VAR_5, "%s\n", VAR_13);

 FUNC_0(VAR_11);
 return (1);
}
