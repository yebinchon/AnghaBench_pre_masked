
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int* fp_mant; int fp_sticky; int fp_sign; } ;
struct fpemu {int fe_cx; int fe_fpscr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;





__attribute__((used)) static int
FUNC_3(struct fpemu *VAR_6, struct fpn *VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 VAR_4;

 VAR_8 = VAR_7->fp_mant[0];
 VAR_9 = VAR_7->fp_mant[1];
 VAR_10 = VAR_7->fp_mant[2];
 VAR_11 = VAR_7->fp_mant[3];
 VAR_12 = VAR_11 & 3;
 VAR_13 = VAR_7->fp_sticky;


 VAR_11 = (VAR_11 >> VAR_5) | (VAR_10 << (32 - VAR_5));
 VAR_10 = (VAR_10 >> VAR_5) | (VAR_9 << (32 - VAR_5));
 VAR_9 = (VAR_9 >> VAR_5) | (VAR_8 << (32 - VAR_5));
 VAR_8 >>= VAR_5;

 if ((VAR_12 | VAR_13) == 0)
  goto rounddown;

 VAR_6->fe_cx |= VAR_3|VAR_0;


 switch ((VAR_6->fe_fpscr) & VAR_2) {

 case 130:
 default:





  if ((VAR_12 & 2) == 0)
   goto rounddown;
  if ((VAR_12 & 1) || VAR_7->fp_sticky || (VAR_11 & 1))
   break;
  goto rounddown;

 case 128:

  goto rounddown;

 case 131:

  if (VAR_7->fp_sign)
   break;
  goto rounddown;

 case 129:

  if (!VAR_7->fp_sign)
   break;
  goto rounddown;
 }


 VAR_6->fe_cx |= VAR_1;

 FUNC_2(VAR_11, VAR_11, 1);
 FUNC_1(VAR_10, VAR_10, 0);
 FUNC_1(VAR_9, VAR_9, 0);
 FUNC_0(VAR_8, VAR_8, 0);
 VAR_7->fp_mant[0] = VAR_8;
 VAR_7->fp_mant[1] = VAR_9;
 VAR_7->fp_mant[2] = VAR_10;
 VAR_7->fp_mant[3] = VAR_11;
 return (1);

rounddown:
 VAR_7->fp_mant[0] = VAR_8;
 VAR_7->fp_mant[1] = VAR_9;
 VAR_7->fp_mant[2] = VAR_10;
 VAR_7->fp_mant[3] = VAR_11;
 return (0);
}
