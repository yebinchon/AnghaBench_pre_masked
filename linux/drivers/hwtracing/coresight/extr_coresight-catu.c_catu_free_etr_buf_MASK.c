
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_buf {scalar_t__ mode; struct catu_etr_buf* private; } ;
struct catu_etr_buf {int catu_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct catu_etr_buf*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct etr_buf *VAR_1)
{
 struct catu_etr_buf *VAR_2;

 if (!VAR_1 || VAR_1->mode != VAR_0 || !VAR_1->private)
  return;

 VAR_2 = VAR_1->private;
 FUNC_1(VAR_2->catu_table);
 FUNC_0(VAR_2);
}
