
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {scalar_t__ end; scalar_t__ start; } ;



__attribute__((used)) static int FUNC_0(struct range *VAR_0, struct range *VAR_1)
{
 return !(VAR_0->end <= VAR_1->start || VAR_1->end <= VAR_0->start);
}
