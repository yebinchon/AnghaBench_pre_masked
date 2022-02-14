
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mce {int dummy; } ;
struct TYPE_2__ {int creator_id; } ;
struct cper_mce_record {int mce; TYPE_1__ hdr; } ;
typedef int ssize_t ;
typedef int rcd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mce*,int *,int) ;

ssize_t FUNC_6(struct mce *VAR_3, u64 *VAR_4)
{
 struct cper_mce_record VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(&VAR_7);
 if (VAR_6)
  return VAR_6;
retry:
 VAR_6 = FUNC_2(&VAR_7, VAR_4);
 if (VAR_6)
  goto out;

 if (*VAR_4 == VAR_0)
  goto out;
 VAR_6 = FUNC_3(*VAR_4, &VAR_5.hdr, sizeof(VAR_5));

 if (VAR_6 == -VAR_2)
  goto retry;
 else if (VAR_6 < 0)
  goto out;

 else if (VAR_6 != sizeof(VAR_5) ||
   !FUNC_4(&VAR_5.hdr.creator_id, &VAR_1))
  goto retry;
 FUNC_5(VAR_3, &VAR_5.mce, sizeof(*VAR_3));
 VAR_6 = sizeof(*VAR_3);
out:
 FUNC_1();

 return VAR_6;
}
