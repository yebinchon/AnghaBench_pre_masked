
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int (*) (scalar_t__),scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_device *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(FUNC_0, VAR_4->regs + VAR_1,
     VAR_5, !VAR_5, VAR_2,
     VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_4->regs + VAR_0) & 0xff;
}
