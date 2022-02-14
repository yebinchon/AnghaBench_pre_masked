
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int break_frame; int (* destructor ) (struct hsi_msg*) ;int complete; } ;
struct hsi_client {int dummy; } ;
struct hsc_client_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct hsi_msg*) ;
 struct hsi_msg* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hsi_client*,struct hsi_msg*) ;
 struct hsc_client_data* FUNC_4 (struct hsi_client*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hsi_client *VAR_5)
{
 struct hsc_client_data *VAR_6 = FUNC_4(VAR_5);
 struct hsi_msg *VAR_7;
 int VAR_8;

 if (FUNC_5(VAR_3, &VAR_6->flags))
  return -VAR_0;

 VAR_7 = FUNC_2(0, VAR_2);
 if (!VAR_7) {
  FUNC_0(VAR_3, &VAR_6->flags);
  return -VAR_1;
 }
 VAR_7->break_frame = 1;
 VAR_7->complete = VAR_4;
 VAR_7->destructor = FUNC_1;
 VAR_8 = FUNC_3(VAR_5, VAR_7);
 if (VAR_8 < 0)
  FUNC_1(VAR_7);

 return VAR_8;
}
