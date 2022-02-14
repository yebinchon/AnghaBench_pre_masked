
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_cmd {int dummy; } ;
typedef int sector_t ;
typedef enum req_opf { ____Placeholder_req_opf } req_opf ;
typedef int blk_status_t ;


 int VAR_0 ;



 int FUNC_0 (struct nullb_cmd*,int ) ;
 int FUNC_1 (struct nullb_cmd*,int ,int ) ;

blk_status_t FUNC_2(struct nullb_cmd *VAR_1, enum req_opf VAR_2,
          sector_t VAR_3, sector_t VAR_4)
{
 switch (VAR_2) {
 case 130:
  return FUNC_1(VAR_1, VAR_3, VAR_4);
 case 129:
 case 128:
  return FUNC_0(VAR_1, VAR_3);
 default:
  return VAR_0;
 }
}
