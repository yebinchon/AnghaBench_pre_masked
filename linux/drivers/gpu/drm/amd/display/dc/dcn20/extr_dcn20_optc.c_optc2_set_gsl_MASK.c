
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct gsl_params {int gsl_master_mode; int gsl_master_en; int gsl2_en; int gsl1_en; int gsl0_en; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(struct timing_generator *VAR_6,
     const struct gsl_params *VAR_7)
{
 struct optc *VAR_8 = FUNC_0(VAR_6);






 FUNC_1(VAR_3,
  VAR_0, VAR_7->gsl0_en,
  VAR_1, VAR_7->gsl1_en,
  VAR_2, VAR_7->gsl2_en,
  VAR_4, VAR_7->gsl_master_en,
  VAR_5, VAR_7->gsl_master_mode);
}
