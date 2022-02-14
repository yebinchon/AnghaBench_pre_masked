
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long type; size_t size; } ;
typedef TYPE_1__ obj_hdr ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(
 obj_hdr *VAR_1, size_t *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 size_t VAR_6, VAR_7, VAR_8 = 0;

 if (VAR_4 == 0)
  goto on_error;

 VAR_5 = VAR_3[VAR_8++];
 VAR_1->type = (VAR_5 >> 4) & 7;

 VAR_7 = VAR_5 & 15;
 VAR_6 = 4;
 while (VAR_5 & 0x80) {
  if (VAR_4 <= VAR_8)
   goto on_error;

  if (sizeof(size_t) * 8 <= VAR_6)
   goto on_error;

  VAR_5 = VAR_3[VAR_8++];
  VAR_7 += (VAR_5 & 0x7f) << VAR_6;
  VAR_6 += 7;
 }

 VAR_1->size = VAR_7;

 if (VAR_2)
  *VAR_2 = VAR_8;

 return 0;

on_error:
 FUNC_0(VAR_0, "failed to parse loose object: invalid header");
 return -1;
}
