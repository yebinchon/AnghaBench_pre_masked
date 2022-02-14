
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dcb_output {int extdev; int location; int type; } ;



__attribute__((used)) static inline u16
FUNC_0(struct dcb_output *VAR_0)
{
 return (VAR_0->extdev << 8) | (VAR_0->location << 4) | VAR_0->type;
}
