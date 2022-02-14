
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int quality; int read; int * name; } ;
struct u2fzero_device {TYPE_2__ hwrng; TYPE_1__* hdev; int * rng_name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int * FUNC_1 (int *,int ,char*,int ,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct u2fzero_device *VAR_4,
         unsigned int VAR_5)
{
 VAR_4->rng_name = FUNC_1(&VAR_4->hdev->dev, VAR_2,
  "%s-rng%u", VAR_0, VAR_5);
 if (VAR_4->rng_name == ((void*)0))
  return -VAR_1;

 VAR_4->hwrng.name = VAR_4->rng_name;
 VAR_4->hwrng.read = VAR_3;
 VAR_4->hwrng.quality = 1;

 return FUNC_0(&VAR_4->hdev->dev, &VAR_4->hwrng);
}
