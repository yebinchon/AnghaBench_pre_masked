
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*,unsigned long,void*,unsigned long,unsigned long*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (char const*,int,...) ;
 void* FUNC_5 (void*,unsigned long,void*,unsigned long,unsigned long*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int,void*,unsigned long) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_9 (int,void*,unsigned long) ;
 void* FUNC_10 (unsigned long) ;

int FUNC_11(int VAR_6, const char **VAR_7)
{
 int VAR_8;
 struct stat VAR_9;
 void *VAR_10, *VAR_11, *VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;

 if (VAR_6 != 5 || (FUNC_8(VAR_7[1], "-d") && FUNC_8(VAR_7[1], "-p"))) {
  FUNC_2(VAR_4, "usage: %s\n", VAR_5);
  return 1;
 }

 VAR_8 = FUNC_4(VAR_7[2], VAR_1);
 if (VAR_8 < 0 || FUNC_3(VAR_8, &VAR_9)) {
  FUNC_6(VAR_7[2]);
  return 1;
 }
 VAR_13 = VAR_9.st_size;
 VAR_10 = FUNC_10(VAR_13);
 if (FUNC_7(VAR_8, VAR_10, VAR_13) < 0) {
  FUNC_6(VAR_7[2]);
  FUNC_0(VAR_8);
  return 1;
 }
 FUNC_0(VAR_8);

 VAR_8 = FUNC_4(VAR_7[3], VAR_1);
 if (VAR_8 < 0 || FUNC_3(VAR_8, &VAR_9)) {
  FUNC_6(VAR_7[3]);
  return 1;
 }
 VAR_14 = VAR_9.st_size;
 VAR_11 = FUNC_10(VAR_14);
 if (FUNC_7(VAR_8, VAR_11, VAR_14) < 0) {
  FUNC_6(VAR_7[3]);
  FUNC_0(VAR_8);
  return 1;
 }
 FUNC_0(VAR_8);

 if (VAR_7[1][1] == 'd')
  VAR_12 = FUNC_1(VAR_10, VAR_13,
         VAR_11, VAR_14,
         &VAR_15, 0);
 else
  VAR_12 = FUNC_5(VAR_10, VAR_13,
          VAR_11, VAR_14,
          &VAR_15);
 if (!VAR_12) {
  FUNC_2(VAR_4, "delta operation failed (returned NULL)\n");
  return 1;
 }

 VAR_8 = FUNC_4 (VAR_7[4], VAR_3|VAR_0|VAR_2, 0666);
 if (VAR_8 < 0 || FUNC_9(VAR_8, VAR_12, VAR_15) < 0) {
  FUNC_6(VAR_7[4]);
  return 1;
 }

 return 0;
}
