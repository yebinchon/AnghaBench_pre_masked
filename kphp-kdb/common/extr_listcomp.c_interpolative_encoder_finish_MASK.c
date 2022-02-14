
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_encoder {scalar_t__ k; scalar_t__ K; int L; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct list_encoder*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct list_encoder *VAR_0) {
  FUNC_0 (VAR_0->k == VAR_0->K + 1);
  FUNC_2 (VAR_0, 0, VAR_0->K + 1);
  FUNC_1 (VAR_0->L);
}
