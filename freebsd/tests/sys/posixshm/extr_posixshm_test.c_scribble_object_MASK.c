
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 char* FUNC_5 (int ,int,int,int ,int,int ) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int FUNC_7 (char const*,int,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 char const* VAR_9 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_10, char VAR_11)
{
 char *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(0 < (VAR_14 = FUNC_4()));

 VAR_13 = FUNC_7(VAR_10, VAR_3|VAR_4|VAR_5, 0777);
 if (VAR_13 < 0 && VAR_8 == VAR_0) {
  if (FUNC_8(VAR_9) < 0)
   FUNC_2("shm_unlink");
  VAR_13 = FUNC_7(VAR_9, VAR_3 | VAR_4 | VAR_5, 0777);
 }
 if (VAR_13 < 0)
  FUNC_2("shm_open failed; errno=%d", VAR_8);
 if (FUNC_3(VAR_13, VAR_14) < 0)
  FUNC_2("ftruncate failed; errno=%d", VAR_8);

 VAR_12 = FUNC_5(0, VAR_14, VAR_6 | VAR_7, VAR_2, VAR_13, 0);
 if (VAR_12 == VAR_1)
  FUNC_2("mmap failed; errno=%d", VAR_8);

 VAR_12[0] = VAR_11;
 FUNC_1(FUNC_6(VAR_12, VAR_14) == 0, "munmap failed; errno=%d",
     VAR_8);

 return (VAR_13);
}
