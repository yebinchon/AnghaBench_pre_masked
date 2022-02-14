
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int8_t ;
struct dumpreg {int type; int addr; } ;
struct ath_diag {size_t ad_in_size; int * ad_in_data; } ;
typedef int r ;
typedef int * caddr_t ;
struct TYPE_5__ {int nregs; struct dumpreg** regs; int revs; } ;
struct TYPE_4__ {int start; int end; } ;
typedef int HAL_REVS ;
typedef TYPE_1__ HAL_REGRANGE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (struct dumpreg const*,int const*) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct ath_diag *VAR_2, int VAR_3)
{
 const HAL_REVS *VAR_4 = &VAR_0.revs;
 HAL_REGRANGE VAR_5;
 size_t VAR_6 = 0;
 u_int8_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_10 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_0.nregs; VAR_8++) {
  const struct dumpreg *VAR_11 = VAR_0.regs[VAR_8];
  if ((VAR_3 & VAR_11->type) && FUNC_3(VAR_11, VAR_4)) {
   if (VAR_10 + 4 != VAR_11->addr) {
    if (VAR_9 != -1)
     VAR_6 += sizeof(HAL_REGRANGE);
    VAR_9 = VAR_10 = VAR_11->addr;
   } else
    VAR_10 = VAR_11->addr;
  }
 }
 VAR_6 += sizeof(HAL_REGRANGE);

 VAR_2->ad_in_data = (caddr_t) FUNC_2(VAR_6);
 if (VAR_2->ad_in_data == ((void*)0)) {
  FUNC_1(VAR_1, "Cannot malloc memory for registers!\n");
  FUNC_0(-1);
 }
 VAR_2->ad_in_size = VAR_6;
 VAR_7 = (u_int8_t *) VAR_2->ad_in_data;
 VAR_9 = VAR_10 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_0.nregs; VAR_8++) {
  const struct dumpreg *VAR_12 = VAR_0.regs[VAR_8];
  if ((VAR_3 & VAR_12->type) && FUNC_3(VAR_12, VAR_4)) {
   if (VAR_10 + 4 != VAR_12->addr) {
    if (VAR_9 != -1) {
     VAR_5.start = VAR_9, VAR_5.end = VAR_10;
     FUNC_4(VAR_7, &VAR_5, sizeof(VAR_5));
     VAR_7 += sizeof(VAR_5);
    }
    VAR_9 = VAR_10 = VAR_12->addr;
   } else
    VAR_10 = VAR_12->addr;
  }
 }
 if (VAR_9 != -1) {
  VAR_5.start = VAR_9, VAR_5.end = VAR_10;
  FUNC_4(VAR_7, &VAR_5, sizeof(VAR_5));
  VAR_7 += sizeof(VAR_5);
 }
 return VAR_6 / sizeof(uint32_t);
}
