
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int dummy; } ;
struct radeon_cs_packet {int dummy; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;

 int FUNC_1 (struct radeon_cs_parser*) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct radeon_cs_parser *VAR_1,
       struct radeon_cs_packet *VAR_2,
       unsigned VAR_3, unsigned VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
     VAR_3, VAR_4);
   return VAR_5;
  }
  break;
 default:
  FUNC_2("Forbidden register 0x%04X in cs at %d\n", VAR_4, VAR_3);
  return -VAR_0;
 }
 return 0;
}
