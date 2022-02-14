
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ word; scalar_t__ byte; } ;
struct TYPE_3__ {void* word; void* byte; } ;
struct smbcmd {int cmd; int rcount; int wcount; unsigned short* rbuf; void** wbuf; TYPE_2__ rdata; TYPE_1__ wdata; int slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 unsigned short* VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,struct smbcmd*) ;
 void** VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int FUNC_1 (char*,unsigned short) ;
 int FUNC_2 (char) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 char* VAR_22 ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct smbcmd VAR_23;
 int VAR_24;

 VAR_23.slave = VAR_20;
 VAR_23.cmd = VAR_12;
 VAR_23.rcount = 0;
 VAR_23.wcount = 0;

 if (VAR_14 == ((void*)0) && VAR_16 > 0)
  VAR_14 = VAR_21? VAR_22: VAR_11;

 if (VAR_12 == -1) {

  if (VAR_16 == -1 && VAR_18 == 0)

   return (FUNC_0(VAR_13, VAR_4, &VAR_23));
  else if (VAR_16 == 0 && VAR_18 == -1)

   return (FUNC_0(VAR_13, VAR_3, &VAR_23));
  else if (VAR_16 == 1 && VAR_18 == -1) {

   if (FUNC_0(VAR_13, VAR_7, &VAR_23) == -1)
    return (-1);
   FUNC_1(VAR_14, (unsigned char)VAR_23.cmd);
   FUNC_2('\n');
   return (0);
  } else if (VAR_16 == -1 && VAR_18 == 1) {

   VAR_23.cmd = VAR_17[0];
   return (FUNC_0(VAR_13, VAR_8, &VAR_23));
  } else
   return (-2);
 }
 if (VAR_16 == 1 && VAR_18 == -1) {

  if (FUNC_0(VAR_13, VAR_5, &VAR_23) == -1)
   return (-1);
  FUNC_1(VAR_14, (unsigned char)VAR_23.rdata.byte);
  FUNC_2('\n');
  return (0);
 } else if (VAR_16 == -1 && VAR_18 == 1) {

  VAR_23.wdata.byte = VAR_17[0];
  return (FUNC_0(VAR_13, VAR_9, &VAR_23));
 } else if (VAR_21 && VAR_16 == 2 && VAR_18 == -1) {

  if (FUNC_0(VAR_13, VAR_6, &VAR_23) == -1)
   return (-1);
  FUNC_1(VAR_14, (unsigned short)VAR_23.rdata.word);
  FUNC_2('\n');
  return (0);
 } else if (VAR_21 && VAR_16 == -1 && VAR_18 == 2) {

  VAR_23.wdata.word = VAR_19;
  return (FUNC_0(VAR_13, VAR_10, &VAR_23));
 } else if (VAR_21 && VAR_16 == 2 && VAR_18 == 2) {




  VAR_23.wdata.word = VAR_19;
  if (FUNC_0(VAR_13, VAR_2, &VAR_23) == -1)
   return (-1);
  FUNC_1(VAR_14, (unsigned short)VAR_23.rdata.word);
  FUNC_2('\n');
  return (0);
 } else if (VAR_16 > 1 && VAR_18 == -1) {

  VAR_23.rbuf = VAR_15;
  VAR_23.rcount = VAR_16;
  if (FUNC_0(VAR_13, VAR_0, &VAR_23) == -1)
   return (-1);
  for (VAR_24 = 0; VAR_24 < VAR_23.rcount; VAR_24++) {
   if (VAR_24 != 0)
    FUNC_2(' ');
   FUNC_1(VAR_14, VAR_15[VAR_24]);
  }
  FUNC_2('\n');
  return (0);
 } else if (VAR_16 == -1 && VAR_18 > 1) {

  VAR_23.wbuf = VAR_17;
  VAR_23.wcount = VAR_18;
  return (FUNC_0(VAR_13, VAR_1, &VAR_23));
 }

 return (-2);
}
