
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_5__ {int path; int stamp; } ;
typedef TYPE_1__ git_sortedcache ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,struct stat*) ;

int FUNC_9(git_sortedcache *VAR_2, git_buf *VAR_3)
{
 int VAR_4, VAR_5;
 struct stat VAR_6;

 if ((VAR_4 = FUNC_5(VAR_2)) < 0)
  return VAR_4;

 if ((VAR_4 = FUNC_2(&VAR_2->stamp, VAR_2->path)) <= 0)
  goto unlock;

 if ((VAR_5 = FUNC_3(VAR_2->path)) < 0) {
  VAR_4 = VAR_5;
  goto unlock;
 }

 if (FUNC_8(VAR_5, &VAR_6) < 0) {
  FUNC_1(VAR_1, "failed to stat file");
  VAR_4 = -1;
  (void)FUNC_7(VAR_5);
  goto unlock;
 }

 if (!FUNC_0(VAR_6.st_size)) {
  FUNC_1(VAR_0, "unable to load file larger than size_t");
  VAR_4 = -1;
  (void)FUNC_7(VAR_5);
  goto unlock;
 }

 if (VAR_3)
  VAR_4 = FUNC_4(VAR_3, VAR_5, (size_t)VAR_6.st_size);

 (void)FUNC_7(VAR_5);

 if (VAR_4 < 0)
  goto unlock;

 return 1;

unlock:
 FUNC_6(VAR_2);
 return VAR_4;
}
