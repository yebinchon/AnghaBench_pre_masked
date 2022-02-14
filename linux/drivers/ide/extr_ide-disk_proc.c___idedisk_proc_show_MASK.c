
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
typedef int ide_drive_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,int ,char) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, ide_drive_t *VAR_4, u8 VAR_5)
{
 u8 *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 (void)FUNC_5(VAR_4);

 if (FUNC_0(VAR_4, VAR_6, VAR_5) == 0) {
  __le16 *VAR_7 = (__le16 *)VAR_6;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_2 / 2; VAR_8++) {
   FUNC_4(VAR_3, "%04x%c", FUNC_3(VAR_7[VAR_8]),
     (VAR_8 % 8) == 7 ? '\n' : ' ');
  }
 }
 FUNC_1(VAR_6);
 return 0;
}
