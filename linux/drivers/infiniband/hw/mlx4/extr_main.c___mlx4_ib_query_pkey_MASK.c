
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ib_smp {scalar_t__ data; int attr_mod; int attr_id; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_smp*) ;
 int FUNC_3 (struct ib_smp*) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct ib_device*) ;

int FUNC_9(struct ib_device *VAR_5, u8 VAR_6, u16 VAR_7,
    u16 *VAR_8, int VAR_9)
{
 struct ib_smp *VAR_10 = ((void*)0);
 struct ib_smp *VAR_11 = ((void*)0);
 int VAR_12 = VAR_3;
 int VAR_13 = -VAR_0;

 VAR_10 = FUNC_5(sizeof *VAR_10, VAR_1);
 VAR_11 = FUNC_4(sizeof *VAR_11, VAR_1);
 if (!VAR_10 || !VAR_11)
  goto out;

 FUNC_2(VAR_10);
 VAR_10->attr_id = VAR_2;
 VAR_10->attr_mod = FUNC_1(VAR_7 / 32);

 if (FUNC_7(FUNC_8(VAR_5)->dev) && VAR_9)
  VAR_12 |= VAR_4;

 VAR_13 = FUNC_6(FUNC_8(VAR_5), VAR_12, VAR_6, ((void*)0), ((void*)0),
      VAR_10, VAR_11);
 if (VAR_13)
  goto out;

 *VAR_8 = FUNC_0(((__be16 *) VAR_11->data)[VAR_7 % 32]);

out:
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 return VAR_13;
}
