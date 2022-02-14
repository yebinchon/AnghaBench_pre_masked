
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysc {scalar_t__* offsets; int module_size; int module_va; int module_pa; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sysc *VAR_5)
{
 int VAR_6;

 if (VAR_5->offsets[VAR_1] < 0 &&
     VAR_5->offsets[VAR_2] < 0 &&
     VAR_5->offsets[VAR_3] < 0) {
  VAR_6 = VAR_5->module_size;
 } else {
  VAR_6 = FUNC_1(VAR_5->offsets[VAR_1],
       VAR_5->offsets[VAR_2],
       VAR_5->offsets[VAR_3]);

  if (VAR_6 < VAR_4)
   VAR_6 = VAR_4;

  if ((VAR_6 + sizeof(u32)) > VAR_5->module_size)
   VAR_6 = VAR_5->module_size;
 }

 VAR_5->module_va = FUNC_0(VAR_5->dev,
     VAR_5->module_pa,
     VAR_6 + sizeof(u32));
 if (!VAR_5->module_va)
  return -VAR_0;

 return 0;
}
