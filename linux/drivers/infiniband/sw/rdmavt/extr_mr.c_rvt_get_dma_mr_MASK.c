
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int access_flags; } ;
struct ib_mr {int dummy; } ;
struct rvt_mr {TYPE_1__ mr; struct ib_mr ibmr; } ;
struct ib_pd {int dummy; } ;
struct TYPE_6__ {scalar_t__ user; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct ib_pd*) ;
 int FUNC_2 (struct rvt_mr*) ;
 struct rvt_mr* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct ib_pd*,int ,int ) ;

struct ib_mr *FUNC_7(struct ib_pd *VAR_3, int VAR_4)
{
 struct rvt_mr *VAR_5;
 struct ib_mr *VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_3)->user)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5) {
  VAR_6 = FUNC_0(-VAR_0);
  goto bail;
 }

 VAR_7 = FUNC_6(&VAR_5->mr, VAR_3, 0, 0);
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_7);
  goto bail;
 }

 VAR_7 = FUNC_4(&VAR_5->mr, 1);
 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_7);
  goto bail_mregion;
 }

 VAR_5->mr.access_flags = VAR_4;
 VAR_6 = &VAR_5->ibmr;
done:
 return VAR_6;

bail_mregion:
 FUNC_5(&VAR_5->mr);
bail:
 FUNC_2(VAR_5);
 goto done;
}
