
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid5_percpu {size_t scribble_obj_size; void* scribble; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
typedef int addr_conv_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct raid5_percpu *VAR_1,
     int VAR_2, int VAR_3, gfp_t VAR_4)
{
 size_t VAR_5 =
  sizeof(struct page *) * (VAR_2+2) +
  sizeof(addr_conv_t) * (VAR_2+2);
 void *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_1->scribble);

 VAR_1->scribble = VAR_6;
 VAR_1->scribble_obj_size = VAR_5;
 return 0;
}
