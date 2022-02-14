
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {unsigned char* mem; unsigned int memblocksize; unsigned int memblocks; scalar_t__ memaccessloops; int memlocation; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rand_data*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct rand_data *VAR_2, __u64 VAR_3)
{
 unsigned int VAR_4 = 0;
 __u64 VAR_5 = 0;


 __u64 VAR_6 =
  FUNC_0(VAR_2, 7, 0);

 if (((void*)0) == VAR_2 || ((void*)0) == VAR_2->mem)
  return 0;
 VAR_4 = VAR_2->memblocksize * VAR_2->memblocks;





 if (VAR_3)
  VAR_6 = VAR_3;

 for (VAR_5 = 0; VAR_5 < (VAR_2->memaccessloops + VAR_6); VAR_5++) {
  unsigned char *VAR_7 = VAR_2->mem + VAR_2->memlocation;





  *VAR_7 = (*VAR_7 + 1) & 0xff;





  VAR_2->memlocation = VAR_2->memlocation + VAR_2->memblocksize - 1;
  VAR_2->memlocation = VAR_2->memlocation % VAR_4;
 }
 return VAR_5;
}
