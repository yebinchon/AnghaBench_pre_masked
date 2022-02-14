
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int dev; int * cmd_buf; int serial_number; int date_of_manufacturing; int part_number; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ims_pcu*,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_6->cmd_buf[VAR_2],
        VAR_6->part_number, sizeof(VAR_6->part_number));
 FUNC_2(&VAR_6->cmd_buf[VAR_1],
        VAR_6->date_of_manufacturing, sizeof(VAR_6->date_of_manufacturing));
 FUNC_2(&VAR_6->cmd_buf[VAR_3],
        VAR_6->serial_number, sizeof(VAR_6->serial_number));

 VAR_7 = FUNC_1(VAR_6, VAR_5,
     &VAR_6->cmd_buf[VAR_0],
     VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_6->dev,
   "Failed to update device information, error: %d\n",
   VAR_7);
  return VAR_7;
 }

 return 0;
}
