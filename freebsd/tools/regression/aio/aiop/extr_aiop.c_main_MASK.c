
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct stat {int st_size; int st_mode; } ;
struct aiocb {int dummy; } ;
typedef int off_t ;
typedef int iot_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct aiocb**,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int,struct stat*) ;
 int FUNC_13 (struct timeval*,int *) ;
 int FUNC_14 (char const*,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 () ;
 int FUNC_17 (struct aiocb*,int ,int,int,int,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (struct timeval*,struct timeval*,struct timeval*) ;

int
FUNC_20(int VAR_6, char *VAR_7[])
{
 int VAR_8;
 struct stat VAR_9;
 struct aiocb *VAR_10;
 char **VAR_11;
 const char *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 off_t VAR_16, VAR_17;
 struct aiocb *VAR_18;
 int VAR_19, VAR_20;
 struct timeval VAR_21, VAR_22, VAR_23;
 float VAR_24;
 iot_t VAR_25;


 if (VAR_6 < 6) {
  FUNC_15("Usage: %s <file> <io size> <number of runs> <concurrency> <ro|wo|rw>\n",
      VAR_7[0]);
  FUNC_11(1);
 }

 VAR_12 = VAR_7[1];
 VAR_14 = FUNC_5(VAR_7[2]);
 if (VAR_14 <= 0)
  FUNC_10(1, "the I/O size must be >0");
 VAR_15 = FUNC_5(VAR_7[3]);
 if (VAR_15 <= 0)
  FUNC_10(1, "the number of runs must be >0");
 VAR_13 = FUNC_5(VAR_7[4]);
 if (VAR_13 <= 0)
  FUNC_10(1, "AIO concurrency must be >0");
 if (FUNC_18(VAR_7[5], "ro") == 0)
  VAR_25 = VAR_0;
 else if (FUNC_18(VAR_7[5], "rw") == 0)
  VAR_25 = VAR_0 | VAR_1;
 else if (FUNC_18(VAR_7[5], "wo") == 0)
  VAR_25 = VAR_1;
 else
  FUNC_10(1, "the I/O type needs to be \"ro\", \"rw\", or \"wo\"!\n");






 if (VAR_25 == VAR_0)
  VAR_8 = FUNC_14(VAR_12, VAR_3 | VAR_2);
 else if (VAR_25 == VAR_1)
  VAR_8 = FUNC_14(VAR_12, VAR_5 | VAR_2);
 else
  VAR_8 = FUNC_14(VAR_12, VAR_4 | VAR_2);

 if (VAR_8 < 0)
  FUNC_9(1, "open failed");
 if (FUNC_12(VAR_8, &VAR_9) < 0)
  FUNC_9(1, "fstat failed");
 if (FUNC_2(VAR_9.st_mode)) {
  VAR_16 = VAR_9.st_size;
 } else if (FUNC_0(VAR_9.st_mode) || FUNC_1(VAR_9.st_mode)) {
  VAR_16 = FUNC_8(VAR_8);
 } else
  FUNC_10(1, "unknown file type");
 if (VAR_16 <= 0)
  FUNC_10(1, "path provided too small");

 FUNC_15("File: %s; File size %jd bytes\n", VAR_12, (intmax_t)VAR_16);

 VAR_10 = FUNC_6(VAR_13, sizeof(struct aiocb));
 VAR_11 = FUNC_6(VAR_13, sizeof(char *));
 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++)
  VAR_11[VAR_19] = FUNC_6(1, VAR_14 * sizeof(char));


 FUNC_13(&VAR_21, ((void*)0));
 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  VAR_17 = FUNC_16() % (VAR_16 / VAR_14);
  VAR_17 *= VAR_14;
  FUNC_17(VAR_10 + VAR_19, FUNC_7(VAR_25), VAR_8, VAR_17, VAR_14, VAR_11[VAR_19]);
 }

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  FUNC_3(&VAR_18, ((void*)0));
  VAR_20 = VAR_18 - VAR_10;
  FUNC_4(VAR_20 < VAR_13);
  FUNC_4(VAR_20 >= 0);
  VAR_17 = FUNC_16() % (VAR_16 / VAR_14);
  VAR_17 *= VAR_14;
  FUNC_17(VAR_10 + VAR_20, FUNC_7(VAR_25), VAR_8, VAR_17, VAR_14, VAR_11[VAR_20]);
 }

 FUNC_13(&VAR_22, ((void*)0));
 FUNC_19(&VAR_22, &VAR_21, &VAR_23);
 VAR_24 = ((float) (VAR_23.tv_usec)) / 1000000.0;
 VAR_24 += (float) (VAR_23.tv_sec);
 FUNC_15("Runtime: %.2f seconds, ", VAR_24);
 FUNC_15("Op rate: %.2f ops/sec, ", ((float) (VAR_15)) / VAR_24);
 FUNC_15("Avg transfer rate: %.2f bytes/sec\n", ((float) (VAR_15)) * ((float)VAR_14) / VAR_24);



 FUNC_11(0);
}
