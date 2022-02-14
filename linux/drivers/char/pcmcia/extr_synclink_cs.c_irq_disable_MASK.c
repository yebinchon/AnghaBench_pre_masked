
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short imra_value; unsigned short imrb_value; } ;
typedef TYPE_1__ MGSLPC_INFO ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,unsigned short) ;

__attribute__((used)) static void FUNC_1(MGSLPC_INFO *VAR_3, unsigned char VAR_4, unsigned short VAR_5)
{
 if (VAR_4 == VAR_0) {
  VAR_3->imra_value |= VAR_5;
  FUNC_0(VAR_3, VAR_0 + VAR_2, VAR_3->imra_value);
 } else {
  VAR_3->imrb_value |= VAR_5;
  FUNC_0(VAR_3, VAR_1 + VAR_2, VAR_3->imrb_value);
 }
}
