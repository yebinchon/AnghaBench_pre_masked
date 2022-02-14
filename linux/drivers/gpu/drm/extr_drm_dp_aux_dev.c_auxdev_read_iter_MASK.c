
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct kiocb {scalar_t__ ki_pos; TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct drm_dp_aux_dev {int usecount; TYPE_2__* aux; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
typedef int buf ;
struct TYPE_5__ {scalar_t__ is_remote; } ;
struct TYPE_4__ {struct drm_dp_aux_dev* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,struct iov_iter*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct kiocb *VAR_6, struct iov_iter *VAR_7)
{
 struct drm_dp_aux_dev *VAR_8 = VAR_6->ki_filp->private_data;
 loff_t VAR_9 = VAR_6->ki_pos;
 ssize_t VAR_10 = 0;

 if (!FUNC_1(&VAR_8->usecount))
  return -VAR_3;

 FUNC_6(VAR_7, VAR_0 - VAR_9);

 while (FUNC_5(VAR_7)) {
  uint8_t VAR_11[VAR_1];
  ssize_t VAR_12 = FUNC_7(FUNC_5(VAR_7), sizeof(VAR_11));

  if (FUNC_8(VAR_5)) {
   VAR_10 = -VAR_4;
   break;
  }

  if (VAR_8->aux->is_remote)
   VAR_10 = FUNC_4(VAR_8->aux, VAR_9, VAR_11,
         VAR_12);
  else
   VAR_10 = FUNC_3(VAR_8->aux, VAR_9, VAR_11, VAR_12);

  if (VAR_10 <= 0)
   break;

  if (FUNC_2(VAR_11, VAR_10, VAR_7) != VAR_10) {
   VAR_10 = -VAR_2;
   break;
  }

  VAR_9 += VAR_10;
 }

 if (VAR_9 != VAR_6->ki_pos)
  VAR_10 = VAR_9 - VAR_6->ki_pos;
 VAR_6->ki_pos = VAR_9;

 if (FUNC_0(&VAR_8->usecount))
  FUNC_9(&VAR_8->usecount);

 return VAR_10;
}
