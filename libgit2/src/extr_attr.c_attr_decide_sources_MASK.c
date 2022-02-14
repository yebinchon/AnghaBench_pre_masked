
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int git_attr_file_source ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(
 uint32_t VAR_4, bool VAR_5, bool VAR_6, git_attr_file_source *VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_4 & 0x03) {
 case 130:
  if (VAR_5)
   VAR_7[VAR_8++] = VAR_1;
  if (VAR_6)
   VAR_7[VAR_8++] = VAR_3;
  break;
 case 128:
  if (VAR_6)
   VAR_7[VAR_8++] = VAR_3;
  if (VAR_5)
   VAR_7[VAR_8++] = VAR_1;
  break;
 case 129:
  if (VAR_6)
   VAR_7[VAR_8++] = VAR_3;
  break;
 }

 if ((VAR_4 & VAR_0) != 0)
  VAR_7[VAR_8++] = VAR_2;

 return VAR_8;
}
