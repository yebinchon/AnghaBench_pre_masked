
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int cf_cmac ;
typedef int cf_aes_context ;
struct TYPE_3__ {size_t blocksz; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,void const*,size_t,int *) ;
 scalar_t__ FUNC_4 (int *,void const*,size_t) ;

__attribute__((used)) static void FUNC_5(const void *VAR_1, size_t VAR_2,
                       const void *VAR_3, size_t VAR_4,
                       const void *VAR_5, size_t VAR_6)
{
  uint8_t VAR_7[16];

  FUNC_0(VAR_0.blocksz == VAR_6);

  cf_aes_context VAR_8;
  FUNC_1(&VAR_8, VAR_1, VAR_2);

  cf_cmac VAR_9;
  FUNC_2(&VAR_9, &VAR_0, &VAR_8);
  FUNC_3(&VAR_9, VAR_3, VAR_4, VAR_7);

  FUNC_0(FUNC_4(VAR_7, VAR_5, VAR_0.blocksz) == 0);
}
