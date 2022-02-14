
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct blkcipher_walk {int out; scalar_t__ alignmask; scalar_t__ buffer; } ;


 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int * FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_3(struct blkcipher_walk *VAR_0,
           unsigned int VAR_1)
{
 u8 *VAR_2;

 VAR_2 = (u8 *)FUNC_0((unsigned long)VAR_0->buffer, VAR_0->alignmask + 1);
 VAR_2 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, &VAR_0->out, VAR_1, 1);
}
