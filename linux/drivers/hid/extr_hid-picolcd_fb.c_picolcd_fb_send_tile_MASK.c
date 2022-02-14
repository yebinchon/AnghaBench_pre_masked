
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct picolcd_data {int status; int lock; int hdev; } ;
struct hid_report {int maxfield; int * field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct hid_report*,int ) ;
 int FUNC_1 (int ,int,int) ;
 struct hid_report* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct picolcd_data *VAR_5, u8 *VAR_6,
  int VAR_7, int VAR_8)
{
 struct hid_report *VAR_9, *VAR_10;
 unsigned long VAR_11;
 u8 *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_2(VAR_3, VAR_5->hdev);
 if (!VAR_9 || VAR_9->maxfield != 1)
  return -VAR_0;
 VAR_10 = FUNC_2(VAR_4, VAR_5->hdev);
 if (!VAR_10 || VAR_10->maxfield != 1)
  return -VAR_0;

 FUNC_3(&VAR_5->lock, VAR_11);
 if ((VAR_5->status & VAR_2)) {
  FUNC_4(&VAR_5->lock, VAR_11);
  return -VAR_0;
 }
 FUNC_1(VAR_9->field[0], 0, VAR_7 << 2);
 FUNC_1(VAR_9->field[0], 1, 0x02);
 FUNC_1(VAR_9->field[0], 2, 0x00);
 FUNC_1(VAR_9->field[0], 3, 0x00);
 FUNC_1(VAR_9->field[0], 4, 0xb8 | VAR_8);
 FUNC_1(VAR_9->field[0], 5, 0x00);
 FUNC_1(VAR_9->field[0], 6, 0x00);
 FUNC_1(VAR_9->field[0], 7, 0x40);
 FUNC_1(VAR_9->field[0], 8, 0x00);
 FUNC_1(VAR_9->field[0], 9, 0x00);
 FUNC_1(VAR_9->field[0], 10, 32);

 FUNC_1(VAR_10->field[0], 0, (VAR_7 << 2) | 0x01);
 FUNC_1(VAR_10->field[0], 1, 0x00);
 FUNC_1(VAR_10->field[0], 2, 0x00);
 FUNC_1(VAR_10->field[0], 3, 32);

 VAR_12 = VAR_6 + (VAR_8 * 4 + VAR_7) * 64;
 for (VAR_13 = 0; VAR_13 < 64; VAR_13++)
  if (VAR_13 < 32)
   FUNC_1(VAR_9->field[0], 11 + VAR_13, VAR_12[VAR_13]);
  else
   FUNC_1(VAR_10->field[0], 4 + VAR_13 - 32, VAR_12[VAR_13]);

 FUNC_0(VAR_5->hdev, VAR_9, VAR_1);
 FUNC_0(VAR_5->hdev, VAR_10, VAR_1);
 FUNC_4(&VAR_5->lock, VAR_11);
 return 0;
}
