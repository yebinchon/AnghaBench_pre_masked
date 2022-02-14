
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int scrub_enable; int mc; int i5100_scrubbing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct mem_ctl_info *VAR_3, u32 VAR_4)
{
 struct i5100_priv *VAR_5 = VAR_3->pvt_info;
 u32 VAR_6;

 FUNC_2(VAR_5->mc, VAR_0, &VAR_6);
 if (VAR_4) {
  VAR_5->scrub_enable = 1;
  VAR_6 |= VAR_1;
  FUNC_4(&(VAR_5->i5100_scrubbing),
          VAR_2);
 } else {
  VAR_5->scrub_enable = 0;
  VAR_6 &= ~VAR_1;
  FUNC_0(&(VAR_5->i5100_scrubbing));
 }
 FUNC_3(VAR_5->mc, VAR_0, VAR_6);

 FUNC_2(VAR_5->mc, VAR_0, &VAR_6);

 VAR_4 = 5900000 * FUNC_1(VAR_6);

 return VAR_4;
}
