
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
typedef enum hnae3_reset_notify_type { ____Placeholder_hnae3_reset_notify_type } hnae3_reset_notify_type ;





 int FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_0,
           enum hnae3_reset_notify_type VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 130:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 129:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_0);
  break;
 default:
  break;
 }

 return VAR_2;
}
