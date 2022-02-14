
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gfree; int gmallocarray; int greallocarray; int grealloc; int gsubstrdup; int gstrndup; int gstrdup; int gcalloc; int gmalloc; } ;
typedef TYPE_1__ git_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_0(git_allocator *VAR_9)
{
 VAR_9->gmalloc = VAR_2;
 VAR_9->gcalloc = VAR_0;
 VAR_9->gstrdup = VAR_6;
 VAR_9->gstrndup = VAR_7;
 VAR_9->gsubstrdup = VAR_8;
 VAR_9->grealloc = VAR_4;
 VAR_9->greallocarray = VAR_5;
 VAR_9->gmallocarray = VAR_3;
 VAR_9->gfree = VAR_1;
 return 0;
}
