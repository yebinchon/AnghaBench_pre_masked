
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_ctl {int dummy; } ;
typedef enum dpu_intf { ____Placeholder_dpu_intf } dpu_intf ;


 int FUNC_0 (int) ;
 int VAR_0 ;





__attribute__((used)) static int FUNC_1(struct dpu_hw_ctl *VAR_1,
  u32 *VAR_2, enum dpu_intf VAR_3)
{
 switch (VAR_3) {
 case 131:
  *VAR_2 |= FUNC_0(31);
  break;
 case 130:
  *VAR_2 |= FUNC_0(30);
  break;
 case 129:
  *VAR_2 |= FUNC_0(29);
  break;
 case 128:
  *VAR_2 |= FUNC_0(28);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
