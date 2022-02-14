
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
struct file {int fd; int binary; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_18 ;
 char VAR_19 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (int,struct stat*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int VAR_21 ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int * FUNC_7 (int *,char,scalar_t__) ;
 int FUNC_8 (struct file*,int ,int) ;
 int * FUNC_9 (int *,scalar_t__,int ,int,int,int ) ;
 int FUNC_10 (char const*,int ) ;

struct file *
FUNC_11(const char *VAR_22)
{
 struct file *VAR_23;

 VAR_23 = FUNC_4(sizeof *VAR_23);
 FUNC_8(VAR_23, 0, sizeof *VAR_23);
 if (VAR_22 == ((void*)0)) {

  VAR_21 = 1;
  VAR_23->fd = VAR_13;
 } else if ((VAR_23->fd = FUNC_10(VAR_22, VAR_11)) == -1)
  goto error1;

 if (VAR_18 == VAR_1) {
  struct stat VAR_24;

  if ((FUNC_3(VAR_23->fd, &VAR_24) == -1) || (VAR_24.st_size > VAR_10) ||
      (!FUNC_0(VAR_24.st_mode)))
   VAR_18 = VAR_2;
  else {
   int VAR_25 = VAR_8 | VAR_5 | VAR_6;



   VAR_20 = VAR_24.st_size;
   VAR_15 = FUNC_9(((void*)0), VAR_20, VAR_12, VAR_25,
        VAR_23->fd, (off_t)0);
   if (VAR_15 == VAR_4)
    VAR_18 = VAR_2;
   else {
    VAR_17 = VAR_24.st_size;
    VAR_16 = VAR_15;
    FUNC_6(VAR_15, VAR_24.st_size, VAR_3);
   }
  }
 }

 if ((VAR_15 == ((void*)0)) || (VAR_15 == VAR_4))
  VAR_15 = FUNC_4(VAR_9);


 if (VAR_17 == 0 && FUNC_5(VAR_23) != 0)
  goto error2;


 if (VAR_14 != VAR_0 && VAR_19 != '\0' &&
     FUNC_7(VAR_16, '\0', VAR_17) != ((void*)0))
  VAR_23->binary = 1;

 return (VAR_23);

error2:
 FUNC_1(VAR_23->fd);
error1:
 FUNC_2(VAR_23);
 return (((void*)0));
}
