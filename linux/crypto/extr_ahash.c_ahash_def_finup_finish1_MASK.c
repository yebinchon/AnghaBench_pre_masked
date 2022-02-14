
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int complete; } ;
struct ahash_request {TYPE_1__ base; } ;
struct TYPE_4__ {int (* final ) (struct ahash_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahash_request*,int) ;
 TYPE_2__* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_3, int VAR_4)
{
 if (VAR_4)
  goto out;

 VAR_3->base.complete = VAR_2;

 VAR_4 = FUNC_1(VAR_3)->final(VAR_3);
 if (VAR_4 == -VAR_1 || VAR_4 == -VAR_0)
  return VAR_4;

out:
 FUNC_0(VAR_3, VAR_4);
 return VAR_4;
}
