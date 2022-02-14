
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct topology_resp {int * topology; } ;
struct clock_topology {void* type_flag; void* flag; scalar_t__ type; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct clock_topology *VAR_5,
           struct topology_resp *VAR_6,
           u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->topology); VAR_8++) {
  VAR_9 = FUNC_1(VAR_1, VAR_6->topology[VAR_8]);
  if (VAR_9 == VAR_4)
   return VAR_3;
  VAR_5[*VAR_7].type = VAR_9;
  VAR_5[*VAR_7].flag = FUNC_1(VAR_0,
         VAR_6->topology[VAR_8]);
  VAR_5[*VAR_7].type_flag =
    FUNC_1(VAR_2,
       VAR_6->topology[VAR_8]);
  (*VAR_7)++;
 }

 return 0;
}
