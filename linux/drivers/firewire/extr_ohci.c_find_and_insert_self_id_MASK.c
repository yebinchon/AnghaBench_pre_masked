
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int* self_id_buffer; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_ohci*,int,int) ;
 int FUNC_1 (struct fw_ohci*,int) ;
 int FUNC_2 (struct fw_ohci*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (struct fw_ohci*,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct fw_ohci*,int ) ;

__attribute__((used)) static int FUNC_7(struct fw_ohci *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 u32 VAR_9 = 0x8040c800;

 VAR_5 = FUNC_6(VAR_3, VAR_1);
 if (!(VAR_5 & VAR_2)) {
  FUNC_4(VAR_3,
       "node ID not valid, new bus reset in progress\n");
  return -VAR_0;
 }
 VAR_9 |= ((VAR_5 & 0x3f) << 24);

 VAR_5 = FUNC_5(&VAR_3->card, 4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_9 |= ((VAR_5 & 0x07) << 8);

 VAR_5 = FUNC_5(&VAR_3->card, 1);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_9 |= ((VAR_5 & 0x3f) << 16);

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_8 = FUNC_1(VAR_3, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_9 |= ((VAR_8 & 0x3) << (6 - (VAR_6 * 2)));
 }

 VAR_9 |= FUNC_2(VAR_3);

 VAR_7 = FUNC_0(VAR_3, VAR_9, VAR_4);
 if (VAR_7 >= 0) {
  FUNC_3(&(VAR_3->self_id_buffer[VAR_7+1]),
   &(VAR_3->self_id_buffer[VAR_7]),
   (VAR_4 - VAR_7) * sizeof(*VAR_3->self_id_buffer));
  VAR_3->self_id_buffer[VAR_7] = VAR_9;
  VAR_4++;
 }
 return VAR_4;
}
