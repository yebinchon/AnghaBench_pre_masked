
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {unsigned int poll_msec; int delay; int work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct edac_device_ctl_info *VAR_1,
        unsigned VAR_2)
{
 FUNC_1(0, "\n");





 VAR_1->poll_msec = VAR_2;
 VAR_1->delay = FUNC_3(VAR_2);

 FUNC_0(&VAR_1->work, VAR_0);






 if (VAR_1->poll_msec == 1000)
  FUNC_2(&VAR_1->work, FUNC_4(VAR_1->delay));
 else
  FUNC_2(&VAR_1->work, VAR_1->delay);
}
