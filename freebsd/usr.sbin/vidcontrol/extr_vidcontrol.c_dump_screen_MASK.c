
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int xsize; int mv_csz; int ysize; int mv_rsz; int* buf; scalar_t__ mv_hsz; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ vid_info_t ;
typedef int u_int16_t ;
typedef TYPE_1__ scrshot_t ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int,int,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_10(int VAR_7, int VAR_8)
{
 scrshot_t VAR_9;
 vid_info_t VAR_10;

 VAR_10.size = sizeof(VAR_10);
 if (FUNC_4(0, VAR_0, &VAR_10) == -1) {
  FUNC_8();
  FUNC_1(1, "getting console information");
 }

 VAR_9.x = VAR_9.y = 0;
 VAR_9.xsize = VAR_10.mv_csz;
 VAR_9.ysize = VAR_10.mv_rsz;
 if (VAR_8 == VAR_2)
  VAR_9.ysize += VAR_10.mv_hsz;

 VAR_9.buf = FUNC_0(VAR_9.xsize * VAR_9.ysize * sizeof(u_int16_t));
 if (VAR_9.buf == ((void*)0)) {
  FUNC_8();
  FUNC_2(1, "failed to allocate memory for dump");
 }

 if (FUNC_4(0, VAR_1, &VAR_9) == -1) {
  FUNC_8();
  FUNC_1(1, "dumping screen");
 }

 if (VAR_7 == VAR_3) {
  FUNC_6("SCRSHOT_%c%c%c%c", VAR_4, 2,
         VAR_9.xsize, VAR_9.ysize);

  FUNC_3(VAR_6);

  FUNC_9(VAR_5, VAR_9.buf,
        VAR_9.xsize * VAR_9.ysize * sizeof(u_int16_t));
 } else {
  char *VAR_11;
  int VAR_12, VAR_13;
  u_int16_t VAR_14;

  VAR_11 = FUNC_0(VAR_9.xsize + 1);

  if (VAR_11 == ((void*)0)) {
   FUNC_8();
   FUNC_2(1, "failed to allocate memory for line buffer");
  }

  for (VAR_13 = 0; VAR_13 < VAR_9.ysize; VAR_13++) {
   for (VAR_12 = 0; VAR_12 < VAR_9.xsize; VAR_12++) {
    VAR_14 = VAR_9.buf[VAR_12 + (VAR_13 * VAR_9.xsize)];
    VAR_14 &= 0xff;

    if (FUNC_5(VAR_14) == 0)
     VAR_14 = ' ';

    VAR_11[VAR_12] = (char)VAR_14;
   }



   do {
    VAR_11[VAR_12--] = '\0';
   } while (VAR_11[VAR_12] == ' ' && VAR_12 != 0);

   FUNC_7(VAR_11);
  }

  FUNC_3(VAR_6);
 }
}
