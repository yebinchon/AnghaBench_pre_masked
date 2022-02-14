
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef int intmax_t ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (int,char*,int,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*) ;

int
FUNC_11(void)
{
 int VAR_9, VAR_10, VAR_11[2], VAR_12, VAR_13;
 char VAR_14[] = "ftruncate_file";
 struct stat VAR_15;
 ssize_t VAR_16;
 off_t VAR_17;
 char VAR_18;
 VAR_10 = FUNC_6(VAR_14, VAR_3|VAR_1, 0600);
 if (VAR_10 < 0)
  FUNC_1(1, "open(%s, O_RDWR|O_CREAT, 0600)", VAR_14);
 VAR_13 = FUNC_6(VAR_14, VAR_2);
 if (VAR_13 < 0) {
  VAR_9 = VAR_6;
  (void)FUNC_10(VAR_14);
  VAR_6 = VAR_9;
  FUNC_1(1, "open(%s, O_RDONLY)", VAR_14);
 }
 (void)FUNC_10(VAR_14);

 if (FUNC_4(VAR_10, -1) == 0)
  FUNC_2(1, "ftruncate(fd, -1) succeeded unexpectedly");
 if (VAR_6 != VAR_0)
  FUNC_1(1, "ftruncate(fd, -1) returned wrong error");

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_17 = VAR_7[VAR_12];
  if (FUNC_4(VAR_10, VAR_17) < 0)
   FUNC_1(1, "ftruncate(%jd) up", (intmax_t)VAR_17);
  if (FUNC_3(VAR_10, &VAR_15) < 0)
   FUNC_1(1, "stat");
  if (VAR_15.st_size != VAR_17)
   FUNC_2(-1, "fstat with len=%jd returned len %jd up",
       (intmax_t)VAR_17, (intmax_t)VAR_15.st_size);
  if (VAR_17 != 0) {
   VAR_16 = FUNC_8(VAR_10, &VAR_18, sizeof(VAR_18), VAR_17 - 1);
   if (VAR_16 < 0)
    FUNC_1(1, "pread on len %jd up", (intmax_t)VAR_17);
   if (VAR_16 != sizeof(VAR_18))
    FUNC_2(-1, "pread len %jd size %jd up",
        (intmax_t)VAR_17, (intmax_t)VAR_16);
   if (VAR_18 != 0)
    FUNC_2(-1,
        "pread length %jd size %jd ch %d up",
        (intmax_t)VAR_17, (intmax_t)VAR_16, VAR_18);
  }
 }

 for (VAR_12 = VAR_8 - 1; VAR_12 >= 0; VAR_12--) {
  VAR_17 = VAR_7[VAR_12];
  if (FUNC_4(VAR_10, VAR_17) < 0)
   FUNC_1(1, "ftruncate(%jd) down", (intmax_t)VAR_17);
  if (FUNC_3(VAR_10, &VAR_15) < 0)
   FUNC_1(1, "stat");
  if (VAR_15.st_size != VAR_17)
   FUNC_2(-1, "fstat(%jd) returned %jd down", (intmax_t)VAR_17,
       VAR_15.st_size);
 }
 FUNC_0(VAR_10);




 if (FUNC_4(VAR_13, 0) == 0)
  FUNC_2(-1, "ftruncate(read_only_fd) succeeded");
 if (VAR_6 != VAR_0)
  FUNC_1(1, "ftruncate(read_only_fd) returned wrong error");
 FUNC_0(VAR_13);




 VAR_10 = FUNC_9(VAR_4, VAR_5, 0);
 if (VAR_10 < 0)
  FUNC_1(1, "socket(PF_UNIX, SOCK_STREAM, 0)");
 if (FUNC_4(VAR_10, 0) == 0)
  FUNC_2(-1, "ftruncate(socket) succeeded");
 if (VAR_6 != VAR_0)
  FUNC_1(1, "ftruncate(socket) returned wrong error");
 FUNC_0(VAR_10);




 if (FUNC_7(VAR_11) < 0)
  FUNC_1(1, "pipe");
 if (FUNC_4(VAR_11[0], 0) == 0)
  FUNC_2(-1, "ftruncate(pipe) succeeded");
 if (VAR_6 != VAR_0)
  FUNC_1(1, "ftruncate(pipe) returned wrong error");
 FUNC_0(VAR_11[0]);
 FUNC_0(VAR_11[1]);




 VAR_10 = FUNC_5();
 if (VAR_10 < 0)
  FUNC_1(1, "kqueue");
 if (FUNC_4(VAR_11[0], 0) == 0)
  FUNC_2(-1, "ftruncate(kqueue) succeeded");
 if (VAR_6 != VAR_0)
  FUNC_1(1, "ftruncate(kqueue) returned wrong error");
 FUNC_0(VAR_10);

 return (0);
}
