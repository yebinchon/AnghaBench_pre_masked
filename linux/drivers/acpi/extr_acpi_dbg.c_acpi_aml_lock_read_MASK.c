
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct circ_buf {int dummy; } ;
struct TYPE_2__ {unsigned long flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct circ_buf*,unsigned long) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct circ_buf *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_2.lock);
 if (!FUNC_0(VAR_4)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 if (!FUNC_1(VAR_3, VAR_4)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 VAR_2.flags |= VAR_4;
out:
 FUNC_3(&VAR_2.lock);
 return VAR_5;
}
