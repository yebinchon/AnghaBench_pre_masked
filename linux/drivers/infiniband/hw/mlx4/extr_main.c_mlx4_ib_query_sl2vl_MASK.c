
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union sl2vl_tbl_to_u64 {int sl64; int * sl8; } ;
typedef int u8 ;
typedef int u64 ;
struct ib_smp {int * data; scalar_t__ attr_mod; int attr_id; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_smp*) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct ib_device*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_5, u8 VAR_6, u64 *VAR_7)
{
 union sl2vl_tbl_to_u64 VAR_8;
 struct ib_smp *VAR_9 = ((void*)0);
 struct ib_smp *VAR_10 = ((void*)0);
 int VAR_11 = VAR_3;
 int VAR_12 = -VAR_0;
 int VAR_13;

 if (FUNC_6(FUNC_7(VAR_5)->dev)) {
  *VAR_7 = 0;
  return 0;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_9 || !VAR_10)
  goto out;

 FUNC_0(VAR_9);
 VAR_9->attr_id = VAR_2;
 VAR_9->attr_mod = 0;

 if (FUNC_5(FUNC_7(VAR_5)->dev))
  VAR_11 |= VAR_4;

 VAR_12 = FUNC_4(FUNC_7(VAR_5), VAR_11, VAR_6, ((void*)0), ((void*)0),
      VAR_9, VAR_10);
 if (VAR_12)
  goto out;

 for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
  VAR_8[VAR_13] = ((struct ib_smp *)VAR_10)->data[VAR_13];
 *VAR_7 = VAR_8;

out:
 FUNC_1(VAR_9);
 FUNC_1(VAR_10);
 return VAR_12;
}
