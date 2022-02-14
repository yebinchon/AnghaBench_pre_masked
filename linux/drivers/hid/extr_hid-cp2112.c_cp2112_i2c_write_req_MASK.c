
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cp2112_write_req_report {int slave_address; int length; int data; int report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u8 VAR_3, u8 *VAR_4,
    u8 VAR_5)
{
 struct cp2112_write_req_report *VAR_6 = VAR_2;

 if (VAR_5 > sizeof(VAR_6->data))
  return -VAR_1;

 VAR_6->report = VAR_0;
 VAR_6->slave_address = VAR_3 << 1;
 VAR_6->length = VAR_5;
 FUNC_0(VAR_6->data, VAR_4, VAR_5);
 return VAR_5 + 3;
}
