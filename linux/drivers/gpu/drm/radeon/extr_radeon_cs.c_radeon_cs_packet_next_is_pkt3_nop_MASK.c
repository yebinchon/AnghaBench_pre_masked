
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_cs_parser {int idx; } ;
struct radeon_cs_packet {scalar_t__ type; scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct radeon_cs_parser*,struct radeon_cs_packet*,int ) ;

bool FUNC_1(struct radeon_cs_parser *VAR_2)
{
 struct radeon_cs_packet VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_2->idx);
 if (VAR_4)
  return 0;
 if (VAR_3.type != VAR_1)
  return 0;
 if (VAR_3.opcode != VAR_0)
  return 0;
 return 1;
}
