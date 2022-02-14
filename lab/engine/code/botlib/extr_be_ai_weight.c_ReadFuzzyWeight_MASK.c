
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int source_t ;
struct TYPE_3__ {int weight; int maxweight; int minweight; scalar_t__ type; } ;
typedef TYPE_1__ fuzzyseperator_t ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(source_t *VAR_3, fuzzyseperator_t *VAR_4)
{
 if (FUNC_0(VAR_3, "balance"))
 {
  VAR_4->type = VAR_0;
  if (!FUNC_1(VAR_3, "(")) return VAR_1;
  if (!FUNC_2(VAR_3, &VAR_4->weight)) return VAR_1;
  if (!FUNC_1(VAR_3, ",")) return VAR_1;
  if (!FUNC_2(VAR_3, &VAR_4->minweight)) return VAR_1;
  if (!FUNC_1(VAR_3, ",")) return VAR_1;
  if (!FUNC_2(VAR_3, &VAR_4->maxweight)) return VAR_1;
  if (!FUNC_1(VAR_3, ")")) return VAR_1;
 }
 else
 {
  VAR_4->type = 0;
  if (!FUNC_2(VAR_3, &VAR_4->weight)) return VAR_1;
  VAR_4->minweight = VAR_4->weight;
  VAR_4->maxweight = VAR_4->weight;
 }
 if (!FUNC_1(VAR_3, ";")) return VAR_1;
 return VAR_2;
}
