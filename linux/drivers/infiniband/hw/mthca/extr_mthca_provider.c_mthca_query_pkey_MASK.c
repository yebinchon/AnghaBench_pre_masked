
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ib_smp {scalar_t__ data; int attr_mod; int attr_id; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ib_smp*) ;
 int FUNC_3 (struct ib_smp*) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int,int ,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_7 (struct ib_device*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_3,
       u8 VAR_4, u16 VAR_5, u16 *VAR_6)
{
 struct ib_smp *VAR_7 = ((void*)0);
 struct ib_smp *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_0;

 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_1);
 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_1);
 if (!VAR_7 || !VAR_8)
  goto out;

 FUNC_2(VAR_7);
 VAR_7->attr_id = VAR_2;
 VAR_7->attr_mod = FUNC_1(VAR_5 / 32);

 VAR_9 = FUNC_6(FUNC_7(VAR_3), 1, 1,
       VAR_4, ((void*)0), ((void*)0), VAR_7, VAR_8);
 if (VAR_9)
  goto out;

 *VAR_6 = FUNC_0(((__be16 *) VAR_8->data)[VAR_5 % 32]);

 out:
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 return VAR_9;
}
