
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct nvbios {int major_version; int* data; int init_script_tbls_ptr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint16_t FUNC_1(struct nvbios *VAR_0, uint16_t VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 uint16_t VAR_5, VAR_6 = 0;

 if (VAR_0->major_version < 5)
  VAR_3 = 3;
 else
  VAR_3 = 4;

 do {
  VAR_5 = FUNC_0(VAR_0->data[VAR_1 + VAR_3 * VAR_4]);
  if (VAR_2 >= VAR_5 * 10) {
   if (VAR_0->major_version < 5) {
    uint8_t VAR_7 = VAR_0->data[VAR_1 + 2 + VAR_3 * VAR_4];
    VAR_6 = FUNC_0(VAR_0->data[VAR_0->init_script_tbls_ptr + VAR_7 * 2]);
   } else
    VAR_6 = FUNC_0(VAR_0->data[VAR_1 + 2 + VAR_3 * VAR_4]);
   break;
  }
  VAR_4++;
 } while (VAR_5);

 return VAR_6;
}
