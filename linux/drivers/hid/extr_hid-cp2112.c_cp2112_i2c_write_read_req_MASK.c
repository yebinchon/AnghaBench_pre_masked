
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cp2112_write_read_req_report {int slave_address; int target_address_length; int target_address; int length; int report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, u8 VAR_3,
         u8 *VAR_4, int VAR_5,
         int VAR_6)
{
 struct cp2112_write_read_req_report *VAR_7 = VAR_2;

 if (VAR_6 < 1 || VAR_6 > 512 ||
     VAR_5 > sizeof(VAR_7->target_address))
  return -VAR_1;

 VAR_7->report = VAR_0;
 VAR_7->slave_address = VAR_3 << 1;
 VAR_7->length = FUNC_0(VAR_6);
 VAR_7->target_address_length = VAR_5;
 FUNC_1(VAR_7->target_address, VAR_4, VAR_5);
 return VAR_5 + 5;
}
