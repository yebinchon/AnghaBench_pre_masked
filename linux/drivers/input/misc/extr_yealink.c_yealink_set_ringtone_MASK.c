
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct yld_ctl_packet {int size; int * data; int offset; int cmd; } ;
struct yealink_dev {struct yld_ctl_packet* ctl_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct yld_ctl_packet*,int ,int) ;
 int FUNC_3 (struct yealink_dev*,struct yld_ctl_packet*) ;

__attribute__((used)) static int FUNC_4(struct yealink_dev *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 struct yld_ctl_packet *VAR_6 = VAR_3->ctl_data;
 int VAR_7, VAR_8;

 if (VAR_5 <= 0)
  return -VAR_2;


 FUNC_2(VAR_3->ctl_data, 0, sizeof(*(VAR_3->ctl_data)));
 VAR_3->ctl_data->cmd = VAR_1;
 VAR_3->ctl_data->size = 1;
 VAR_3->ctl_data->data[0] = VAR_4[0];
 FUNC_3(VAR_3, VAR_6);

 VAR_4++;
 VAR_5--;

 VAR_6->cmd = VAR_0;
 VAR_7 = 0;
 while (VAR_5 != VAR_7) {
  VAR_8 = VAR_5 - VAR_7;
  if (VAR_8 > sizeof(VAR_6->data))
   VAR_8 = sizeof(VAR_6->data);
  VAR_6->size = VAR_8;
  VAR_6->offset = FUNC_0(VAR_7);
  FUNC_1(VAR_6->data, &VAR_4[VAR_7], VAR_8);
  FUNC_3(VAR_3, VAR_6);
  VAR_7 += VAR_8;
 }
 return 0;
}
