
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysinfo_3_2_2 {int count; TYPE_2__* vm; } ;
struct lgr_info {int vm_count; TYPE_1__* vm; } ;
struct TYPE_4__ {int cpi; int name; } ;
struct TYPE_3__ {int cpi; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sysinfo_3_2_2*,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct lgr_info *VAR_3)
{
 struct sysinfo_3_2_2 *VAR_4 = (void *) VAR_1;
 int VAR_5;

 if (FUNC_2(VAR_4, 3, 2, 2))
  return;
 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2, VAR_4->count, VAR_0); VAR_5++) {
  FUNC_0(VAR_3->vm[VAR_5].name, VAR_4->vm[VAR_5].name,
   sizeof(VAR_4->vm[VAR_5].name));
  FUNC_0(VAR_3->vm[VAR_5].cpi, VAR_4->vm[VAR_5].cpi,
   sizeof(VAR_4->vm[VAR_5].cpi));
 }
 VAR_3->vm_count = VAR_4->count;
}
