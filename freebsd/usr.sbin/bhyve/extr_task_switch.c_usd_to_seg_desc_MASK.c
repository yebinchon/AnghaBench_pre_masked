
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct user_segment_descriptor {int sd_gran; int sd_type; int sd_dpl; int sd_p; int sd_xx; int sd_def32; } ;
struct seg_desc {int base; int limit; int access; } ;


 scalar_t__ FUNC_0 (struct user_segment_descriptor*) ;
 int FUNC_1 (struct user_segment_descriptor*) ;

__attribute__((used)) static struct seg_desc
FUNC_2(struct user_segment_descriptor *VAR_0)
{
 struct seg_desc VAR_1;

 VAR_1.base = (u_int)FUNC_0(VAR_0);
 if (VAR_0->sd_gran)
  VAR_1.limit = (u_int)(FUNC_1(VAR_0) << 12) | 0xfff;
 else
  VAR_1.limit = (u_int)FUNC_1(VAR_0);
 VAR_1.access = VAR_0->sd_type | VAR_0->sd_dpl << 5 | VAR_0->sd_p << 7;
 VAR_1.access |= VAR_0->sd_xx << 12;
 VAR_1.access |= VAR_0->sd_def32 << 14;
 VAR_1.access |= VAR_0->sd_gran << 15;

 return (VAR_1);
}
