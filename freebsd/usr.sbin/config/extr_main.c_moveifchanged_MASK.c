
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int off_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

void
FUNC_8(const char *VAR_5, const char *VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9;
 size_t VAR_10;
 struct stat VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = 0;

 if ((VAR_13 = FUNC_5(VAR_5, VAR_3)) < 0)
  FUNC_0(VAR_0, "moveifchanged open(%s)", VAR_5);

 if ((VAR_14 = FUNC_5(VAR_6, VAR_3)) < 0)
  VAR_9++;

 if (!VAR_9 && FUNC_1(VAR_13, &VAR_11) < 0)
  FUNC_0(VAR_0, "moveifchanged fstat(%s)", VAR_5);

 if (!VAR_9 && FUNC_1(VAR_14, &VAR_12) < 0)
  FUNC_0(VAR_0, "moveifchanged fstat(%s)", VAR_6);

 if (!VAR_9 && VAR_11.st_size != VAR_12.st_size)
  VAR_9++;

 VAR_10 = (size_t)VAR_11.st_size;

 if (!VAR_9) {
  VAR_7 = FUNC_3(((void*)0), VAR_10, VAR_4, VAR_2, VAR_13, (off_t)0);
  if (VAR_7 == VAR_1)
   FUNC_0(VAR_0, "mmap %s", VAR_5);
  VAR_8 = FUNC_3(((void*)0), VAR_10, VAR_4, VAR_2, VAR_14, (off_t)0);
  if (VAR_8 == VAR_1)
   FUNC_0(VAR_0, "mmap %s", VAR_6);

  VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_10);
  FUNC_4(VAR_7, VAR_10);
  FUNC_4(VAR_8, VAR_10);
 }
 if (VAR_9) {
  if (FUNC_6(VAR_5, VAR_6) < 0)
   FUNC_0(VAR_0, "rename(%s, %s)", VAR_5, VAR_6);
 } else {
  if (FUNC_7(VAR_5) < 0)
   FUNC_0(VAR_0, "unlink(%s)", VAR_5);
 }
}
