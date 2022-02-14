
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {scalar_t__ io_regs; int qim; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ccp_device *VAR_1)
{
 FUNC_0(VAR_1->qim, VAR_1->io_regs + VAR_0);
}
