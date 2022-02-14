
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct scatterlist {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (void*,struct scatterlist*,int,int,int) ;
 void* FUNC_4 (struct scatterlist*) ;

void FUNC_5(struct scatterlist *VAR_3, struct scatterlist *VAR_4,
    int VAR_5, int VAR_6, u8 VAR_7,
    unsigned long VAR_8)
{
 void *VAR_9;
 int VAR_10;

 VAR_8 >>= VAR_7;
 VAR_8 &= VAR_0;

 if (!VAR_8)
  return;

 VAR_9 = FUNC_4(VAR_3);
 VAR_10 = FUNC_1(VAR_6);

 if (VAR_4 && (VAR_8 & VAR_0))
  FUNC_3(VAR_9, VAR_4, VAR_5, VAR_6, 1);

 if (VAR_8 & VAR_1)
  FUNC_0((unsigned long)VAR_9, VAR_10);
 else if (VAR_8 & VAR_2)
  FUNC_2(VAR_3);
}
