
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct openpic {int vector_mask; TYPE_1__* src; } ;
struct TYPE_2__ {int ivpr; int type; int level; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct openpic*,int) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct openpic *VAR_5, int VAR_6,
         uint32_t VAR_7)
{
 uint32_t VAR_8;




 VAR_8 = VAR_1 | VAR_3 | VAR_4 |
     VAR_2 | VAR_5->vector_mask;


 VAR_5->src[VAR_6].ivpr =
     (VAR_5->src[VAR_6].ivpr & VAR_0) | (VAR_7 & VAR_8);





 switch (VAR_5->src[VAR_6].type) {
 case 128:
  VAR_5->src[VAR_6].level =
      !!(VAR_5->src[VAR_6].ivpr & VAR_4);
  break;

 case 130:
  VAR_5->src[VAR_6].ivpr &= ~VAR_4;
  break;

 case 129:
  VAR_5->src[VAR_6].ivpr &= ~(VAR_2 | VAR_4);
  break;
 }

 FUNC_0(VAR_5, VAR_6);
 FUNC_1("Set IVPR %d to 0x%08x -> 0x%08x\n", VAR_6, VAR_7,
  VAR_5->src[VAR_6].ivpr);
}
