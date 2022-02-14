
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* sink_rates; int num_sink_rates; int * dpcd; } ;


 int FUNC_0 (int const*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct intel_dp *VAR_1)
{
 static const int VAR_2[] = {
  162000, 270000, 540000, 810000
 };
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_1->dpcd[VAR_0]);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if (VAR_2[VAR_3] > VAR_4)
   break;
  VAR_1->sink_rates[VAR_3] = VAR_2[VAR_3];
 }

 VAR_1->num_sink_rates = VAR_3;
}
