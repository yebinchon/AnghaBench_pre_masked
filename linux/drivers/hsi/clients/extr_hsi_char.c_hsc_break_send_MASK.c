
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int break_frame; int (* destructor ) (struct hsi_msg*) ;int (* complete ) (struct hsi_msg*) ;} ;
struct hsi_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hsi_msg* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hsi_client*,struct hsi_msg*) ;
 int FUNC_2 (struct hsi_msg*) ;

__attribute__((used)) static int FUNC_3(struct hsi_client *VAR_2)
{
 struct hsi_msg *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(0, VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->break_frame = 1;
 VAR_3->complete = FUNC_2;
 VAR_3->destructor = FUNC_2;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_2(VAR_3);

 return VAR_4;
}
