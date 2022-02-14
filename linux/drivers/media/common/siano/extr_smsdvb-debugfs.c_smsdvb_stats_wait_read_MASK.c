
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int stats_count; int lock; scalar_t__ stats_was_read; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct smsdvb_debugfs *VAR_0)
{
 int VAR_1 = 1;

 FUNC_0(&VAR_0->lock);

 if (VAR_0->stats_was_read)
  goto exit;

 VAR_1 = VAR_0->stats_count;

exit:
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
