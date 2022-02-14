
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct host1x_reloc {int dummy; } ;
struct host1x_job_unpin_data {int dummy; } ;
struct host1x_job_gather {int dummy; } ;
struct host1x_job {int * addr_phys; int * gather_addr_phys; int * reloc_addr_phys; void* gathers; void* unpins; void* relocs; struct host1x_channel* channel; int ref; } ;
struct host1x_channel {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct host1x_job* FUNC_1 (int,int ) ;

struct host1x_job *FUNC_2(struct host1x_channel *VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct host1x_job *VAR_5 = ((void*)0);
 unsigned int VAR_6 = VAR_3 + VAR_4;
 u64 VAR_7;
 void *VAR_8;


 VAR_7 = sizeof(struct host1x_job) +
  (u64)VAR_4 * sizeof(struct host1x_reloc) +
  (u64)VAR_6 * sizeof(struct host1x_job_unpin_data) +
  (u64)VAR_3 * sizeof(struct host1x_job_gather) +
  (u64)VAR_6 * sizeof(dma_addr_t) +
  (u64)VAR_6 * sizeof(u32 *);
 if (VAR_7 > VAR_1)
  return ((void*)0);

 VAR_8 = VAR_5 = FUNC_1(VAR_7, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->ref);
 VAR_5->channel = VAR_2;


 VAR_8 += sizeof(struct host1x_job);
 VAR_5->relocs = VAR_4 ? VAR_8 : ((void*)0);
 VAR_8 += VAR_4 * sizeof(struct host1x_reloc);
 VAR_5->unpins = VAR_6 ? VAR_8 : ((void*)0);
 VAR_8 += VAR_6 * sizeof(struct host1x_job_unpin_data);
 VAR_5->gathers = VAR_3 ? VAR_8 : ((void*)0);
 VAR_8 += VAR_3 * sizeof(struct host1x_job_gather);
 VAR_5->addr_phys = VAR_6 ? VAR_8 : ((void*)0);

 VAR_5->reloc_addr_phys = VAR_5->addr_phys;
 VAR_5->gather_addr_phys = &VAR_5->addr_phys[VAR_4];

 return VAR_5;
}
