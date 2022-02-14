
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ishtp_device {int recvd_hw_ready; int wait_hw_ready; int resume_wait; int resume_flag; int suspend_wait; int suspend_flag; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 struct ishtp_device* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ishtp_device*) ;

__attribute__((used)) static void FUNC_5(struct ishtp_device *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 switch (VAR_5) {
 default:
  break;

 case 128:
  if (VAR_3->suspend_flag) {
   VAR_3->suspend_flag = 0;
   FUNC_3(&VAR_3->suspend_wait);
  }
  if (VAR_3->resume_flag) {
   VAR_3->resume_flag = 0;
   FUNC_3(&VAR_3->resume_wait);
  }

  FUNC_4(VAR_3);
  break;

 case 130:
  if (!VAR_2) {
   VAR_2 = VAR_3;
   FUNC_0(&VAR_0, VAR_1);
  }
  FUNC_2(&VAR_0);
  break;

 case 129:
  VAR_3->recvd_hw_ready = 1;
  FUNC_3(&VAR_3->wait_hw_ready);
  break;
 }
}
