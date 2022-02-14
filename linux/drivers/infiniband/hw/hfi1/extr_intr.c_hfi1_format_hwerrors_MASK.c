
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_hwerror_msgs {int mask; int msg; } ;


 int FUNC_0 (char*,size_t,int ) ;

void FUNC_1(u64 VAR_0, const struct hfi1_hwerror_msgs *VAR_1,
     size_t VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_0 & VAR_1[VAR_5].mask)
   FUNC_0(VAR_3, VAR_4, VAR_1[VAR_5].msg);
}
