
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned long long dev_sectors; int reshape_backwards; size_t major_version; scalar_t__ persistent; scalar_t__ pers; int recovery; scalar_t__ sync_thread; } ;
struct md_rdev {unsigned long long data_offset; unsigned long long sectors; unsigned long long new_data_offset; struct mddev* mddev; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* allow_new_offset ) (struct md_rdev*,unsigned long long) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 int FUNC_1 (struct md_rdev*,unsigned long long) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct md_rdev *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 unsigned long long VAR_8;
 struct mddev *VAR_9 = VAR_5->mddev;

 if (FUNC_0(VAR_6, 10, &VAR_8) < 0)
  return -VAR_2;

 if (VAR_9->sync_thread ||
     FUNC_2(VAR_3,&VAR_9->recovery))
  return -VAR_1;
 if (VAR_8 == VAR_5->data_offset)

  ;
 else if (VAR_8 > VAR_5->data_offset) {

  if (VAR_8 - VAR_5->data_offset
      + VAR_9->dev_sectors > VAR_5->sectors)
    return -VAR_0;
 }





 if (VAR_8 < VAR_5->data_offset &&
     VAR_9->reshape_backwards)
  return -VAR_2;




 if (VAR_8 > VAR_5->data_offset &&
     !VAR_9->reshape_backwards)
  return -VAR_2;

 if (VAR_9->pers && VAR_9->persistent &&
     !VAR_4[VAR_9->major_version]
     .allow_new_offset(VAR_5, VAR_8))
  return -VAR_0;
 VAR_5->new_data_offset = VAR_8;
 if (VAR_8 > VAR_5->data_offset)
  VAR_9->reshape_backwards = 1;
 else if (VAR_8 < VAR_5->data_offset)
  VAR_9->reshape_backwards = 0;

 return VAR_7;
}
