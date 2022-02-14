
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int size; } ;
struct perf_event {int cpu; } ;
struct etr_buf {int dummy; } ;


 int VAR_0 ;
 struct etr_buf* FUNC_0 (int ) ;
 int FUNC_1 (struct etr_buf*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int) ;
 struct etr_buf* FUNC_3 (struct tmc_drvdata*,unsigned long,int ,int,int *) ;

__attribute__((used)) static struct etr_buf *
FUNC_4(struct tmc_drvdata *VAR_4, struct perf_event *VAR_5,
       int VAR_6, void **VAR_7, bool VAR_8)
{
 int VAR_9;
 struct etr_buf *VAR_10;
 unsigned long VAR_11;

 VAR_9 = (VAR_5->cpu == -1) ? VAR_1 : FUNC_2(VAR_5->cpu);




 if ((VAR_6 << VAR_2) > VAR_4->size) {
  VAR_10 = FUNC_3(VAR_4, (VAR_6 << VAR_2),
         0, VAR_9, ((void*)0));
  if (!FUNC_1(VAR_10))
   goto done;
 }





 VAR_11 = VAR_4->size;
 do {
  VAR_10 = FUNC_3(VAR_4, VAR_11, 0, VAR_9, ((void*)0));
  if (!FUNC_1(VAR_10))
   goto done;
  VAR_11 /= 2;
 } while (VAR_11 >= VAR_3);

 return FUNC_0(-VAR_0);

done:
 return VAR_10;
}
