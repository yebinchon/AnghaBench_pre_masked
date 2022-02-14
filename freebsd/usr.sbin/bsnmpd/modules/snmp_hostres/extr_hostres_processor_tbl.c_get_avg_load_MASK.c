
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct processor_entry {int sample_cnt; int cur_sample_idx; int cpu_no; scalar_t__** states; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,long,double) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct processor_entry *VAR_2)
{
 u_int VAR_3, VAR_4;
 long VAR_5 = 0;
 double VAR_6 = 0.0;

 FUNC_1(VAR_2 != ((void*)0));


 if (VAR_2->sample_cnt <= 1)
  return (0);


 if (VAR_2->sample_cnt == VAR_1)
  VAR_4 = (VAR_2->cur_sample_idx + 1) % VAR_1;
 else
  VAR_4 = 0;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 += VAR_2->states[VAR_2->cur_sample_idx][VAR_3];
  VAR_5 -= VAR_2->states[VAR_4][VAR_3];
 }
 if (VAR_5 == 0)
  return 0;



 VAR_6 = (double)(VAR_2->states[VAR_2->cur_sample_idx][VAR_0-1] -
     VAR_2->states[VAR_4][VAR_0-1]) / VAR_5;
 VAR_6 = 100 - (VAR_6 * 100);
 FUNC_0("CPU no. %d, delta ticks %ld, pct usage %.2f", VAR_2->cpu_no,
     VAR_5, VAR_6);

 return ((int)(VAR_6));
}
