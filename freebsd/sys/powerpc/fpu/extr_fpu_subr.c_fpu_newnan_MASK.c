
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpn {scalar_t__* fp_mant; scalar_t__ fp_sign; int fp_class; } ;
struct fpemu {struct fpn fe_f3; int fe_cx; } ;


 int FUNC_0 (int ,struct fpn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

struct fpn *
FUNC_1(struct fpemu *VAR_4)
{
 struct fpn *VAR_5;

 VAR_4->fe_cx |= VAR_2;
 VAR_5 = &VAR_4->fe_f3;
 VAR_5->fp_class = VAR_0;
 VAR_5->fp_sign = 0;
 VAR_5->fp_mant[0] = VAR_3 - 1;
 VAR_5->fp_mant[1] = VAR_5->fp_mant[2] = VAR_5->fp_mant[3] = ~0;
 FUNC_0(VAR_1, VAR_5);
 return (VAR_5);
}
