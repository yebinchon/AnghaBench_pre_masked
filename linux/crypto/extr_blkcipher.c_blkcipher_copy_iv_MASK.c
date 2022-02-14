
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct blkcipher_walk {unsigned int walk_blocksize; unsigned int alignmask; unsigned int ivsize; int iv; scalar_t__ buffer; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,unsigned int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_6(struct blkcipher_walk *VAR_2)
{
 unsigned VAR_3 = VAR_2->walk_blocksize;
 unsigned VAR_4 = FUNC_0(VAR_3, VAR_2->alignmask + 1);
 unsigned int VAR_5 = VAR_4 * 2 +
       VAR_2->ivsize + FUNC_4(VAR_4, VAR_2->ivsize) -
       (VAR_2->alignmask + 1);
 u8 *VAR_6;

 VAR_5 += VAR_2->alignmask & ~(FUNC_2() - 1);
 VAR_2->buffer = FUNC_3(VAR_5, VAR_1);
 if (!VAR_2->buffer)
  return -VAR_0;

 VAR_6 = (u8 *)FUNC_0((unsigned long)VAR_2->buffer, VAR_2->alignmask + 1);
 VAR_6 = FUNC_1(VAR_6, VAR_3) + VAR_4;
 VAR_6 = FUNC_1(VAR_6, VAR_3) + VAR_4;
 VAR_6 = FUNC_1(VAR_6, VAR_2->ivsize);

 VAR_2->iv = FUNC_5(VAR_6, VAR_2->iv, VAR_2->ivsize);
 return 0;
}
