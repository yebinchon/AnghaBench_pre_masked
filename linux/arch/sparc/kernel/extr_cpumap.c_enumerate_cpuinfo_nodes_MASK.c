
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_level {int start_index; int end_index; int num_nodes; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpuinfo_level *VAR_5)
{
 int VAR_6[VAR_1];
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = VAR_4; VAR_7 < VAR_1; VAR_7++) {
  struct cpuinfo_level *VAR_10 = &VAR_5[VAR_7];

  VAR_6[VAR_7] = -1;
  VAR_10->start_index = VAR_10->end_index = VAR_10->num_nodes = 0;
 }

 VAR_9 = 1;

 for (VAR_7 = 0; VAR_7 < FUNC_2(); VAR_7++) {
  if (!FUNC_0(VAR_7))
   continue;

  VAR_8 = FUNC_1(VAR_7, VAR_2);
  if (VAR_8 > VAR_6[VAR_2]) {
   VAR_5[VAR_2].num_nodes++;
   VAR_6[VAR_2] = VAR_8;
   VAR_9++;
  }
  VAR_8 = FUNC_1(VAR_7, VAR_0);
  if (VAR_8 > VAR_6[VAR_0]) {
   VAR_5[VAR_0].num_nodes++;
   VAR_6[VAR_0] = VAR_8;
   VAR_9++;
  }
  VAR_8 = FUNC_1(VAR_7, VAR_3);
  if (VAR_8 > VAR_6[VAR_3]) {
   VAR_5[VAR_3].num_nodes++;
   VAR_6[VAR_3] = VAR_8;
   VAR_9++;
  }
 }

 VAR_5[VAR_4].num_nodes = 1;

 VAR_8 = VAR_5[VAR_2].num_nodes;
 VAR_5[VAR_2].start_index = 1;
 VAR_5[VAR_2].end_index = VAR_8;

 VAR_8++;
 VAR_5[VAR_0].start_index = VAR_8;
 VAR_8 += VAR_5[VAR_0].num_nodes;
 VAR_5[VAR_0].end_index = VAR_8 - 1;

 VAR_5[VAR_3].start_index = VAR_8;
 VAR_8 += VAR_5[VAR_3].num_nodes;
 VAR_5[VAR_3].end_index = VAR_8 - 1;

 return VAR_9;
}
