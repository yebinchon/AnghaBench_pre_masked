
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeset {int dummy; } ;
struct era_metadata {struct writeset* writesets; struct writeset* current_writeset; } ;



__attribute__((used)) static struct writeset *FUNC_0(struct era_metadata *VAR_0)
{
 return (VAR_0->current_writeset == &VAR_0->writesets[0]) ?
  &VAR_0->writesets[1] : &VAR_0->writesets[0];
}
