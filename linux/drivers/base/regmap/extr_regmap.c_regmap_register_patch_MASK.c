
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int patch_regs; int cache_bypass; int async; int lock_arg; int (* unlock ) (int ) ;int (* lock ) (int ) ;struct reg_sequence* patch; } ;
struct reg_sequence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct regmap*,struct reg_sequence const*,int) ;
 struct reg_sequence* FUNC_2 (struct reg_sequence*,int,int ) ;
 int FUNC_3 (struct reg_sequence*,struct reg_sequence const*,int) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct regmap *VAR_2, const struct reg_sequence *VAR_3,
     int VAR_4)
{
 struct reg_sequence *VAR_5;
 int VAR_6;
 bool VAR_7;

 if (FUNC_0(VAR_4 <= 0, "invalid registers number (%d)\n",
     VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_2->patch,
       sizeof(struct reg_sequence) * (VAR_2->patch_regs + VAR_4),
       VAR_1);
 if (VAR_5) {
  FUNC_3(VAR_5 + VAR_2->patch_regs, VAR_3, VAR_4 * sizeof(*VAR_3));
  VAR_2->patch = VAR_5;
  VAR_2->patch_regs += VAR_4;
 } else {
  return -VAR_0;
 }

 VAR_2->lock(VAR_2->lock_arg);

 VAR_7 = VAR_2->cache_bypass;

 VAR_2->cache_bypass = 1;
 VAR_2->async = 1;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 VAR_2->async = 0;
 VAR_2->cache_bypass = VAR_7;

 VAR_2->unlock(VAR_2->lock_arg);

 FUNC_4(VAR_2);

 return VAR_6;
}
