
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zstd_ctx {int cctx; } ;
typedef int ZSTD_parameters ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int *,unsigned int,int const*,unsigned int,int const) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_1, unsigned int VAR_2,
      u8 *VAR_3, unsigned int *VAR_4, void *VAR_5)
{
 size_t VAR_6;
 struct zstd_ctx *VAR_7 = VAR_5;
 const ZSTD_parameters VAR_8 = FUNC_2();

 VAR_6 = FUNC_0(VAR_7->cctx, VAR_3, *VAR_4, VAR_1, VAR_2, VAR_8);
 if (FUNC_1(VAR_6))
  return -VAR_0;
 *VAR_4 = VAR_6;
 return 0;
}
