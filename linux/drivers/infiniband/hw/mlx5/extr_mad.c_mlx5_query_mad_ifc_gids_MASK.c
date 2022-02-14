
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {scalar_t__ raw; } ;
typedef int u8 ;
struct ib_smp {scalar_t__ data; void* attr_mod; int attr_id; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_7 (struct ib_device*) ;

int FUNC_8(struct ib_device *VAR_4, u8 VAR_5, int VAR_6,
       union ib_gid *VAR_7)
{
 struct ib_smp *VAR_8 = ((void*)0);
 struct ib_smp *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_0;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_8 || !VAR_9)
  goto out;

 FUNC_1(VAR_8);
 VAR_8->attr_id = VAR_3;
 VAR_8->attr_mod = FUNC_0(VAR_5);

 VAR_10 = FUNC_6(FUNC_7(VAR_4), 1, 1, VAR_5, ((void*)0), ((void*)0), VAR_8,
      VAR_9);
 if (VAR_10)
  goto out;

 FUNC_5(VAR_7->raw, VAR_9->data + 8, 8);

 FUNC_1(VAR_8);
 VAR_8->attr_id = VAR_2;
 VAR_8->attr_mod = FUNC_0(VAR_6 / 8);

 VAR_10 = FUNC_6(FUNC_7(VAR_4), 1, 1, VAR_5, ((void*)0), ((void*)0), VAR_8,
      VAR_9);
 if (VAR_10)
  goto out;

 FUNC_5(VAR_7->raw + 8, VAR_9->data + (VAR_6 % 8) * 8, 8);

out:
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 return VAR_10;
}
