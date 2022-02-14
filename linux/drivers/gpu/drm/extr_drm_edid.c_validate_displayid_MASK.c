
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct displayid_hdr {int bytes; int ext_count; int prod_id; int rev; } ;


 int FUNC_0 (char*,int ,int,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;
 struct displayid_hdr *VAR_6;

 VAR_6 = (struct displayid_hdr *)&VAR_1[VAR_3];

 FUNC_0("base revision 0x%x, length %d, %d %d\n",
        VAR_6->rev, VAR_6->bytes, VAR_6->prod_id, VAR_6->ext_count);

 if (VAR_6->bytes + 5 > VAR_2 - VAR_3)
  return -VAR_0;
 for (VAR_4 = VAR_3; VAR_4 <= VAR_6->bytes + 5; VAR_4++) {
  VAR_5 += VAR_1[VAR_4];
 }
 if (VAR_5) {
  FUNC_1("DisplayID checksum invalid, remainder is %d\n", VAR_5);
  return -VAR_0;
 }
 return 0;
}
