
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct stat {int dummy; } ;
struct git_futils_mkdir_options {int member_0; } ;
typedef int mode_t ;
struct TYPE_7__ {char const* ptr; scalar_t__ size; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char const*,char*,int ,int,struct git_futils_mkdir_options*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,struct stat*,int ,int,struct git_futils_mkdir_options*) ;
 int FUNC_9 (char*,struct stat*,int,int ,int,struct git_futils_mkdir_options*) ;
 int FUNC_10 (char*,struct stat*) ;

int FUNC_11(
 const char *VAR_7,
 mode_t VAR_8,
 uint32_t VAR_9)
{
 git_buf VAR_10 = VAR_1, VAR_11 = VAR_1;
 const char *VAR_12;
 struct git_futils_mkdir_options VAR_13 = { 0 };
 struct stat VAR_14;
 size_t VAR_15 = 0;
 int VAR_16 = 0, VAR_17, VAR_18;

 if ((VAR_18 = FUNC_2(&VAR_10, VAR_7)) < 0 ||
  (VAR_18 = FUNC_7(&VAR_10, VAR_9)) < 0 ||
  (VAR_18 = FUNC_2(&VAR_11, VAR_10.ptr)) < 0 ||
  VAR_10.size == 0)
  goto done;

 VAR_17 = FUNC_6(VAR_10.ptr);




 for (VAR_12 = VAR_10.ptr; VAR_11.size; ) {
  VAR_18 = FUNC_10(VAR_11.ptr, &VAR_14);

  if (VAR_18 == 0) {
   break;
  } else if (VAR_6 != VAR_0) {
   FUNC_3(VAR_2, "failed to stat '%s'", VAR_11.ptr);
   VAR_18 = -1;
   goto done;
  }

  VAR_15++;


  if ((VAR_16 = FUNC_5(&VAR_11, VAR_11.ptr)) < 0) {
   VAR_18 = VAR_16;
   goto done;
  }

  FUNC_0(VAR_16);







  if ((VAR_16 == 1 && VAR_11.ptr[0] == '.') ||
      (VAR_16 == 1 && VAR_11.ptr[0] == '/') ||
      VAR_16 <= VAR_17) {
   VAR_12 = VAR_10.ptr;
   break;
  }

  VAR_12 = VAR_10.ptr + VAR_16 + 1;


  if ((VAR_9 & VAR_3) == 0)
   break;
 }




 if (VAR_15 == 0) {
  VAR_18 = FUNC_8(VAR_10.ptr, &VAR_14, VAR_8, VAR_9, &VAR_13);

  if (!VAR_18)
   VAR_18 = FUNC_9(
    VAR_10.ptr, &VAR_14, 1, VAR_8, VAR_9, &VAR_13);

  goto done;
 }




 VAR_9 &= ~(VAR_5 | VAR_4);

 VAR_18 = FUNC_4(VAR_12,
  VAR_11.size ? VAR_11.ptr : ((void*)0), VAR_8, VAR_9, &VAR_13);

done:
 FUNC_1(&VAR_10);
 FUNC_1(&VAR_11);
 return VAR_18;
}
