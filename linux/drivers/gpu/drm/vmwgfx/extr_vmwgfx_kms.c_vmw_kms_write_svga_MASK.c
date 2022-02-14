
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int capabilities; scalar_t__ mmio_virt; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct vmw_private*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 unsigned int FUNC_3 (struct vmw_private*,int ) ;
 int FUNC_4 (struct vmw_private*,int ,unsigned int) ;

int FUNC_5(struct vmw_private *VAR_8,
   unsigned VAR_9, unsigned VAR_10, unsigned VAR_11,
   unsigned VAR_12, unsigned VAR_13)
{
 if (VAR_8->capabilities & VAR_1)
  FUNC_4(VAR_8, VAR_6, VAR_11);
 else if (FUNC_1(VAR_8))
  FUNC_2(VAR_11, VAR_8->mmio_virt +
          VAR_2);
 FUNC_4(VAR_8, VAR_7, VAR_9);
 FUNC_4(VAR_8, VAR_5, VAR_10);
 FUNC_4(VAR_8, VAR_3, VAR_12);

 if (FUNC_3(VAR_8, VAR_4) != VAR_13) {
  FUNC_0("Invalid depth %u for %u bpp, host expects %u\n",
     VAR_13, VAR_12, FUNC_3(VAR_8, VAR_4));
  return -VAR_0;
 }

 return 0;
}
