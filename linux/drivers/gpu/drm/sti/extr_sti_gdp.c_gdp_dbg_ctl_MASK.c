
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_3__ {int format; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, "\tColor:");
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].format == (VAR_3 & 0x1F)) {
   FUNC_2(VAR_2, VAR_1[VAR_4].name);
   break;
  }
 }
 if (VAR_4 == FUNC_0(VAR_1))
  FUNC_2(VAR_2, "<UNKNOWN>");

 FUNC_1(VAR_2, "\tWaitNextVsync:%d", VAR_3 & VAR_0 ? 1 : 0);
}
