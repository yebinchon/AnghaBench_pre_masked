
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dpu_hw_blk_type { ____Placeholder_dpu_hw_blk_type } dpu_hw_blk_type ;


 int FUNC_0 (char*,int) ;







 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(enum dpu_hw_blk_type VAR_0, void *VAR_1)
{
 switch (VAR_0) {
 case 132:
  FUNC_3(VAR_1);
  break;
 case 134:
  FUNC_1(VAR_1);
  break;
 case 130:
  FUNC_4(VAR_1);
  break;
 case 133:
  FUNC_2(VAR_1);
  break;
 case 129:

 case 128:

 case 131:
 default:
  FUNC_0("unsupported block type %d\n", VAR_0);
  break;
 }
}
