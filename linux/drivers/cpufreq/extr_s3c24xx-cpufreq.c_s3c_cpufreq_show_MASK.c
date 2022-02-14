
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int p_divisor; int h_divisor; } ;
struct TYPE_5__ {int pclk; int hclk; int armclk; int fclk; } ;
struct TYPE_4__ {int frequency; } ;
struct s3c_cpufreq_config {TYPE_3__ divs; TYPE_2__ freq; TYPE_1__ pll; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0,
     struct s3c_cpufreq_config *VAR_1)
{
 FUNC_0("%s: Fvco=%u, F=%lu, A=%lu, H=%lu (%u), P=%lu (%u)\n",
       VAR_0, VAR_1->pll.frequency, VAR_1->freq.fclk, VAR_1->freq.armclk,
       VAR_1->freq.hclk, VAR_1->divs.h_divisor,
       VAR_1->freq.pclk, VAR_1->divs.p_divisor);
}
