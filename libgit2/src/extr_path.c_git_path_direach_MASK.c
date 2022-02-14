
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct dirent {char* d_name; } ;
typedef int ssize_t ;
typedef int git_path_iconv_t ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char const**,size_t*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int * FUNC_14 (int ) ;
 struct dirent* FUNC_15 (int *) ;
 size_t FUNC_16 (char const*) ;

int FUNC_17(
 git_buf *VAR_6,
 uint32_t VAR_7,
 int (*VAR_8)(void *, git_buf *),
 void *VAR_9)
{
 int VAR_10 = 0;
 ssize_t VAR_11;
 DIR *VAR_12;
 struct dirent *VAR_13;





 FUNC_0(VAR_7);

 if (FUNC_13(VAR_6) < 0)
  return -1;

 VAR_11 = FUNC_2(VAR_6);

 if ((VAR_12 = FUNC_14(VAR_6->ptr)) == ((void*)0)) {
  FUNC_7(VAR_2, "failed to open directory '%s'", VAR_6->ptr);
  if (VAR_5 == VAR_0)
   return VAR_1;

  return -1;
 }






 while ((VAR_13 = FUNC_15(VAR_12)) != ((void*)0)) {
  const char *VAR_14 = VAR_13->d_name;
  size_t VAR_15 = FUNC_16(VAR_14);

  if (FUNC_12(VAR_14))
   continue;






  if ((VAR_10 = FUNC_3(VAR_6, VAR_14, VAR_15)) < 0)
   break;

  FUNC_5();
  VAR_10 = VAR_8(VAR_9, VAR_6);

  FUNC_4(VAR_6, VAR_11);


  if (VAR_10 != 0) {
   if (!FUNC_6())
    FUNC_8(VAR_10);

   break;
  }
 }

 FUNC_1(VAR_12);





 return VAR_10;
}
