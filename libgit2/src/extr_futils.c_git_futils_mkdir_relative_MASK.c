
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct stat {scalar_t__ st_mode; } ;
struct TYPE_8__ {int stat_calls; int mkdir_calls; } ;
struct git_futils_mkdir_options {TYPE_1__ perfdata; scalar_t__ dir_map; scalar_t__ pool; int member_0; } ;
typedef size_t ssize_t ;
typedef int mode_t ;
struct TYPE_9__ {scalar_t__ size; char* ptr; } ;
typedef TYPE_2__ git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (size_t*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (TYPE_2__*,char) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char const*,char const*,size_t*) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__,size_t) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (scalar_t__,char*,char*) ;
 int FUNC_12 (char*,char*,scalar_t__) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (char*,struct stat*,int ,int,struct git_futils_mkdir_options*) ;
 int FUNC_15 (char*,struct stat*,int,int ,int,struct git_futils_mkdir_options*) ;
 scalar_t__ FUNC_16 (char*,struct stat*) ;
 scalar_t__ FUNC_17 (char*,int ) ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;

int FUNC_19(
 const char *VAR_8,
 const char *VAR_9,
 mode_t VAR_10,
 uint32_t VAR_11,
 struct git_futils_mkdir_options *VAR_12)
{
 git_buf VAR_13 = VAR_2;
 ssize_t VAR_14 = 0, VAR_15;
 char VAR_16 = '/', *VAR_17;
 struct stat VAR_18;
 struct git_futils_mkdir_options VAR_19 = {0};
 int VAR_20;

 if (!VAR_12)
  VAR_12 = &VAR_19;


 if (FUNC_7(&VAR_13, VAR_8, VAR_9, &VAR_14) < 0)
  return -1;

 if ((VAR_20 = FUNC_13(&VAR_13, VAR_11)) < 0 ||
  VAR_13.size == 0)
  goto done;


 if ((VAR_11 & VAR_5) == 0)
  VAR_14 = FUNC_4(&VAR_13, '/');


 VAR_15 = FUNC_8(VAR_13.ptr);
 if (VAR_14 < VAR_15)
  VAR_14 = VAR_15;
 while (VAR_14 >= 0 && VAR_13.ptr[VAR_14] == '/')
  ++VAR_14;


 if (VAR_14 > (ssize_t)VAR_13.size)
  VAR_14 = (ssize_t)VAR_13.size;
 if (VAR_14 < 0)
  VAR_14 = 0;


 for (VAR_17 = &VAR_13.ptr[VAR_14]; *VAR_17; *VAR_17 = VAR_16) {
  bool VAR_21 = 0;


  while (*VAR_17 == '/')
   VAR_17++;
  while (*VAR_17 && *VAR_17 != '/')
   VAR_17++;


  VAR_16 = *VAR_17;
  *VAR_17 = '\0';
  VAR_18.st_mode = 0;

  if (VAR_12->dir_map && FUNC_10(VAR_12->dir_map, VAR_13.ptr))
   continue;


  VAR_12->perfdata.stat_calls++;

retry_lstat:
  if (FUNC_16(VAR_13.ptr, &VAR_18) < 0) {
   if (VAR_21 || VAR_7 != VAR_1) {
    FUNC_6(VAR_4, "cannot access component in path '%s'", VAR_13.ptr);
    VAR_20 = -1;
    goto done;
   }

   FUNC_5();
   VAR_12->perfdata.mkdir_calls++;
   VAR_21 = 1;
   if (FUNC_17(VAR_13.ptr, VAR_10) < 0) {
    if (VAR_7 == VAR_0)
     goto retry_lstat;
    FUNC_6(VAR_4, "failed to make directory '%s'", VAR_13.ptr);
    VAR_20 = -1;
    goto done;
   }
  } else {
   if ((VAR_20 = FUNC_14(
    VAR_13.ptr, &VAR_18, VAR_10, VAR_11, VAR_12)) < 0)
    goto done;
  }


  if ((VAR_20 = FUNC_15(
   VAR_13.ptr, &VAR_18, (VAR_16 == '\0'), VAR_10, VAR_11, VAR_12)) < 0)
   goto done;

  if (VAR_12->dir_map && VAR_12->pool) {
   char *VAR_22;
   size_t VAR_23;

   FUNC_1(&VAR_23, VAR_13.size, 1);
   VAR_22 = FUNC_9(VAR_12->pool, VAR_23);
   FUNC_0(VAR_22);

   FUNC_12(VAR_22, VAR_13.ptr, VAR_13.size + 1);

   if ((VAR_20 = FUNC_11(VAR_12->dir_map, VAR_22, VAR_22)) < 0)
    goto done;
  }
 }

 VAR_20 = 0;


 if ((VAR_11 & VAR_6) != 0 &&
  VAR_16 != '\0') {
  VAR_12->perfdata.stat_calls++;

  if (FUNC_18(VAR_13.ptr, &VAR_18) < 0 || !FUNC_2(VAR_18.st_mode)) {
   FUNC_6(VAR_4, "path is not a directory '%s'",
    VAR_13.ptr);
   VAR_20 = VAR_3;
  }
 }

done:
 FUNC_3(&VAR_13);
 return VAR_20;
}
