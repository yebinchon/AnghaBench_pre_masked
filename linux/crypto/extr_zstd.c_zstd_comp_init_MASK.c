
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zstd_ctx {int cwksp; int cctx; } ;
struct TYPE_3__ {int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t const) ;
 TYPE_1__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct zstd_ctx *VAR_2)
{
 int VAR_3 = 0;
 const ZSTD_parameters VAR_4 = FUNC_4();
 const size_t VAR_5 = FUNC_0(VAR_4.cParams);

 VAR_2->cwksp = FUNC_3(VAR_5);
 if (!VAR_2->cwksp) {
  VAR_3 = -VAR_1;
  goto out;
 }

 VAR_2->cctx = FUNC_1(VAR_2->cwksp, VAR_5);
 if (!VAR_2->cctx) {
  VAR_3 = -VAR_0;
  goto out_free;
 }
out:
 return VAR_3;
out_free:
 FUNC_2(VAR_2->cwksp);
 goto out;
}
