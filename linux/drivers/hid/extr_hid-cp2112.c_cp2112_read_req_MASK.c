
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cp2112_read_req_report {int slave_address; int length; int report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct cp2112_read_req_report *VAR_5 = VAR_2;

 if (VAR_4 < 1 || VAR_4 > 512)
  return -VAR_1;

 VAR_5->report = VAR_0;
 VAR_5->slave_address = VAR_3 << 1;
 VAR_5->length = FUNC_0(VAR_4);
 return sizeof(*VAR_5);
}
