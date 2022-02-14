
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cp2112_write_req_report {int slave_address; int length; int* data; int report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u8 VAR_3, u8 VAR_4, u8 *VAR_5,
       u8 VAR_6)
{
 struct cp2112_write_req_report *VAR_7 = VAR_2;

 if (VAR_6 > sizeof(VAR_7->data) - 1)
  return -VAR_1;

 VAR_7->report = VAR_0;
 VAR_7->slave_address = VAR_3 << 1;
 VAR_7->length = VAR_6 + 1;
 VAR_7->data[0] = VAR_4;
 FUNC_0(&VAR_7->data[1], VAR_5, VAR_6);
 return VAR_6 + 4;
}
