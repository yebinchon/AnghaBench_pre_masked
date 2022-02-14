
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_11__ {int (* write ) (TYPE_1__*,char*,scalar_t__) ;int (* close ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_writestream ;
typedef int git_vector ;
typedef int git_repository ;
typedef int git_filter_list ;
struct TYPE_12__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
typedef int buf ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char const*,char const*,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__**,int *,int *,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(
 git_filter_list *VAR_3,
 git_repository *VAR_4,
 const char *VAR_5,
 git_writestream *VAR_6)
{
 char VAR_7[VAR_0];
 git_buf VAR_8 = VAR_1;
 const char *VAR_9 = VAR_4 ? FUNC_3(VAR_4) : ((void*)0);
 git_vector VAR_10 = VAR_2;
 git_writestream *VAR_11;
 ssize_t VAR_12;
 int VAR_13 = -1, VAR_14, VAR_15 = 0;

 if ((VAR_14 = FUNC_7(
   &VAR_11, &VAR_10, VAR_3, VAR_6)) < 0 ||
  (VAR_14 = FUNC_2(&VAR_8, VAR_5, VAR_9, ((void*)0))) < 0)
  goto done;
 VAR_15 = 1;

 if ((VAR_13 = FUNC_1(VAR_8.ptr)) < 0) {
  VAR_14 = VAR_13;
  goto done;
 }

 while ((VAR_12 = FUNC_5(VAR_13, VAR_7, sizeof(VAR_7))) > 0) {
  if ((VAR_14 = VAR_11->write(VAR_11, VAR_7, VAR_12)) < 0)
   goto done;
 }

 if (VAR_12 < 0)
  VAR_14 = -1;

done:
 if (VAR_15)
  VAR_14 |= VAR_11->close(VAR_11);

 if (VAR_13 >= 0)
  FUNC_4(VAR_13);
 FUNC_6(&VAR_10);
 FUNC_0(&VAR_8);
 return VAR_14;
}
