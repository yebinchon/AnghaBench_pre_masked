
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct parents_resp {scalar_t__* parents; } ;
struct clock_parent {int name; void* id; void* flag; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (void*,int ) ;

__attribute__((used)) static int FUNC_4(struct clock_parent *VAR_5,
          struct parents_resp *VAR_6,
          u32 *VAR_7)
{
 int VAR_8;
 struct clock_parent *VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->parents); VAR_8++) {
  if (VAR_6->parents[VAR_8] == VAR_4)
   return VAR_3;

  VAR_9 = &VAR_5[VAR_8];
  VAR_9->id = FUNC_1(VAR_1, VAR_6->parents[VAR_8]);
  if (VAR_6->parents[VAR_8] == VAR_2) {
   FUNC_2(VAR_9->name, "dummy_name");
   VAR_9->flag = 0;
  } else {
   VAR_9->flag = FUNC_1(VAR_0,
       VAR_6->parents[VAR_8]);
   if (FUNC_3(VAR_9->id, VAR_9->name))
    continue;
  }
  *VAR_7 += 1;
 }

 return 0;
}
