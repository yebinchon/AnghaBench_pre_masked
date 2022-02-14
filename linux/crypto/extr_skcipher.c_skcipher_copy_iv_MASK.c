
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_walk {unsigned int alignmask; unsigned int ivsize; unsigned int stride; int flags; int iv; int buffer; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int * FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct skcipher_walk*) ;

__attribute__((used)) static int FUNC_7(struct skcipher_walk *VAR_2)
{
 unsigned VAR_3 = FUNC_2() - 1;
 unsigned VAR_4 = VAR_2->alignmask;
 unsigned VAR_5 = VAR_2->ivsize;
 unsigned VAR_6 = VAR_2->stride;
 unsigned VAR_7;
 unsigned VAR_8;
 u8 *VAR_9;

 VAR_7 = FUNC_0(VAR_6, VAR_4 + 1);


 VAR_8 = VAR_4 & ~VAR_3;

 if (VAR_2->flags & VAR_1)
  VAR_8 += VAR_5;
 else {
  VAR_8 += VAR_7 + VAR_5;


  VAR_8 += (VAR_6 - 1) & ~(VAR_4 | VAR_3);
 }

 VAR_2->buffer = FUNC_3(VAR_8, FUNC_6(VAR_2));
 if (!VAR_2->buffer)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_2->buffer, VAR_4 + 1);
 VAR_9 = FUNC_5(VAR_9, VAR_6) + VAR_7;

 VAR_2->iv = FUNC_4(VAR_9, VAR_2->iv, VAR_2->ivsize);
 return 0;
}
