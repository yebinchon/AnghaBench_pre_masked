
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long resync_max; unsigned long long resync_min; scalar_t__ ro; int chunk_sectors; int lock; int recovery_wait; int recovery; } ;
typedef size_t ssize_t ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 scalar_t__ FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t
FUNC_7(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 FUNC_2(&VAR_4->lock);
 if (FUNC_4(VAR_5, "max", 3) == 0)
  VAR_4->resync_max = VAR_3;
 else {
  unsigned long long VAR_8;
  int VAR_9;

  VAR_7 = -VAR_1;
  if (FUNC_0(VAR_5, 10, &VAR_8))
   goto out_unlock;
  if (VAR_8 < VAR_4->resync_min)
   goto out_unlock;

  VAR_7 = -VAR_0;
  if (VAR_8 < VAR_4->resync_max &&
      VAR_4->ro == 0 &&
      FUNC_5(VAR_2, &VAR_4->recovery))
   goto out_unlock;


  VAR_9 = VAR_4->chunk_sectors;
  if (VAR_9) {
   sector_t VAR_10 = VAR_8;

   VAR_7 = -VAR_1;
   if (FUNC_1(VAR_10, VAR_9))
    goto out_unlock;
  }
  VAR_4->resync_max = VAR_8;
 }
 FUNC_6(&VAR_4->recovery_wait);
 VAR_7 = 0;
out_unlock:
 FUNC_3(&VAR_4->lock);
 return VAR_7 ?: VAR_6;
}
