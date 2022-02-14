
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int clock_base; int progusage2; } ;


 int FUNC_0 (int *,int *,int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct hws_trailer_entry *VAR_2;

 VAR_2 = (struct hws_trailer_entry *)FUNC_1(VAR_1);


 VAR_2->clock_base = 1;
 FUNC_0(&VAR_2->progusage2, &VAR_0[1], 8);
}
