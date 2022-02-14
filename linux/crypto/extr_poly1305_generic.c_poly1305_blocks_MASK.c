
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct poly1305_desc_ctx {int r; int h; int sset; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct poly1305_desc_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int *,int *,int const*,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct poly1305_desc_ctx *VAR_1,
       const u8 *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;

 if (FUNC_2(!VAR_1->sset)) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_2 += VAR_3 - VAR_5;
  VAR_3 = VAR_5;
 }

 FUNC_1(&VAR_1->h, &VAR_1->r,
     VAR_2, VAR_3 / VAR_0, VAR_4);
}
