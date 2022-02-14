
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_11__ {int state_path; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_oid ;
struct TYPE_12__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int *,int *,int const*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(
 git_rebase *VAR_5,
 const git_signature *VAR_6)
{
 git_buf VAR_7 = VAR_0, VAR_8 = VAR_0, VAR_9 = VAR_0;
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 git_oid VAR_14, VAR_15;
 unsigned int VAR_16 = 1;
 int VAR_17 = 0;

 if ((VAR_17 = FUNC_6(&VAR_9, VAR_5)) < 0) {
  if (VAR_17 == VAR_1) {
   FUNC_2();
   VAR_17 = 0;
  }

  goto done;
 }

 if ((VAR_17 = FUNC_1(&VAR_7, VAR_5->state_path, VAR_4)) < 0 ||
  (VAR_17 = FUNC_4(&VAR_8, VAR_7.ptr)) < 0)
  goto done;

 VAR_10 = VAR_8.ptr;

 while (*VAR_10) {
  VAR_11 = VAR_10;

  if ((VAR_13 = FUNC_8(VAR_11, '\n')) == ((void*)0))
   goto on_error;

  VAR_10 = VAR_13+1;
  *VAR_13 = '\0';

  if ((VAR_13 = FUNC_8(VAR_11, ' ')) == ((void*)0))
   goto on_error;

  VAR_12 = VAR_13+1;
  *VAR_13 = '\0';

  if (FUNC_9(VAR_11) != VAR_3 ||
   FUNC_9(VAR_12) != VAR_3 ||
   FUNC_5(&VAR_14, VAR_11) < 0 ||
   FUNC_5(&VAR_15, VAR_12) < 0)
   goto on_error;

  if ((VAR_17 = FUNC_7(VAR_5, VAR_9.ptr, &VAR_14, &VAR_15, VAR_6)) < 0)
   goto done;

  VAR_16++;
 }

 goto done;

on_error:
 FUNC_3(VAR_2, "invalid rewritten file at line %d", VAR_16);
 VAR_17 = -1;

done:
 FUNC_0(&VAR_8);
 FUNC_0(&VAR_7);
 FUNC_0(&VAR_9);

 return VAR_17;
}
