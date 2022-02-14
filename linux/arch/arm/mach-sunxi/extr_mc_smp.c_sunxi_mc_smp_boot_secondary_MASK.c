
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__** VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_8, struct task_struct *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_8);
 VAR_11 = FUNC_0(VAR_10, 0);
 VAR_12 = FUNC_0(VAR_10, 1);

 if (!VAR_5)
  return -VAR_1;
 if (VAR_12 >= VAR_3 || VAR_11 >= VAR_2)
  return -VAR_0;

 FUNC_2(&VAR_4);

 if (VAR_6[VAR_12][VAR_11])
  goto out;

 if (FUNC_6(VAR_12)) {
  VAR_7 = 1;
  FUNC_4(VAR_12);
 } else {
  VAR_7 = 0;
 }


 FUNC_7(&VAR_7);
 FUNC_5(VAR_11, VAR_12);

out:
 VAR_6[VAR_12][VAR_11]++;
 FUNC_3(&VAR_4);

 return 0;
}
