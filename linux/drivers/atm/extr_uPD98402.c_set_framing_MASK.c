
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_dev {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (char const,int ) ;


 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 char const VAR_5 ;
 char const VAR_6 ;

__attribute__((used)) static int FUNC_5(struct atm_dev *VAR_7,unsigned char VAR_8)
{
 static const unsigned char VAR_9[] = { 1,2,3,0 };
 static const unsigned char VAR_10[] = { 1,0,0,2 };
 const char *VAR_11;
 unsigned long VAR_12;

 switch (VAR_8) {
  case 128:
   VAR_11 = VAR_9;
   break;
  case 129:
   VAR_11 = VAR_10;
   break;
  default:
   return -VAR_3;
 }
 FUNC_3(&FUNC_1(VAR_7)->lock, VAR_12);
 FUNC_2(VAR_11[0],VAR_0);
 FUNC_2(VAR_11[1],VAR_1);
 FUNC_2(VAR_11[2],VAR_2);
 FUNC_2((FUNC_0(VAR_4) & ~VAR_5) | (VAR_11[3] <<
     VAR_6),VAR_4);
 FUNC_4(&FUNC_1(VAR_7)->lock, VAR_12);
 return 0;
}
