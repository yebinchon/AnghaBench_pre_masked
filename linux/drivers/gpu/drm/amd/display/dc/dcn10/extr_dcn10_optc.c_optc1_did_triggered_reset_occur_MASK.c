
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

bool FUNC_2(
 struct timing_generator *VAR_4)
{
 struct optc *VAR_5 = FUNC_0(VAR_4);
 uint32_t VAR_6, VAR_7;

 FUNC_1(VAR_0,
  VAR_1, &VAR_6);

 FUNC_1(VAR_3,
  VAR_2, &VAR_7);

 return VAR_7 != 0 || VAR_6 != 0;
}
