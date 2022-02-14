
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int dummy; } ;
struct sec_dev_info {int dummy; } ;


 int VAR_0 ;
 struct sec_queue* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sec_dev_info* FUNC_3 () ;
 int VAR_1 ;
 struct sec_queue* FUNC_4 (struct sec_dev_info*) ;

struct sec_queue *FUNC_5(void)
{
 struct sec_dev_info *VAR_2;
 struct sec_queue *VAR_3 = FUNC_0(-VAR_0);

 FUNC_1(&VAR_1);
 VAR_2 = FUNC_3();
 if (!VAR_2)
  goto unlock;

 VAR_3 = FUNC_4(VAR_2);

unlock:
 FUNC_2(&VAR_1);

 return VAR_3;
}
