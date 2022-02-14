
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (int ,int,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (char*,int) ;
 int FUNC_8 (char const*,int ,int) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_5, char VAR_6)
{
 int VAR_7;
 int VAR_8;
 char *VAR_9;

 FUNC_0(0 < (VAR_8 = FUNC_4()));

 VAR_7 = FUNC_8(VAR_5, VAR_2, 0777);
 if (VAR_7 < 0)
  FUNC_2("shm_open failed in verify_object; errno=%d, path=%s",
      VAR_4, VAR_5);

 VAR_9 = FUNC_6(0, VAR_8, VAR_3, VAR_1, VAR_7, 0);
 if (VAR_9 == VAR_0)
  FUNC_2("mmap(1)");
 if (VAR_9[0] != VAR_6)
  FUNC_2("Renamed object has incorrect value; has"
      "%d (0x%x, '%c'), expected %d (0x%x, '%c')\n",
      VAR_9[0], VAR_9[0], FUNC_5(VAR_9[0]) ? VAR_9[0] : ' ',
      VAR_6, VAR_6,
      FUNC_5(VAR_6) ? VAR_6 : ' ');
 FUNC_1(FUNC_7(VAR_9, VAR_8) == 0, "munmap failed; errno=%d",
     VAR_4);
 FUNC_3(VAR_7);
}
