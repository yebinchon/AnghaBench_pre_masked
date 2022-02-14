
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(unsigned char *VAR_2, int VAR_3,
     enum object_type VAR_4, uintmax_t VAR_5)
{
 int VAR_6 = 1;
 unsigned char VAR_7;

 if (VAR_4 < VAR_0 || VAR_4 > VAR_1)
  FUNC_0("bad type %d", VAR_4);

 VAR_7 = (VAR_4 << 4) | (VAR_5 & 15);
 VAR_5 >>= 4;
 while (VAR_5) {
  if (VAR_6 == VAR_3)
   FUNC_0("object size is too enormous to format");
  *VAR_2++ = VAR_7 | 0x80;
  VAR_7 = VAR_5 & 0x7f;
  VAR_5 >>= 7;
  VAR_6++;
 }
 *VAR_2 = VAR_7;
 return VAR_6;
}
