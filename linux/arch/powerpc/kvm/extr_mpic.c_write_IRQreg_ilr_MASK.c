
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct openpic {int flags; struct irq_source* src; } ;
struct irq_source {int output; int idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct openpic *VAR_2, int VAR_3,
        uint32_t VAR_4)
{
 if (VAR_2->flags & VAR_1) {
  struct irq_source *VAR_5 = &VAR_2->src[VAR_3];

  VAR_5->output = VAR_4 & VAR_0;
  FUNC_0("Set ILR %d to 0x%08x, output %d\n", VAR_3, VAR_5->idr,
   VAR_5->output);


 }
}
