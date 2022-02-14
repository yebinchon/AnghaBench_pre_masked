
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long long st_mode; unsigned long long st_uid; unsigned long long st_gid; scalar_t__ st_mtime; scalar_t__ st_size; } ;
struct passwd {int pw_name; } ;
struct group {int gr_name; } ;
typedef int gzFile ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct group* FUNC_2 (int) ;
 struct passwd* FUNC_3 (int) ;
 int FUNC_4 (char*,char const* const,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,unsigned long long) ;
 char* FUNC_7 (char const* const,char) ;
 int FUNC_8 (char*,char const* const) ;
 int FUNC_9 (char const* const) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*,int,char) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,int,char const* const) ;
 int FUNC_14 (int,char*,char const* const) ;

__attribute__((used)) static int FUNC_15 (gzFile VAR_0, char VAR_1[512], struct stat *VAR_2, const char *const VAR_3) {
  FUNC_5 (VAR_1, 0, 512);
  int VAR_4 = FUNC_9 (VAR_3);
  const int VAR_5 = 99;
  int VAR_6 = 0;
  if (VAR_4 > VAR_5) {
    char *VAR_7 = FUNC_7 (VAR_3 + VAR_4 - VAR_5, '/');
    if (VAR_7 == ((void*)0)) {
      VAR_6 = 1;
    } else {
      int VAR_8 = VAR_7 - VAR_3;
      if (VAR_8 > 155) {
        VAR_6 = 1;
      } else {
        FUNC_8 (VAR_1, VAR_3 + VAR_8 + 1);
        FUNC_4 (VAR_1 + 345, VAR_3, VAR_8);
      }
    }
  } else {
    FUNC_8 (VAR_1, VAR_3);
  }

  if (VAR_6) {
    FUNC_14 (2, "too long full filename: %s\n", VAR_3);
    VAR_4 = FUNC_9 (VAR_3);
    FUNC_11 (VAR_1, VAR_4, 'L');
    int VAR_9 = FUNC_13 (VAR_0, VAR_1, VAR_4, VAR_3);
    if (VAR_9 < 0) {
      return VAR_9;
    }
    FUNC_5 (VAR_1, 0, 512);
    FUNC_4 (VAR_1, VAR_3, 100);
  }

  FUNC_6 (VAR_1 + 100, "%07o", VAR_2->st_mode);
  FUNC_6 (VAR_1 + 108, "%07o", VAR_2->st_uid);
  FUNC_6 (VAR_1 + 116, "%07o", VAR_2->st_gid);
  FUNC_6 (VAR_1 + 124, "%011llo", (unsigned long long) VAR_2->st_size);
  FUNC_6 (VAR_1 + 136, "%011llo", (unsigned long long) VAR_2->st_mtime);
  FUNC_12 (VAR_1);

  VAR_1[156] = '0';
  if (FUNC_1 (VAR_2->st_mode)) {
    VAR_1[156] = '2';
  } else if (FUNC_0 (VAR_2->st_mode)) {
    VAR_1[156] = '5';
  }

  struct passwd *VAR_10 = FUNC_3 (VAR_2->st_uid);
  FUNC_10 (VAR_1 + 265, VAR_10->pw_name, 32);
  struct group *VAR_11 = FUNC_2 (VAR_2->st_gid);
  FUNC_10 (VAR_1 + 297, VAR_11->gr_name, 32);
  return 0;
}
