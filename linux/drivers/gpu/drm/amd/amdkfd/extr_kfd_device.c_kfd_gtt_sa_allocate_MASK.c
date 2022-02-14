
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kfd_mem_obj {unsigned int range_start; unsigned int range_end; int cpu_ptr; scalar_t__ gpu_addr; } ;
struct kfd_dev {unsigned int gtt_sa_num_of_chunks; unsigned int gtt_sa_chunk_size; int gtt_sa_lock; int gtt_sa_bitmap; int gtt_start_cpu_ptr; int gtt_start_gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct kfd_mem_obj**) ;
 struct kfd_mem_obj* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned int,int ) ;

int FUNC_9(struct kfd_dev *VAR_3, unsigned int VAR_4,
   struct kfd_mem_obj **VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;

 if (VAR_4 == 0)
  return -VAR_0;

 if (VAR_4 > VAR_3->gtt_sa_num_of_chunks * VAR_3->gtt_sa_chunk_size)
  return -VAR_1;

 *VAR_5 = FUNC_4(sizeof(struct kfd_mem_obj), VAR_2);
 if (!(*VAR_5))
  return -VAR_1;

 FUNC_7("Allocated mem_obj = %p for size = %d\n", *VAR_5, VAR_4);

 VAR_7 = 0;

 FUNC_5(&VAR_3->gtt_sa_lock);

kfd_gtt_restart_search:

 VAR_6 = FUNC_0(VAR_3->gtt_sa_bitmap,
     VAR_3->gtt_sa_num_of_chunks,
     VAR_7);

 FUNC_7("Found = %d\n", VAR_6);


 if (VAR_6 == VAR_3->gtt_sa_num_of_chunks)
  goto kfd_gtt_no_free_chunk;


 (*VAR_5)->range_start = VAR_6;
 (*VAR_5)->range_end = VAR_6;
 (*VAR_5)->gpu_addr = FUNC_2(
     VAR_3->gtt_start_gpu_addr,
     VAR_6,
     VAR_3->gtt_sa_chunk_size);
 (*VAR_5)->cpu_ptr = FUNC_1(
     VAR_3->gtt_start_cpu_ptr,
     VAR_6,
     VAR_3->gtt_sa_chunk_size);

 FUNC_7("gpu_addr = %p, cpu_addr = %p\n",
   (uint64_t *) (*VAR_5)->gpu_addr, (*VAR_5)->cpu_ptr);


 if (VAR_4 <= VAR_3->gtt_sa_chunk_size) {
  FUNC_7("Single bit\n");
  FUNC_8(VAR_6, VAR_3->gtt_sa_bitmap);
  goto kfd_gtt_out;
 }


 VAR_8 = VAR_4 - VAR_3->gtt_sa_chunk_size;
 do {
  (*VAR_5)->range_end =
   FUNC_0(VAR_3->gtt_sa_bitmap,
     VAR_3->gtt_sa_num_of_chunks, ++VAR_6);





  if ((*VAR_5)->range_end != VAR_6) {
   VAR_7 = VAR_6;
   goto kfd_gtt_restart_search;
  }




  if (VAR_6 == VAR_3->gtt_sa_num_of_chunks)
   goto kfd_gtt_no_free_chunk;


  if (VAR_8 <= VAR_3->gtt_sa_chunk_size)
   VAR_8 = 0;
  else
   VAR_8 -= VAR_3->gtt_sa_chunk_size;

 } while (VAR_8 > 0);

 FUNC_7("range_start = %d, range_end = %d\n",
  (*VAR_5)->range_start, (*VAR_5)->range_end);


 for (VAR_6 = (*VAR_5)->range_start;
  VAR_6 <= (*VAR_5)->range_end;
  VAR_6++)
  FUNC_8(VAR_6, VAR_3->gtt_sa_bitmap);

kfd_gtt_out:
 FUNC_6(&VAR_3->gtt_sa_lock);
 return 0;

kfd_gtt_no_free_chunk:
 FUNC_7("Allocation failed with mem_obj = %p\n", VAR_5);
 FUNC_6(&VAR_3->gtt_sa_lock);
 FUNC_3(VAR_5);
 return -VAR_1;
}
