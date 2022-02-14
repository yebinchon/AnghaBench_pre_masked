
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_port {int (* async ) (struct hsi_msg*) ;} ;
struct hsi_msg {struct hsi_client* cl; int complete; int destructor; } ;
struct hsi_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hsi_port* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (struct hsi_client*) ;
 int FUNC_3 (struct hsi_msg*) ;

int FUNC_4(struct hsi_client *VAR_1, struct hsi_msg *VAR_2)
{
 struct hsi_port *VAR_3 = FUNC_1(VAR_1);

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 FUNC_0(!VAR_2->destructor || !VAR_2->complete);
 VAR_2->cl = VAR_1;

 return VAR_3->async(VAR_2);
}
