
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int width; int addr; scalar_t__ mode; int count; int off; } ;
struct iiccmd {int slave; int count; int last; char* buf; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iiccmd*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,...) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (int,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(char *VAR_9, struct options VAR_10, char *VAR_11)
{
 struct iiccmd VAR_12;
 int VAR_13, VAR_14, VAR_15;
 char *VAR_16, VAR_17 = 0, *VAR_18;

 VAR_13 = FUNC_6(VAR_9, VAR_7);
 if (VAR_13 == -1)
  FUNC_2(1, "open failed");

 FUNC_0(&VAR_12, sizeof(VAR_12));

 if (VAR_10.width) {
  VAR_12.slave = VAR_10.addr;
  VAR_12.count = 1;
  VAR_12.last = 0;
  VAR_12.buf = &VAR_17;
  VAR_14 = FUNC_5(VAR_13, VAR_2, &VAR_12);
  if (VAR_14 == -1) {
   VAR_16 = "ioctl: error sending start condition";
   goto err1;
  }
  VAR_15 = VAR_10.width / 8;
  VAR_18 = FUNC_7(VAR_15, VAR_10.off);
  if (VAR_18 == ((void*)0)) {
   VAR_16 = "error: offset malloc";
   goto err1;
  }

  VAR_12.count = VAR_15;
  VAR_12.buf = VAR_18;
  VAR_12.last = 0;
  VAR_14 = FUNC_5(VAR_13, VAR_4, &VAR_12);
  FUNC_4(VAR_18);
  if (VAR_14 == -1) {
   VAR_16 = "ioctl: error writing offset";
   goto err1;
  }

  if (VAR_10.mode == VAR_6) {
   VAR_14 = FUNC_5(VAR_13, VAR_3);
   if (VAR_14 == -1) {
    VAR_16 = "error sending stop condition";
    goto err2;
   }
  }
 }
 VAR_12.slave = VAR_10.addr | 1;
 VAR_12.count = 1;
 VAR_12.last = 0;
 VAR_12.buf = &VAR_17;
 if (VAR_10.mode == VAR_6 || VAR_10.width == 0) {
  VAR_14 = FUNC_5(VAR_13, VAR_2, &VAR_12);
  if (VAR_14 == -1) {
   VAR_16 = "ioctl: error sending start condition";
   goto err2;
  }
 } else if (VAR_10.mode == VAR_5) {
  VAR_14 = FUNC_5(VAR_13, VAR_1, &VAR_12);
  if (VAR_14 == -1) {
   VAR_16 = "ioctl: error sending repeated start "
       "condition";
   goto err1;
  }
 }

 VAR_12.count = VAR_10.count;
 VAR_12.buf = VAR_11;
 VAR_12.last = 1;
 VAR_14 = FUNC_5(VAR_13, VAR_0, &VAR_12);
 if (VAR_14 == -1) {
  VAR_16 = "ioctl: error while reading";
  goto err1;
 }

 VAR_14 = FUNC_5(VAR_13, VAR_3);
 if (VAR_14 == -1) {
  VAR_16 = "error sending stop condtion\n";
  goto err2;
 }

 FUNC_1(VAR_13);
 return (0);

err1:
 VAR_14 = FUNC_5(VAR_13, VAR_3);
 if (VAR_14 == -1)
  FUNC_3(VAR_8, "error sending stop condition\n");
err2:
 if (VAR_16)
  FUNC_3(VAR_8, "%s\n", VAR_16);

 FUNC_1(VAR_13);
 return (1);
}
