
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int dummy; } ;
struct radeon_cs_packet {int idx; unsigned int reg; unsigned int count; } ;


 int FUNC_0 (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct radeon_cs_parser *VAR_0,
    struct radeon_cs_packet *VAR_1)
{
 unsigned VAR_2, VAR_3;
 unsigned VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->idx + 1;
 VAR_2 = VAR_1->reg;
 for (VAR_3 = 0; VAR_3 <= VAR_1->count; VAR_3++, VAR_4++, VAR_2 += 4) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
  if (VAR_5) {
   return VAR_5;
  }
 }
 return 0;
}
