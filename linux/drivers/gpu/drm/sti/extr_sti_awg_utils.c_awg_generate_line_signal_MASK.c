
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct awg_timing {int trailing_pixels; long blanking_level; scalar_t__ blanking_pixels; int active_pixels; } ;
struct awg_code_generation_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,long,int ,int,struct awg_code_generation_params*) ;

__attribute__((used)) static int FUNC_1(
  struct awg_code_generation_params *VAR_4,
  struct awg_timing *VAR_5)
{
 long int VAR_6;
 int VAR_7 = 0;

 if (VAR_5->trailing_pixels > 0) {

  VAR_6 = VAR_5->blanking_level;
  VAR_7 |= FUNC_0(VAR_1, VAR_6, 0, 0, VAR_4);

  VAR_6 = VAR_5->trailing_pixels - 1 + VAR_0;
  VAR_7 |= FUNC_0(VAR_3, VAR_6, 0, 0, VAR_4);
 }


 VAR_6 = VAR_5->blanking_level;
 VAR_7 |= FUNC_0((VAR_5->trailing_pixels > 0) ? VAR_2 : VAR_1,
   VAR_6, 0, 1, VAR_4);

 if (VAR_5->blanking_pixels > 0) {

  VAR_6 = VAR_5->active_pixels - 1;
  VAR_7 |= FUNC_0(VAR_3, VAR_6, 0, 1, VAR_4);


  VAR_6 = VAR_5->blanking_level;
  VAR_7 |= FUNC_0(VAR_2, VAR_6, 0, 0, VAR_4);
 }

 return VAR_7;
}
