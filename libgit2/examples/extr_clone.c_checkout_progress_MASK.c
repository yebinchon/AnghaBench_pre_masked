
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t completed_steps; size_t total_steps; char const* path; } ;
typedef TYPE_1__ progress_data ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
 progress_data *VAR_4 = (progress_data*)VAR_3;
 VAR_4->completed_steps = VAR_1;
 VAR_4->total_steps = VAR_2;
 VAR_4->path = VAR_0;
 FUNC_0(VAR_4);
}
