
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int,int,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_device *VAR_5, u8 VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_4, VAR_5->regs + VAR_1,
     VAR_8, !VAR_8, VAR_2,
     VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_6, VAR_5->regs + VAR_0);

 return 0;
}
