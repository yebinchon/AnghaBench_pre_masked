
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct xucred {int dummy; } ;
struct timeval {int tv_sec; } ;
struct TYPE_11__ {scalar_t__ oa_base; int oa_length; } ;
struct audata {TYPE_1__ au_origcred; int au_shfaults; } ;
typedef int bool_t ;
struct TYPE_12__ {int x_op; } ;
typedef TYPE_2__ XDR ;
struct TYPE_13__ {TYPE_1__ ah_cred; } ;
typedef TYPE_3__ AUTH ;


 struct audata* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int *,struct xucred*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_7(AUTH *VAR_3, void *VAR_4)
{
 struct audata *VAR_5 = FUNC_0(VAR_3);
 struct xucred VAR_6;
 uint32_t VAR_7;
 struct timeval VAR_8;
 XDR VAR_9;
 int VAR_10;

 if (VAR_3->ah_cred.oa_base == VAR_5->au_origcred.oa_base) {

  return (VAR_0);
 }
 VAR_5->au_shfaults ++;


 FUNC_6(&VAR_9, VAR_5->au_origcred.oa_base,
     VAR_5->au_origcred.oa_length, VAR_1);
 VAR_10 = FUNC_5(&VAR_9, &VAR_7, &VAR_6);
 if (! VAR_10)
  goto done;


 FUNC_3(&VAR_8);
 VAR_7 = VAR_8.tv_sec;
 VAR_9.x_op = VAR_2;
 FUNC_2(&VAR_9, 0);

 VAR_10 = FUNC_5(&VAR_9, &VAR_7, &VAR_6);
 if (! VAR_10)
  goto done;
 VAR_3->ah_cred = VAR_5->au_origcred;
 FUNC_4(VAR_3);
done:
 FUNC_1(&VAR_9);
 return (VAR_10);
}
