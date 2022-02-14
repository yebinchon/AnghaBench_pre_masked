
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fpn {int fp_sign; int* fp_mant; int fp_class; scalar_t__ fp_sticky; } ;
struct fpemu {int fe_cx; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct fpn*,int,int) ;
 int FUNC_1 (struct fpn*,int) ;

__attribute__((used)) static int
FUNC_2(struct fpemu *VAR_4, struct fpn *VAR_5, uint32_t VAR_6,
    uint32_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;

 VAR_5->fp_sign = VAR_7 >> 31;
 VAR_5->fp_sticky = 0;
 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_1(VAR_5, VAR_7);
  break;

 case 129:
  VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8);
  break;
 }

 if (VAR_9 == VAR_0 && (VAR_5->fp_mant[0] & VAR_3) == 0) {







  VAR_5->fp_mant[0] |= VAR_3;
  VAR_4->fe_cx = VAR_2;
  VAR_9 = VAR_1;
 }
 VAR_5->fp_class = VAR_9;

 return (0);
}
