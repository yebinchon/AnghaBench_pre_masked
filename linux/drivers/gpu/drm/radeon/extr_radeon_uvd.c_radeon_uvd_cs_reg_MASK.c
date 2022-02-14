
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int idx; } ;
struct radeon_cs_packet {int count; int reg; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;





 int FUNC_1 (struct radeon_cs_parser*,int,int,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_2(struct radeon_cs_parser *VAR_1,
        struct radeon_cs_packet *VAR_2,
        int *VAR_3, int *VAR_4,
        unsigned VAR_5[],
        bool *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_1->idx++;
 for (VAR_7 = 0; VAR_7 <= VAR_2->count; ++VAR_7) {
  switch (VAR_2->reg + VAR_7*4) {
  case 130:
   *VAR_3 = VAR_1->idx;
   break;
  case 129:
   *VAR_4 = VAR_1->idx;
   break;
  case 131:
   VAR_8 = FUNC_1(VAR_1, *VAR_3, *VAR_4,
      VAR_5, VAR_6);
   if (VAR_8)
    return VAR_8;
   break;
  case 132:
  case 128:
   break;
  default:
   FUNC_0("Invalid reg 0x%X!\n",
      VAR_2->reg + VAR_7*4);
   return -VAR_0;
  }
  VAR_1->idx++;
 }
 return 0;
}
