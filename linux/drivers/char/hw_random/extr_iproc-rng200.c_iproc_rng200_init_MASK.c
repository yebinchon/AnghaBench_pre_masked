
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iproc_rng200_dev {scalar_t__ base; } ;
struct hwrng {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct iproc_rng200_dev* FUNC_2 (struct hwrng*) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_3)
{
 struct iproc_rng200_dev *VAR_4 = FUNC_2(VAR_3);
 uint32_t VAR_5;


 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_1;
 FUNC_1(VAR_5, VAR_4->base + VAR_0);

 return 0;
}
