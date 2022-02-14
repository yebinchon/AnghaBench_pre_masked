
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int x; int y; int width; int height; } ;
struct scaler_data {int h_active; int v_active; TYPE_1__ recout; } ;
struct dcn10_dpp {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dcn10_dpp *VAR_6,
 const struct scaler_data *VAR_7)
{
 uint32_t VAR_8 = VAR_7->recout.x;
 uint32_t VAR_9 = VAR_7->recout.y;

 int VAR_10 = VAR_7->h_active - VAR_7->recout.x - VAR_7->recout.width;
 int VAR_11 = VAR_7->v_active - VAR_7->recout.y - VAR_7->recout.height;

 if (VAR_10 < 0) {
  FUNC_0();
  VAR_10 = 0;
 }
 if (VAR_11 < 0) {
  FUNC_0();
  VAR_11 = 0;
 }

 FUNC_1(VAR_0, 0,
  VAR_3, VAR_8,
  VAR_4, VAR_10);

 FUNC_1(VAR_1, 0,
  VAR_2, VAR_11,
  VAR_5, VAR_9);
}
