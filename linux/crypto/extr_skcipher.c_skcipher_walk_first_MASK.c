
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {unsigned long alignmask; int * page; scalar_t__ iv; int * buffer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct skcipher_walk*) ;
 int FUNC_3 (struct skcipher_walk*) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct skcipher_walk *VAR_1)
{
 if (FUNC_0(FUNC_1()))
  return -VAR_0;

 VAR_1->buffer = ((void*)0);
 if (FUNC_4(((unsigned long)VAR_1->iv & VAR_1->alignmask))) {
  int VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_1->page = ((void*)0);

 return FUNC_3(VAR_1);
}
