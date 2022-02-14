
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_freq {scalar_t__ armclk; scalar_t__ hclk; } ;



__attribute__((used)) static bool FUNC_0(struct s3c_freq *VAR_0)
{

 return VAR_0->armclk == VAR_0->hclk;
}
