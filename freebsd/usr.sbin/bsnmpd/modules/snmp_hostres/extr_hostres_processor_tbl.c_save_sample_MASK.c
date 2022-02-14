
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct processor_entry {int cur_sample_idx; long** states; int sample_cnt; int load; int cpu_no; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct processor_entry*) ;

__attribute__((used)) static void
FUNC_2(struct processor_entry *VAR_2, long *VAR_3)
{
 int VAR_4;

 VAR_2->cur_sample_idx = (VAR_2->cur_sample_idx + 1) % VAR_1;
 for (VAR_4 = 0; VAR_3 != ((void*)0) && VAR_4 < VAR_0; VAR_4++)
  VAR_2->states[VAR_2->cur_sample_idx][VAR_4] = VAR_3[VAR_4];

 VAR_2->sample_cnt++;
 if (VAR_2->sample_cnt > VAR_1)
  VAR_2->sample_cnt = VAR_1;

 FUNC_0("sample count for CPU no. %d went to %d", VAR_2->cpu_no, VAR_2->sample_cnt);
 VAR_2->load = FUNC_1(VAR_2);

}
