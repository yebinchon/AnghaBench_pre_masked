
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_hash_walk {unsigned int alignmask; unsigned int data; unsigned int offset; int flags; int sg; int total; int pg; scalar_t__ entrylen; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct crypto_hash_walk*) ;
 int FUNC_3 (struct crypto_hash_walk*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct crypto_hash_walk *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_2->alignmask;

 VAR_2->data -= VAR_2->offset;

 if (VAR_2->entrylen && (VAR_2->offset & VAR_4) && !VAR_3) {
  unsigned int VAR_5;

  VAR_2->offset = FUNC_0(VAR_2->offset, VAR_4 + 1);
  VAR_5 = FUNC_6(VAR_2->entrylen,
        (unsigned int)(VAR_1 - VAR_2->offset));
  if (VAR_5) {
   VAR_2->entrylen -= VAR_5;
   VAR_2->data += VAR_2->offset;
   return VAR_5;
  }
 }

 if (VAR_2->flags & VAR_0)
  FUNC_4(VAR_2->pg);
 else {
  FUNC_5(VAR_2->data);




  FUNC_1(VAR_2->flags);
 }

 if (VAR_3)
  return VAR_3;

 if (VAR_2->entrylen) {
  VAR_2->offset = 0;
  VAR_2->pg++;
  return FUNC_3(VAR_2);
 }

 if (!VAR_2->total)
  return 0;

 VAR_2->sg = FUNC_7(VAR_2->sg);

 return FUNC_2(VAR_2);
}
