
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
struct cow_header_v3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,unsigned long long) ;
 int FUNC_3 (int ,unsigned long long,int,int,int,unsigned long*,int*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,int,int,unsigned long long*) ;

int FUNC_6(int VAR_2, char *VAR_3, char *VAR_4, int VAR_5,
    int VAR_6, int *VAR_7,
    unsigned long *VAR_8, int *VAR_9)
{
 unsigned long long VAR_10, VAR_11;
 char VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_3, VAR_2, VAR_4, VAR_5,
          VAR_6, &VAR_10);
 if (VAR_13)
  goto out;

 *VAR_7 = FUNC_0(sizeof(struct cow_header_v3), VAR_6);
 FUNC_3(VAR_0, VAR_10, VAR_5, VAR_6, *VAR_7,
    VAR_8, VAR_9);

 VAR_11 = *VAR_9 + VAR_10 - sizeof(VAR_12);
 VAR_13 = FUNC_2(VAR_2, VAR_11);
 if (VAR_13 < 0) {
  FUNC_1("cow bitmap lseek failed : err = %d\n", -VAR_13);
  goto out;
 }






 VAR_13 = FUNC_4(VAR_2, &VAR_12, sizeof(VAR_12));
 if (VAR_13 != sizeof(VAR_12)) {
  FUNC_1("Write of bitmap to new COW file '%s' failed, "
      "err = %d\n", VAR_3, -VAR_13);
  if (VAR_13 >= 0)
   VAR_13 = -VAR_1;
  goto out;
 }

 return 0;
 out:
 return VAR_13;
}
