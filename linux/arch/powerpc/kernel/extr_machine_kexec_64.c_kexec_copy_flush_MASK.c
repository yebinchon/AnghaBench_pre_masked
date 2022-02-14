
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {long nr_segments; int head; int segment; } ;
struct kexec_segment {scalar_t__ memsz; scalar_t__ mem; } ;
typedef int ranges ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct kexec_segment*,int ,int) ;

void FUNC_4(struct kimage *VAR_1)
{
 long VAR_2, VAR_3 = VAR_1->nr_segments;
 struct kexec_segment VAR_4[VAR_0];


 FUNC_3(VAR_4, VAR_1->segment, sizeof(VAR_4));







 FUNC_1(VAR_1->head);





 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_2((unsigned long)FUNC_0(VAR_4[VAR_2].mem),
   (unsigned long)FUNC_0(VAR_4[VAR_2].mem + VAR_4[VAR_2].memsz));
}
