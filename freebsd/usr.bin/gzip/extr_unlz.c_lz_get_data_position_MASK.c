
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lz_decoder {scalar_t__ pos; scalar_t__ ppos; } ;
typedef scalar_t__ off_t ;



__attribute__((used)) static off_t
FUNC_0(const struct lz_decoder *VAR_0)
{
 return VAR_0->ppos + VAR_0->pos;
}
