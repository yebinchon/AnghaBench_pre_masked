
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_prp ;
typedef int cf_gcm_ctx ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int const*,void*,int *,int const*,size_t,int const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t,int *) ;

void FUNC_3(const cf_prp *VAR_0, void *VAR_1,
                    const uint8_t *VAR_2, size_t VAR_3,
                    const uint8_t *VAR_4, size_t VAR_5,
                    const uint8_t *VAR_6, size_t VAR_7,
                    uint8_t *VAR_8,
                    uint8_t *VAR_9, size_t VAR_10)
{
  cf_gcm_ctx VAR_11;

  FUNC_1(VAR_0, VAR_1, &VAR_11, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_2(&VAR_11, VAR_2, VAR_3, VAR_8);
  FUNC_0(&VAR_11, VAR_9, VAR_10);
}
