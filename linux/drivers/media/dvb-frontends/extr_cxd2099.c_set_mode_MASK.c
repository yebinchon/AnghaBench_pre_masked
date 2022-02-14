
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd {int mode; } ;


 int FUNC_0 (struct cxd*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct cxd *VAR_0, int VAR_1)
{
 if (VAR_1 == VAR_0->mode)
  return;

 switch (VAR_1) {
 case 0x00:
  FUNC_0(VAR_0, 0x06, 0x00, 0x07);
  break;
 case 0x01:
  FUNC_0(VAR_0, 0x06, 0x02, 0x07);
  break;
 default:
  break;
 }
 VAR_0->mode = VAR_1;
}
