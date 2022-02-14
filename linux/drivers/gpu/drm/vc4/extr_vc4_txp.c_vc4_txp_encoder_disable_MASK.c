
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_txp {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 struct vc4_txp* FUNC_3 (struct drm_encoder*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_5)
{
 struct vc4_txp *VAR_6 = FUNC_3(VAR_5);

 if (FUNC_0(VAR_2) & VAR_1) {
  unsigned long VAR_7 = VAR_4 + FUNC_4(1000);

  FUNC_1(VAR_2, VAR_0);

  while (FUNC_0(VAR_2) & VAR_1 &&
         FUNC_5(VAR_4, VAR_7))
   ;

  FUNC_2(FUNC_0(VAR_2) & VAR_1);
 }

 FUNC_1(VAR_2, VAR_3);
}
