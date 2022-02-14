
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int config; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct hw_perf_event *VAR_7, int VAR_8)
{
 unsigned int VAR_9;

 VAR_9 = FUNC_1(VAR_6);
 VAR_9 &= ~VAR_5;
 VAR_9 |= VAR_8 ? VAR_4 : VAR_3;
 FUNC_2(VAR_9, VAR_6);

 VAR_9 = FUNC_1(FUNC_0(VAR_8));
 VAR_9 |= (VAR_7->config << 6) | VAR_0 | VAR_2;
 FUNC_2(VAR_9, FUNC_0(VAR_8));

 FUNC_2(FUNC_1(FUNC_0(VAR_8)) | VAR_1, FUNC_0(VAR_8));
}
