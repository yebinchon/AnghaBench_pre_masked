
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24123_state {int dummy; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct cx24123_state *VAR_2, enum fe_code_rate VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2, 0x0e) & ~0x07;

 if (((int)VAR_3 < VAR_1) || (VAR_3 > 128))
  VAR_3 = 128;


 if (VAR_3 == 135)
  FUNC_1(VAR_2, 0x43,
   FUNC_0(VAR_2, 0x43) | 0x01);
 else
  FUNC_1(VAR_2, 0x43,
   FUNC_0(VAR_2, 0x43) & ~0x01);

 switch (VAR_3) {
 case 135:
  FUNC_2("set FEC to 1/2\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x01);
  FUNC_1(VAR_2, 0x0f, 0x02);
  break;
 case 134:
  FUNC_2("set FEC to 2/3\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x02);
  FUNC_1(VAR_2, 0x0f, 0x04);
  break;
 case 133:
  FUNC_2("set FEC to 3/4\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x03);
  FUNC_1(VAR_2, 0x0f, 0x08);
  break;
 case 132:
  FUNC_2("set FEC to 4/5\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x04);
  FUNC_1(VAR_2, 0x0f, 0x10);
  break;
 case 131:
  FUNC_2("set FEC to 5/6\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x05);
  FUNC_1(VAR_2, 0x0f, 0x20);
  break;
 case 130:
  FUNC_2("set FEC to 6/7\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x06);
  FUNC_1(VAR_2, 0x0f, 0x40);
  break;
 case 129:
  FUNC_2("set FEC to 7/8\n");
  FUNC_1(VAR_2, 0x0e, VAR_4 | 0x07);
  FUNC_1(VAR_2, 0x0f, 0x80);
  break;
 case 128:
  FUNC_2("set FEC to auto\n");
  FUNC_1(VAR_2, 0x0f, 0xfe);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
