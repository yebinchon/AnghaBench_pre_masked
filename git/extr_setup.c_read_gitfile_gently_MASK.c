
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int const st_size; int st_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (int,char const*,char*) ;
 int FUNC_7 (int,char*,int const) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 char* FUNC_11 (char const*,char) ;
 char* FUNC_12 (int const) ;
 char* FUNC_13 (char*,int,char const*,int,char*) ;

const char *FUNC_14(const char *VAR_9, int *VAR_10)
{
 const int VAR_11 = 1 << 20;
 int VAR_12 = 0;
 char *VAR_13 = ((void*)0);
 char *VAR_14 = ((void*)0);
 const char *VAR_15;
 struct stat VAR_16;
 int VAR_17;
 ssize_t VAR_18;

 if (FUNC_10(VAR_9, &VAR_16)) {

  VAR_12 = VAR_7;
  goto cleanup_return;
 }
 if (!FUNC_0(VAR_16.st_mode)) {
  VAR_12 = VAR_2;
  goto cleanup_return;
 }
 if (VAR_16.st_size > VAR_11) {
  VAR_12 = VAR_8;
  goto cleanup_return;
 }
 VAR_17 = FUNC_5(VAR_9, VAR_0);
 if (VAR_17 < 0) {
  VAR_12 = VAR_5;
  goto cleanup_return;
 }
 VAR_13 = FUNC_12(VAR_16.st_size);
 VAR_18 = FUNC_7(VAR_17, VAR_13, VAR_16.st_size);
 FUNC_1(VAR_17);
 if (VAR_18 != VAR_16.st_size) {
  VAR_12 = VAR_6;
  goto cleanup_return;
 }
 if (!FUNC_9(VAR_13, "gitdir: ")) {
  VAR_12 = VAR_1;
  goto cleanup_return;
 }
 while (VAR_13[VAR_18 - 1] == '\n' || VAR_13[VAR_18 - 1] == '\r')
  VAR_18--;
 if (VAR_18 < 9) {
  VAR_12 = VAR_4;
  goto cleanup_return;
 }
 VAR_13[VAR_18] = '\0';
 VAR_14 = VAR_13 + 8;

 if (!FUNC_3(VAR_14) && (VAR_15 = FUNC_11(VAR_9, '/'))) {
  size_t VAR_19 = VAR_15+1 - VAR_9;
  VAR_14 = FUNC_13("%.*s%.*s", (int)VAR_19, VAR_9,
         (int)(VAR_18 - 8), VAR_13 + 8);
  FUNC_2(VAR_13);
  VAR_13 = VAR_14;
 }
 if (!FUNC_4(VAR_14)) {
  VAR_12 = VAR_3;
  goto cleanup_return;
 }
 VAR_9 = FUNC_8(VAR_14);

cleanup_return:
 if (VAR_10)
  *VAR_10 = VAR_12;
 else if (VAR_12)
  FUNC_6(VAR_12, VAR_9, VAR_14);

 FUNC_2(VAR_13);
 return VAR_12 ? ((void*)0) : VAR_9;
}
