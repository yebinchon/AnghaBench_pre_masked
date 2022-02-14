
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int M; int br; int last; } ;


 int FUNC_0 (int *,int const) ;

__attribute__((used)) static int FUNC_1 (struct list_decoder *VAR_0) {
  const int VAR_1 = VAR_0->M;
  return VAR_0->last += FUNC_0 (&VAR_0->br, VAR_1) + (1 << VAR_1);
}
