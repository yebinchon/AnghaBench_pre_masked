
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcss_segment {int do_nonshared; unsigned long start_addr; unsigned long end; int vm_segtype; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,unsigned long*,unsigned long*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct dcss_segment* FUNC_4 (char*) ;

int
FUNC_5 (char *VAR_4, int VAR_5, unsigned long *VAR_6,
  unsigned long *VAR_7)
{
 struct dcss_segment *VAR_8;
 int VAR_9;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_3);
 VAR_8 = FUNC_4 (VAR_4);
 if (VAR_8 == ((void*)0))
  VAR_9 = FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7);
 else {
  if (VAR_5 == VAR_8->do_nonshared) {
   FUNC_3(&VAR_8->ref_count);
   *VAR_6 = VAR_8->start_addr;
   *VAR_7 = VAR_8->end;
   VAR_9 = VAR_8->vm_segtype;
  } else {
   *VAR_6 = *VAR_7 = 0;
   VAR_9 = -VAR_1;
  }
 }
 FUNC_2(&VAR_3);
 return VAR_9;
}
