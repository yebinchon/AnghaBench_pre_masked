
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {unsigned int retry_read_offset; struct bio* retry_read_aligned_list; struct bio* retry_read_aligned; } ;
struct bio {struct bio* bi_next; } ;



__attribute__((used)) static struct bio *FUNC_0(struct r5conf *VAR_0,
      unsigned int *VAR_1)
{
 struct bio *VAR_2;

 VAR_2 = VAR_0->retry_read_aligned;
 if (VAR_2) {
  *VAR_1 = VAR_0->retry_read_offset;
  VAR_0->retry_read_aligned = ((void*)0);
  return VAR_2;
 }
 VAR_2 = VAR_0->retry_read_aligned_list;
 if(VAR_2) {
  VAR_0->retry_read_aligned_list = VAR_2->bi_next;
  VAR_2->bi_next = ((void*)0);
  *VAR_1 = 0;
 }

 return VAR_2;
}
