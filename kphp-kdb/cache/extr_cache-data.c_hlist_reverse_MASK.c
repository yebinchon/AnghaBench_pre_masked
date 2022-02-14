
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {struct cache_uri* hnext; } ;



__attribute__((used)) static struct cache_uri *FUNC_0 (struct cache_uri *VAR_0) {
  struct cache_uri *VAR_1, *VAR_2, *VAR_3 = ((void*)0);
  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
    VAR_2 = VAR_1->hnext;
    VAR_1->hnext = VAR_3;
    VAR_3 = VAR_1;
  }
  return VAR_3;
}
