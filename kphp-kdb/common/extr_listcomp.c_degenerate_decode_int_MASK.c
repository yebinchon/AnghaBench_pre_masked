
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {scalar_t__ k; scalar_t__ K; } ;



__attribute__((used)) static int FUNC_0 (struct list_decoder *VAR_0) {
  if (VAR_0->k >= VAR_0->K) {
    return 0x7fffffff;
  }
  return VAR_0->k++;
}
