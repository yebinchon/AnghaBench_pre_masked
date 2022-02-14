
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int __be64 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*,int *,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;





__attribute__((used)) static size_t
FUNC_3(int VAR_0, unsigned char *VAR_1, u64 VAR_2, u64 VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 __be64 VAR_9 = FUNC_0(VAR_3);

 switch (VAR_0) {
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_5 = 448 / 8;
  VAR_4 = 512 / 8;
  VAR_8 = 8;
  break;
 default:
  VAR_5 = 896 / 8;
  VAR_4 = 1024 / 8;
  VAR_8 = 16;
  break;
 }

 VAR_5 -= 1;
 VAR_6 = VAR_2 & (VAR_4 - 1);
 VAR_7 = VAR_6 > VAR_5 ? VAR_5 + VAR_4 - VAR_6 : VAR_5 - VAR_6;

 FUNC_2(VAR_1 + 1, 0, VAR_7);
 VAR_1[0] = 0x80;

 if (VAR_8 == 16) {
  FUNC_2(VAR_1 + 1 + VAR_7, 0, 8);
  FUNC_1(VAR_1 + 1 + VAR_7 + 8, &VAR_9, 8);
 } else {
  FUNC_1(VAR_1 + 1 + VAR_7, &VAR_9, 8);
 }

 return VAR_7 + VAR_8 + 1;
}
