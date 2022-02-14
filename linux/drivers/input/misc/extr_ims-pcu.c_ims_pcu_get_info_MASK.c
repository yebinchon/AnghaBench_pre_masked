
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int * cmd_buf; int serial_number; int date_of_manufacturing; int part_number; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ims_pcu*,int ) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_4->dev,
   "GET_INFO command failed, error: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_2(VAR_4->part_number,
        &VAR_4->cmd_buf[VAR_2],
        sizeof(VAR_4->part_number));
 FUNC_2(VAR_4->date_of_manufacturing,
        &VAR_4->cmd_buf[VAR_1],
        sizeof(VAR_4->date_of_manufacturing));
 FUNC_2(VAR_4->serial_number,
        &VAR_4->cmd_buf[VAR_3],
        sizeof(VAR_4->serial_number));

 return 0;
}
