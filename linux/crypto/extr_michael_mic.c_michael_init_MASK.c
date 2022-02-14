
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct michael_mic_desc_ctx {int r; int l; scalar_t__ pending_len; } ;
struct michael_mic_ctx {int r; int l; } ;


 struct michael_mic_ctx* FUNC_0 (int ) ;
 struct michael_mic_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0)
{
 struct michael_mic_desc_ctx *VAR_1 = FUNC_1(VAR_0);
 struct michael_mic_ctx *VAR_2 = FUNC_0(VAR_0->tfm);
 VAR_1->pending_len = 0;
 VAR_1->l = VAR_2->l;
 VAR_1->r = VAR_2->r;

 return 0;
}
