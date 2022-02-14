
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned short tv_sec; unsigned short tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int) ;
 unsigned char* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,int) ;
 unsigned short FUNC_7 () ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (unsigned char*,...) ;
 int FUNC_10 (unsigned char*,int ,int) ;
 int FUNC_11 (char const*,int ) ;
 long long FUNC_12 () ;
 int FUNC_13 (int,unsigned char*,int) ;
 int FUNC_14 (int,char*,int) ;

__attribute__((used)) static void FUNC_15 (const char *VAR_2, int VAR_3) {
  unsigned char *VAR_4 = FUNC_2 (64 + VAR_3, 1);
  FUNC_1 (VAR_4 != ((void*)0));
  long long VAR_5 = FUNC_12 ();
  struct timespec VAR_6;
  FUNC_1 (FUNC_3(VAR_0, &VAR_6) >= 0);
  FUNC_9 (VAR_4, &VAR_6.tv_sec, 4);
  FUNC_9 (VAR_4+4, &VAR_6.tv_nsec, 4);
  FUNC_9 (VAR_4+8, &VAR_5, 8);
  unsigned short VAR_7 = FUNC_7 ();
  FUNC_9 (VAR_4 + 16, &VAR_7, 2);
  int VAR_8 = FUNC_6 (VAR_4 + 18, 32) + 18;
  int VAR_9 = FUNC_11 (VAR_2, VAR_1);
  if (VAR_9 < 0) {
    FUNC_8 ("Warning: fail to open password file - \"%s\", %m.\n", VAR_2);
  } else {
    int VAR_10 = FUNC_13 (VAR_9, VAR_4 + VAR_8, VAR_3);
    if (VAR_10 < 0) {
      FUNC_8 ("Warning: fail to read password file - \"%s\", %m.\n", VAR_2);
    } else {
      FUNC_14 (1, "read %d bytes from password file.\n", VAR_10);
      VAR_8 += VAR_10;
    }
    FUNC_4 (VAR_9);
  }
  FUNC_0 (VAR_4, VAR_8);
  FUNC_10 (VAR_4, 0, VAR_8);
  FUNC_5 (VAR_4);
}
