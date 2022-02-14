
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_job_gather {int words; size_t offset; int base; int bo; } ;
struct host1x_job {unsigned int num_gathers; size_t gather_copy_size; int gather_copy; void* gather_copy_mapped; struct host1x_job_gather* gathers; int class; scalar_t__ num_relocs; int relocs; } ;
struct host1x_firewall {scalar_t__ num_relocs; int class; int reloc; struct device* dev; struct host1x_job* job; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct device*,size_t,int *,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (void*,void*,int) ;
 scalar_t__ FUNC_4 (struct host1x_firewall*,struct host1x_job_gather*) ;

__attribute__((used)) static inline int FUNC_5(struct host1x_job *VAR_4, struct device *VAR_5)
{
 struct host1x_firewall VAR_6;
 size_t VAR_7 = 0;
 size_t VAR_8 = 0;
 unsigned int VAR_9;

 VAR_6.job = VAR_4;
 VAR_6.dev = VAR_5;
 VAR_6.reloc = VAR_4->relocs;
 VAR_6.num_relocs = VAR_4->num_relocs;
 VAR_6.class = VAR_4->class;

 for (VAR_9 = 0; VAR_9 < VAR_4->num_gathers; VAR_9++) {
  struct host1x_job_gather *VAR_10 = &VAR_4->gathers[VAR_9];

  VAR_7 += VAR_10->words * sizeof(u32);
 }





 VAR_4->gather_copy_mapped = FUNC_0(VAR_5, VAR_7, &VAR_4->gather_copy,
            VAR_3);


 if (!VAR_4->gather_copy_mapped)
  VAR_4->gather_copy_mapped = FUNC_0(VAR_5, VAR_7,
             &VAR_4->gather_copy,
             VAR_2);
 if (!VAR_4->gather_copy_mapped)
  return -VAR_1;

 VAR_4->gather_copy_size = VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_4->num_gathers; VAR_9++) {
  struct host1x_job_gather *VAR_11 = &VAR_4->gathers[VAR_9];
  void *VAR_12;


  VAR_12 = FUNC_1(VAR_11->bo);
  FUNC_3(VAR_4->gather_copy_mapped + VAR_8, VAR_12 + VAR_11->offset,
         VAR_11->words * sizeof(u32));
  FUNC_2(VAR_11->bo, VAR_12);


  VAR_11->base = VAR_4->gather_copy;
  VAR_11->offset = VAR_8;


  if (FUNC_4(&VAR_6, VAR_11))
   return -VAR_0;

  VAR_8 += VAR_11->words * sizeof(u32);
 }


 if (VAR_6.num_relocs)
  return -VAR_0;

 return 0;
}
