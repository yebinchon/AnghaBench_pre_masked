
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {char* query; } ;


 struct advert* FUNC_0 (int,int ) ;

char *FUNC_1 (int VAR_0) {
  struct advert *VAR_1 = FUNC_0 (VAR_0, 0);
  if (!VAR_1) { return 0; }
  return VAR_1->query;
}
