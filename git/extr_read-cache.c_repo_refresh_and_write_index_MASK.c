
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct pathspec {int dummy; } ;
struct lock_file {int dummy; } ;


 unsigned int VAR_0 ;
 struct lock_file VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int,struct pathspec const*,char*,char const*) ;
 int FUNC_1 (struct repository*,struct lock_file*,int ) ;
 scalar_t__ FUNC_2 (int ,struct lock_file*,unsigned int) ;

int FUNC_3(struct repository *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     int VAR_5,
     const struct pathspec *VAR_6,
     char *VAR_7, const char *VAR_8)
{
 struct lock_file VAR_9 = VAR_1;
 int VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_2, &VAR_9, 0);
 if (!VAR_5 && VAR_10 < 0)
  return -1;
 if (FUNC_0(VAR_2->index, VAR_3, VAR_6, VAR_7, VAR_8))
  VAR_11 = 1;
 if (0 <= VAR_10 && FUNC_2(VAR_2->index, &VAR_9, VAR_0 | VAR_4))
  VAR_11 = -1;
 return VAR_11;
}
