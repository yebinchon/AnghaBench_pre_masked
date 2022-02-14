
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int idr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 int* VAR_3 ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_3[0] + (VAR_0/200);
 VAR_7 = VAR_3[1] + (VAR_0/200);
 VAR_8 = VAR_3[2] + (VAR_0/200);






 FUNC_5(VAR_4, "%d.%02d %d.%02d %d.%02d %ld/%d %d\n",
  FUNC_1(VAR_6), FUNC_0(VAR_6),
  FUNC_1(VAR_7), FUNC_0(VAR_7),
  FUNC_1(VAR_8), FUNC_0(VAR_8),
  FUNC_3(),
  FUNC_2(&VAR_2),
  FUNC_4(&FUNC_6(VAR_1)->idr) - 1);
 return 0;
}
