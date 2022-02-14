
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {unsigned int gtt_sa_chunk_size; unsigned int gtt_sa_num_of_chunks; int gtt_sa_lock; int gtt_sa_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct kfd_dev *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_0(VAR_5 < VAR_6))
  return -VAR_1;
 if (FUNC_0(VAR_5 == 0))
  return -VAR_1;
 if (FUNC_0(VAR_6 == 0))
  return -VAR_1;

 VAR_4->gtt_sa_chunk_size = VAR_6;
 VAR_4->gtt_sa_num_of_chunks = VAR_5 / VAR_6;

 VAR_7 = (VAR_4->gtt_sa_num_of_chunks + VAR_0 - 1) /
  VAR_0;

 VAR_4->gtt_sa_bitmap = FUNC_1(VAR_7, sizeof(long), VAR_3);

 if (!VAR_4->gtt_sa_bitmap)
  return -VAR_2;

 FUNC_3("gtt_sa_num_of_chunks = %d, gtt_sa_bitmap = %p\n",
   VAR_4->gtt_sa_num_of_chunks, VAR_4->gtt_sa_bitmap);

 FUNC_2(&VAR_4->gtt_sa_lock);

 return 0;

}
