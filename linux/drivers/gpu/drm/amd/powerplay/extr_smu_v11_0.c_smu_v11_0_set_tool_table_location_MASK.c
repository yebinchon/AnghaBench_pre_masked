
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_table {scalar_t__ mc_address; } ;
struct TYPE_2__ {struct smu_table* tables; } ;
struct smu_context {TYPE_1__ smu_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct smu_context*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_3)
{
 int VAR_4 = 0;
 struct smu_table *VAR_5 = &VAR_3->smu_table.tables[VAR_2];

 if (VAR_5->mc_address) {
  VAR_4 = FUNC_1(VAR_3,
    VAR_0,
    FUNC_2(VAR_5->mc_address));
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_3,
    VAR_1,
    FUNC_0(VAR_5->mc_address));
 }

 return VAR_4;
}
