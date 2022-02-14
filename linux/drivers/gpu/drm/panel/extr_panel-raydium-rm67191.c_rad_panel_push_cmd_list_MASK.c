
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_device {int dummy; } ;
struct cmd_set_entry {int param; int cmd; } ;
typedef int buffer ;


 size_t FUNC_0 (struct cmd_set_entry*) ;
 struct cmd_set_entry* VAR_0 ;
 int FUNC_1 (struct mipi_dsi_device*,int **,int) ;

__attribute__((used)) static int FUNC_2(struct mipi_dsi_device *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  const struct cmd_set_entry *VAR_5 = &VAR_0[VAR_2];
  u8 VAR_6[2] = { VAR_5->cmd, VAR_5->param };

  VAR_4 = FUNC_1(VAR_1, &VAR_6, sizeof(VAR_6));
  if (VAR_4 < 0)
   return VAR_4;
 }

 return VAR_4;
}
