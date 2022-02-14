
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg {int type; void* id; } ;


 int FUNC_0 (int ,void**,int,int*) ;
 void* VAR_0 ;

int FUNC_1 (struct arg *VAR_1, void **VAR_2, int VAR_3, int *VAR_4) {
  if (VAR_3 <= 10) { return -1; }
  int VAR_5 = 0;
  VAR_2[VAR_5 ++] = VAR_0;
  VAR_2[VAR_5 ++] = VAR_1->id;
  int VAR_6 = FUNC_0 (VAR_1->type, VAR_2 + VAR_5, VAR_3 - VAR_5, VAR_4);
  if (VAR_6 < 0) { return -1;}
  VAR_5 += VAR_6;
  return VAR_5;
}
