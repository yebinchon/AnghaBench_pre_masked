
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter {scalar_t__ value; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2 (const void *VAR_2, const void *VAR_3) {
  const struct cache_uri *VAR_4 = (const struct cache_uri *) VAR_2;
  const struct cache_uri *VAR_5 = (const struct cache_uri *) VAR_3;
  struct amortization_counter *VAR_6 = ((struct amortization_counter *) &VAR_4->data[VAR_0]);
  struct amortization_counter *VAR_7 = ((struct amortization_counter *) &VAR_5->data[VAR_0]);
  return VAR_6->value > VAR_7->value ? -1 : FUNC_0(VAR_6->value < VAR_7->value) ? 1 : -FUNC_1 (VAR_4->data + VAR_1, VAR_5->data + VAR_1);
}
