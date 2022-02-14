
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udl_device {int udev; } ;


 int FUNC_0 (char*,int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, u8 *VAR_4, unsigned int VAR_5,
          size_t VAR_6)
{
 int VAR_7, VAR_8;
 u8 *VAR_9;
 struct udl_device *VAR_10 = VAR_3;

 VAR_9 = FUNC_2(2, VAR_1);
 if (!VAR_9)
  return -1;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  int VAR_11 = (VAR_8 + VAR_5 * VAR_0) << 8;
  VAR_7 = FUNC_3(VAR_10->udev,
          FUNC_4(VAR_10->udev, 0),
       (0x02), (0x80 | (0x02 << 5)), VAR_11,
       0xA1, VAR_9, 2, VAR_2);
  if (VAR_7 < 1) {
   FUNC_0("Read EDID byte %d failed err %x\n", VAR_8, VAR_7);
   FUNC_1(VAR_9);
   return -1;
  }
  VAR_4[VAR_8] = VAR_9[1];
 }

 FUNC_1(VAR_9);
 return 0;
}
