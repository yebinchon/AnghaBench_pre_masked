
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf4350_state {int fpfd; int clkin; struct adf4350_platform_data* pdata; } ;
struct adf4350_platform_data {scalar_t__ ref_div2_en; scalar_t__ ref_doubler_en; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct adf4350_state *VAR_1, unsigned short VAR_2)
{
 struct adf4350_platform_data *VAR_3 = VAR_1->pdata;

 do {
  VAR_2++;
  VAR_1->fpfd = (VAR_1->clkin * (VAR_3->ref_doubler_en ? 2 : 1)) /
      (VAR_2 * (VAR_3->ref_div2_en ? 2 : 1));
 } while (VAR_1->fpfd > VAR_0);

 return VAR_2;
}
