
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_filepair {TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;


 struct diff_filepair* FUNC_0 (int) ;

__attribute__((used)) static struct diff_filepair *FUNC_1(struct diff_filepair *VAR_0)
{
 struct diff_filepair *VAR_1 = FUNC_0(sizeof(struct diff_filepair));
 VAR_1->one = VAR_0->one;
 VAR_1->two = VAR_0->two;
 VAR_1->one->count++;
 VAR_1->two->count++;
 return VAR_1;
}
