
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*,int ) ;
 int FUNC_1 (struct qib_devdata*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_5, int VAR_6, int VAR_7)
{
 u16 VAR_8;
 u64 VAR_9;
 int VAR_10 = 0;
 u64 VAR_11 = 0;

 switch (VAR_6) {
 case 130:




  VAR_8 = VAR_2;
  break;

 case 129:
 case 128:

  VAR_8 = VAR_3;
  VAR_11 = (2 << (VAR_6 - 129));
  break;

 default:
  return 0;
 }


 FUNC_0(VAR_5, VAR_4);
 FUNC_2(15);

 VAR_9 = FUNC_0(VAR_5, VAR_8);

 VAR_10 = !!(VAR_9 & VAR_0);
 if (VAR_7 < 0) {

  u64 VAR_12;




  u64 VAR_13 = 0;

  FUNC_1(VAR_5, VAR_8, VAR_13);

  VAR_12 = FUNC_0(VAR_5, VAR_8);
  FUNC_2(5);
  VAR_12 = FUNC_0(VAR_5, VAR_8);
  if (VAR_12 & VAR_0)
   VAR_10 = -1;
 } else if (VAR_7 > 0) {

  u64 VAR_14;
  u64 VAR_15 = VAR_1 | VAR_11;

  FUNC_1(VAR_5, VAR_8, VAR_15);

  VAR_14 = FUNC_0(VAR_5, VAR_8);
  FUNC_2(5);
  VAR_14 = FUNC_0(VAR_5, VAR_8);
  if (!(VAR_14 & VAR_0))
   VAR_10 = -1;
 }
 return VAR_10;
}
