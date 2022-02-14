
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct seq_file {scalar_t__ private; } ;
typedef int ide_drive_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ,char) ;
 int FUNC_4 (struct seq_file*,char) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, void *VAR_4)
{
 ide_drive_t *VAR_5 = (ide_drive_t *)VAR_3->private;
 u8 *VAR_6;

 if (!VAR_5) {
  FUNC_4(VAR_3, '\n');
  return 0;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 if (FUNC_5(VAR_5, VAR_6) == 0) {
  __le16 *VAR_7 = (__le16 *)VAR_6;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_2 / 2; VAR_8++) {
   FUNC_3(VAR_3, "%04x%c", FUNC_2(VAR_7[VAR_8]),
     (VAR_8 % 8) == 7 ? '\n' : ' ');
  }
 } else
  FUNC_4(VAR_3, VAR_6[0]);
 FUNC_0(VAR_6);
 return 0;
}
