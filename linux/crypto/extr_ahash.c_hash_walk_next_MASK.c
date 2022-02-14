
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_hash_walk {unsigned int alignmask; unsigned int offset; unsigned int entrylen; int flags; unsigned int data; int pg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_hash_walk *VAR_2)
{
 unsigned int VAR_3 = VAR_2->alignmask;
 unsigned int VAR_4 = VAR_2->offset;
 unsigned int VAR_5 = FUNC_2(VAR_2->entrylen,
      ((unsigned int)(VAR_1)) - VAR_4);

 if (VAR_2->flags & VAR_0)
  VAR_2->data = FUNC_0(VAR_2->pg);
 else
  VAR_2->data = FUNC_1(VAR_2->pg);
 VAR_2->data += VAR_4;

 if (VAR_4 & VAR_3) {
  unsigned int VAR_6 = VAR_3 + 1 - (VAR_4 & VAR_3);

  if (VAR_5 > VAR_6)
   VAR_5 = VAR_6;
 }

 VAR_2->entrylen -= VAR_5;
 return VAR_5;
}
