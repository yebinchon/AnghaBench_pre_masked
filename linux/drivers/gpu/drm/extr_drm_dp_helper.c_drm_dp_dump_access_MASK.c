
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
struct drm_dp_aux {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,char const*,int,...) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void
FUNC_2(const struct drm_dp_aux *VAR_1,
     u8 VAR_2, uint VAR_3, void *VAR_4, int VAR_5)
{
 const char *VAR_6 = VAR_2 == VAR_0 ? "->" : "<-";

 if (VAR_5 > 0)
  FUNC_0("%s: 0x%05x AUX %s (ret=%3d) %*ph\n",
        VAR_1->name, VAR_3, VAR_6, VAR_5, FUNC_1(VAR_5, 20), VAR_4);
 else
  FUNC_0("%s: 0x%05x AUX %s (ret=%3d)\n",
        VAR_1->name, VAR_3, VAR_6, VAR_5);
}
