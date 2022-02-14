
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmcmsptwi_cmd {int type; int write_len; int read_len; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct pmcmsptwi_cmd *VAR_0)
{
 return ((VAR_0->type & 0x3) << 8) |
  (((VAR_0->write_len - 1) & 0x7) << 4) |
  ((VAR_0->read_len - 1) & 0x7);
}
