
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alginfo {int algtype; int keylen; int keylen_pad; int key_dma; int key_virt; scalar_t__ key_inline; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int* const,int ,int) ;
 int FUNC_2 (int* const,int) ;
 int FUNC_3 (int* const,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_6(u32 * const VAR_9, struct alginfo *VAR_10)
{
 u32 VAR_11;





 VAR_11 = (VAR_10->algtype & VAR_3) |
   (0x20 << VAR_2);

 if (VAR_10->key_inline) {
  int VAR_12;

  if (VAR_10->keylen > VAR_10->keylen_pad) {
   FUNC_2(VAR_9, VAR_8 | VAR_11 |
      VAR_7 |
      VAR_4 | VAR_10->keylen);
   FUNC_3(VAR_9, VAR_10->key_dma);

   VAR_12 = (FUNC_0(VAR_10->keylen_pad, VAR_0) -
     VAR_1) / VAR_0;
  } else {
   FUNC_2(VAR_9, VAR_8 | VAR_11 |
      VAR_6 |
      VAR_4 | VAR_10->keylen);
   FUNC_1(VAR_9, VAR_10->key_virt, VAR_10->keylen);

   VAR_12 = (FUNC_0(VAR_10->keylen_pad, VAR_0) -
     FUNC_0(VAR_10->keylen, VAR_0)) /
    VAR_0;
  }


  if (VAR_12)
   (*VAR_9) = FUNC_5(FUNC_4(*VAR_9) + VAR_12);
 } else {
  FUNC_2(VAR_9, VAR_8 | VAR_11 |
     VAR_7 | VAR_5 |
     VAR_10->keylen);
  FUNC_3(VAR_9, VAR_10->key_dma);
 }
}
