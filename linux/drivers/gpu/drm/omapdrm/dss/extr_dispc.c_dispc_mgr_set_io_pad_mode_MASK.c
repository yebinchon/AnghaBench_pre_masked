
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum dss_io_pad_mode { ____Placeholder_dss_io_pad_mode } dss_io_pad_mode ;


 int FUNC_0 () ;
 int VAR_0 ;



 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct dispc_device*,int ) ;
 int FUNC_3 (struct dispc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dispc_device *VAR_1,
          enum dss_io_pad_mode VAR_2)
{
 u32 VAR_3;
 int VAR_4, VAR_5;

 switch (VAR_2) {
 case 129:
  VAR_4 = 0;
  VAR_5 = 0;
  break;
 case 128:
  VAR_4 = 1;
  VAR_5 = 0;
  break;
 case 130:
  VAR_4 = 1;
  VAR_5 = 1;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 VAR_3 = FUNC_1(VAR_3, VAR_4, 15, 15);
 VAR_3 = FUNC_1(VAR_3, VAR_5, 16, 16);
 FUNC_3(VAR_1, VAR_0, VAR_3);
}
