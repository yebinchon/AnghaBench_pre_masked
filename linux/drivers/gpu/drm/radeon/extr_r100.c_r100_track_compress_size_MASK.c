
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_3 = 4;
 VAR_4 = 4;

 switch (VAR_0) {
 case 129:
  VAR_5 = 8;
  VAR_8 = 4;
  break;
 default:
 case 128:
  VAR_5 = 16;
  VAR_8 = 2;
  break;
 }

 VAR_7 = (VAR_2 + VAR_4 - 1) / VAR_4;
 VAR_6 = (VAR_1 + VAR_3 - 1) / VAR_3;
 if (VAR_6 < VAR_8)
  VAR_6 = VAR_8;
 VAR_9 = VAR_6 * VAR_7 * VAR_5;
 return VAR_9;
}
