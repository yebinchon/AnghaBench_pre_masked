
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmc_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 void** VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_13;

 VAR_8 = FUNC_2((VAR_11 + 1) * sizeof(struct cmc_state *), VAR_3,
     VAR_4);
 for (VAR_13 = 0; VAR_13 <= VAR_11; VAR_13++)
  VAR_8[VAR_13] = FUNC_2(sizeof(struct cmc_state) * VAR_10,
      VAR_3, VAR_4 | VAR_5);
 FUNC_0(((void*)0), FUNC_1(VAR_7), VAR_6,
     "cmc_throttle", VAR_2 | VAR_1 | VAR_0,
     &VAR_9, 0, VAR_12, "I",
     "Interval in seconds to throttle corrected MC interrupts");
}
