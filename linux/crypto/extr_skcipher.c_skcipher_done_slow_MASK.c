
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_walk {int flags; int out; scalar_t__ alignmask; scalar_t__ buffer; } ;


 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,unsigned int,int) ;
 int * FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct skcipher_walk *VAR_1, unsigned int VAR_2)
{
 u8 *VAR_3;

 VAR_3 = (u8 *)FUNC_0((unsigned long)VAR_1->buffer, VAR_1->alignmask + 1);
 VAR_3 = FUNC_2(VAR_3, VAR_2);
 FUNC_1(VAR_3, &VAR_1->out, VAR_2,
          (VAR_1->flags & VAR_0) ? 2 : 1);
 return 0;
}
