
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int link; int channel; } ;
struct hsc_channel {int free_msgs_list; int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct hsi_msg* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_3(struct hsc_channel *VAR_3)
{
 struct hsi_msg *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2);
  if (!VAR_4)
   goto out;
  VAR_4->channel = VAR_3->ch;
  FUNC_2(&VAR_4->link, &VAR_3->free_msgs_list);
 }

 return 0;
out:
 FUNC_0(&VAR_3->free_msgs_list);

 return -VAR_0;
}
