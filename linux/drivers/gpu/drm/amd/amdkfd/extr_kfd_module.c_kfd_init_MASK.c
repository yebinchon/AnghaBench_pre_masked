
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_6;


 if ((VAR_5 < VAR_2) ||
  (VAR_5 > VAR_3)) {
  FUNC_7("sched_policy has invalid value\n");
  return -VAR_0;
 }


 if ((VAR_4 < 1) ||
  (VAR_4 >
   VAR_1)) {
  FUNC_7("max_num_of_queues_per_device must be between 1 to KFD_MAX_NUM_OF_QUEUES_PER_DEVICE\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1();
 if (VAR_6 < 0)
  goto err_ioctl;

 VAR_6 = FUNC_5();
 if (VAR_6 < 0)
  goto err_topology;

 VAR_6 = FUNC_3();
 if (VAR_6 < 0)
  goto err_create_wq;




 FUNC_4();

 FUNC_2();

 return 0;

err_create_wq:
 FUNC_6();
err_topology:
 FUNC_0();
err_ioctl:
 return VAR_6;
}
