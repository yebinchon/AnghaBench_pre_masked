
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct gsl_params {int gsl_window_end_y; int gsl_window_start_y; int gsl_window_end_x; int gsl_window_start_x; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

void FUNC_2(struct timing_generator *VAR_6,
     const struct gsl_params *VAR_7)
{
 struct optc *VAR_8 = FUNC_0(VAR_6);

 FUNC_1(VAR_4, 0,
  VAR_2, VAR_7->gsl_window_start_x,
  VAR_0, VAR_7->gsl_window_end_x);
 FUNC_1(VAR_5, 0,
  VAR_3, VAR_7->gsl_window_start_y,
  VAR_1, VAR_7->gsl_window_end_y);
}
