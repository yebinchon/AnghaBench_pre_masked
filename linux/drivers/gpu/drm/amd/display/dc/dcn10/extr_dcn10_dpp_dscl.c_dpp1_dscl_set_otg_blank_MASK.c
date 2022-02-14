
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scaler_data {int v_active; int h_active; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
  struct dcn10_dpp *VAR_6, const struct scaler_data *VAR_7)
{
 uint32_t VAR_8 = VAR_7->h_active;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 = VAR_7->v_active;
 uint32_t VAR_11 = 0;

 FUNC_0(VAR_0, 0,
   VAR_2, VAR_8,
   VAR_1, VAR_9);

 FUNC_0(VAR_3, 0,
   VAR_5, VAR_10,
   VAR_4, VAR_11);
}
