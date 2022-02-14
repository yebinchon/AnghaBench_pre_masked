
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zstd_ctx {int dwksp; int dctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 () ;
 int FUNC_1 (int ,size_t const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t const) ;

__attribute__((used)) static int FUNC_4(struct zstd_ctx *VAR_2)
{
 int VAR_3 = 0;
 const size_t VAR_4 = FUNC_0();

 VAR_2->dwksp = FUNC_3(VAR_4);
 if (!VAR_2->dwksp) {
  VAR_3 = -VAR_1;
  goto out;
 }

 VAR_2->dctx = FUNC_1(VAR_2->dwksp, VAR_4);
 if (!VAR_2->dctx) {
  VAR_3 = -VAR_0;
  goto out_free;
 }
out:
 return VAR_3;
out_free:
 FUNC_2(VAR_2->dwksp);
 goto out;
}
