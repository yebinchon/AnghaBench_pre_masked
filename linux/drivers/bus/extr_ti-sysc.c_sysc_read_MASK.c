
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int quirks; } ;
struct sysc {int* offsets; scalar_t__ module_va; TYPE_1__ cfg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct sysc *VAR_2, int VAR_3)
{
 if (VAR_2->cfg.quirks & VAR_0) {
  u32 VAR_4;

  VAR_4 = FUNC_1(VAR_2->module_va + VAR_3);


  if (VAR_2->offsets[VAR_1] >= 0 &&
      VAR_3 == VAR_2->offsets[VAR_1]) {
   u16 VAR_5 = FUNC_1(VAR_2->module_va + VAR_3 + 4);

   VAR_4 |= VAR_5 << 16;
  }

  return VAR_4;
 }

 return FUNC_0(VAR_2->module_va + VAR_3);
}
