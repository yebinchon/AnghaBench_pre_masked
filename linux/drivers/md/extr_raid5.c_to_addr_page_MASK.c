
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid5_percpu {int scribble_obj_size; struct page** scribble; } ;
struct page {int dummy; } ;



__attribute__((used)) static struct page **FUNC_0(struct raid5_percpu *VAR_0, int VAR_1)
{
 return VAR_0->scribble + VAR_1 * VAR_0->scribble_obj_size;
}
