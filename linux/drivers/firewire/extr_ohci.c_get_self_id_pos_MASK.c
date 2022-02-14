
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int* self_id_buffer; } ;



__attribute__((used)) static int FUNC_0(struct fw_ohci *VAR_0, u32 VAR_1,
 int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = VAR_0->self_id_buffer[VAR_3];
  if ((VAR_1 & 0xff000000) == (VAR_4 & 0xff000000))
   return -1;
  if ((VAR_1 & 0xff000000) < (VAR_4 & 0xff000000))
   return VAR_3;
 }
 return VAR_3;
}
